#!/usr/bin/env python3

"""
Spawns blocks randomly given a list of possible locations.

This node spawns one block each (red, blue, and green), so at least 
3 locations are required in the current implementation.
"""

import os
import math
import yaml
import random
import transforms3d
import rclpy
from rclpy.node import Node
from ament_index_python.packages import get_package_share_directory
from gazebo_msgs.srv import SpawnEntity, DeleteEntity

#add
from geometry_msgs.msg import TransformStamped
from tf2_ros import StaticTransformBroadcaster

from sensor_msgs.msg import PointCloud2, PointField
from std_msgs.msg import Header
import struct

from tf2_ros import Buffer, TransformListener
import rclpy.time
from rclpy.duration import Duration
import time
import std_msgs.msg
from rclpy.qos import (
    QoSDurabilityPolicy,
    QoSHistoryPolicy,
    QoSProfile,
    QoSReliabilityPolicy,
)


# Define some parameters
model_dir = os.path.join(get_package_share_directory("tb3_worlds"), "models")


class BlockSpawner(Node):
    def __init__(self):
        super().__init__("block_spawner")
        self.cli = self.create_client(SpawnEntity, "/spawn_entity")
        self.delete_cli = self.create_client(DeleteEntity, "/delete_entity")  #add
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("Waiting for service...")
        while not self.delete_cli.wait_for_service(timeout_sec=1.0):  #add
            self.get_logger().info("Waiting for delete service...")
        self.get_logger().info("Started block spawner service")

        # 添加静态 TF 广播器
        self.tf_broadcaster = StaticTransformBroadcaster(self)
        self.publisher = self.create_publisher(PointCloud2, '/block_pointcloud', 10)
        self.points=[]

        
        # TF 监听器
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)


        self.declare_parameter("location_file")

    
    
    
    
    def wait_for_tf(self, target_frame='map', timeout=10.0):
        """等待指定的 TF 帧可用"""
        self.get_logger().info(f"Waiting for TF frame: {target_frame}")
        start_time = self.get_clock().now()
        while (self.get_clock().now() - start_time).nanoseconds / 1e9 < timeout:
            try:
                # 尝试查询 TF
                self.tf_buffer.lookup_transform(
                    target_frame, 
                    target_frame, 
                    rclpy.time.Time()
                )
                self.get_logger().info(f"✅ TF frame '{target_frame}' is available")
                return True
            except Exception as e:
                # TF 还不可用，继续等待
                try:
                    rclpy.spin_once(self, timeout_sec=0.5)
                except KeyboardInterrupt:
                    break
        
        self.get_logger().error(f"❌ TF frame '{target_frame}' not available after {timeout}s")
        return False

    def wait_for_subscribers(self, topic_name, min_count=1, timeout=15.0):
        """等待话题有足够的订阅者"""
        self.get_logger().info(f"Waiting for subscribers on {topic_name}...")
        start_time = self.get_clock().now()
        while (self.get_clock().now() - start_time).nanoseconds / 1e9 < timeout:
            count = self.publisher.get_subscription_count()
            if count >= min_count:
                self.get_logger().info(f"✅ Found {count} subscriber(s) on {topic_name}")
                return True
            self.get_logger().info(f"  Waiting... ({count} subscriber(s))")
            try:
                rclpy.spin_once(self, timeout_sec=0.5)  # 每次等 0.5 秒
            except KeyboardInterrupt:
                break
        self.get_logger().warning(f"⚠️ Timeout waiting for subscribers on {topic_name}")
        return False
    



    def delete_model(self,msg):#, model_name):  # 原来作为单独函数使用的时候
        """Deletes a model from Gazebo"""
        req = DeleteEntity.Request()


        count=0
        model_name = ''
        self.get_logger().warn(f"delete msg:{msg}")
        for n in self.points:
            if n[0]-msg.data[0]<0.12 and n[0]-msg.data[0]>-0.12 and n[1]-msg.data[1]<0.12 and n[1]-msg.data[1]>-0.12 :
                model_name = self.model_names[count]
                self.model_names.remove(model_name)
                self.points.remove(n)# 可选：从点云列表中移除对应点
                break
            count=count+1
        
        req.name = model_name

        future = self.delete_cli.call_async(req)
        #rclpy.spin_until_future_complete(self, future)

        self.get_logger().info(f"✅ Successfully deleted {model_name}")
        # 移除之后小车不会撞到，避障也不会避开，但是地图上的点云图标没有消失


        self.get_logger().info(f"new block {self.model_names} at {self.points}")

        #frame_name = f'{model_name}_frame'
        #self.points = [p for p in self.points if not self.is_same_position(p, frame_name)]
        

    def is_same_position(self, point, frame_name):
        """辅助函数：根据 TF 判断点是否对应某个 frame(简化版可比较坐标)"""
        # 这里可以扩展为查询 TF 获取实际位置做比对
        # 当前示例假设你知道每个 block 的大致坐标映射关系
        return True  # 简化处理，按需实现精确匹配
    
    
    
    
    def spawn_blocks(self):
        # Parse locations YAML file
        location_file = self.get_parameter("location_file").value
        self.get_logger().info(f"Using location file: {location_file}")
        with open(location_file, "r") as f:
            locations = yaml.load(f, Loader=yaml.FullLoader)

        # Distance from navigation waypoint to spawn object
        block_spawn_offset = 0.1

        # Spawn blocks in random locations
        self.model_names = ["red_block", "red1_block", "blue_block","green_block", "green1_block","green2_block","blue1_block","yellow_block"]
        #修改版-5green ["red_block", "red1_block", "green_block3","green_block", "green1_block","green2_block","blue1_block","green_block4"]
        #原版-8task 
        #测试版-全green ["green_block", "green1_block","green2_block","green_block3","green_block4","green_block5"]##"white_block", 
        #新补的-5task ["red_block", "red1_block", "blue_block","green_block", "green1_block"]
        ### add change 0312
        sampled_locs = list(locations.keys())#random.sample(list(locations.keys()), len(self.model_names))
        self.get_logger().info(f"sampled_locs:{sampled_locs}")
        for mdl, loc in zip(self.model_names, sampled_locs):
            x, y, theta = locations[loc]
            self.get_logger().info(f"model name:{mdl},target pose:{x}-{y}")
            x += block_spawn_offset * math.cos(theta)
            y += block_spawn_offset * math.sin(theta)
            self.get_logger().info(f"model name:{mdl},location:{x}-{y}")
            self.spawn_model(mdl, x, y, theta)




        # === 关键改进：等待 TF 和 subscriber ===
        if not self.wait_for_tf('map'):
            self.get_logger().error("TF 'map' not available, aborting pointcloud publication")
            return

        if not self.wait_for_subscribers('/block_pointcloud'):
            self.get_logger().error("No subscribers found, aborting pointcloud publication")
            return

        # 额外延迟 2 秒，确保 costmap 完全初始化
        self.get_logger().info("⏳ Waiting additional 2 seconds for costmap initialization...")
        start_time = self.get_clock().now()
        while (self.get_clock().now() - start_time) < Duration(seconds=2.0):
            rclpy.spin_once(self, timeout_sec=0.1)



        
        self.timer = self.create_timer(0.2, self.publish_pointcloud)

        
        time.sleep(5)
        self.clear_block_msg = self.create_subscription(
            std_msgs.msg.Float32MultiArray, 
            "/clear_block", 
            self.delete_model,
            qos_profile=QoSProfile(
            reliability=QoSReliabilityPolicy.RELIABLE,
            durability=QoSDurabilityPolicy.VOLATILE,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=10))
        #self.timer_1 = self.create_timer(0.5, self.delete_model)
        #self.delete_model('red_block)


    def spawn_model(self, model_name, x, y, theta):
        """Spawns a model in Gazebo given a position"""
        
        model_file = os.path.join(model_dir, model_name, "model.sdf")
        with open(model_file, "r") as f:
            model_xml = f.read()

        req = SpawnEntity.Request()
        req.name = model_name
        req.xml = model_xml
        req.initial_pose.position.x = x
        req.initial_pose.position.y = y
        quat = transforms3d.euler.euler2quat(0, 0, theta)
        req.initial_pose.orientation.w = quat[0]
        req.initial_pose.orientation.x = quat[1]
        req.initial_pose.orientation.y = quat[2]
        req.initial_pose.orientation.z = quat[3]
        future = self.cli.call_async(req)
        rclpy.spin_until_future_complete(self, future)


        # === 发布静态 TF: map -> <block>_frame ===
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'map'
        t.child_frame_id = f'{model_name}_frame'  # 如 red_block_frame
        t.transform.translation.x = x
        t.transform.translation.y = y
        t.transform.translation.z = 0.0
        t.transform.rotation.w = 1.0 # = req.initial_pose.orientation

        self.tf_broadcaster.sendTransform(t)

        self.points.append((x, y, 0.0))


        return future.result()
    
    def publish_pointcloud(self):

        msg = PointCloud2()
        msg.header = Header()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = 'map'
        msg.height = 1
        msg.width = len(self.points)
        msg.fields = [
            PointField(name='x', offset=0, datatype=PointField.FLOAT32, count=1),
            PointField(name='y', offset=4, datatype=PointField.FLOAT32, count=1),
            PointField(name='z', offset=8, datatype=PointField.FLOAT32, count=1)
        ]
        msg.is_bigendian = False
        msg.point_step = 12
        msg.row_step = msg.point_step * msg.width  #* len(self.points)
        msg.is_dense = True
        msg.data = b''#
        buffer = bytearray()#buffer = []
        for x, y, z in self.points:
            buffer += struct.pack('fff', x, y, z)#[struct.pack('fff', x, y, z)]
        msg.data = bytes(buffer)#msg.data = b''.join(buffer)
        
        self.publisher.publish(msg)    



if __name__ == "__main__":
    rclpy.init()

    spawner = BlockSpawner()
    spawner.spawn_blocks()

    

    rclpy.spin(spawner)
    rclpy.shutdown()
