#!/usr/bin/env python3
"""
行为树自动化控制器
支持动态加载、停止、切换 YAML 行为树文件
"""

import rclpy
from rclpy.node import Node
from ros_bt_py_interfaces.srv import LoadTree, ControlTreeExecution
from ros_bt_py_interfaces.msg import Tree
import argparse
import sys
import time


class BTreeAutomator(Node):
    """行为树自动化控制器"""
    
    def __init__(self, namespace):
        super().__init__('btree_automator', namespace=namespace)
        self.namespace = namespace.lstrip('/')
        
        # 创建服务客户端
        self.load_client = self.create_client(
            LoadTree,
            f'/{self.namespace}/BehaviorTreeNode/load_tree'
        )
        
        self.control_client = self.create_client(
            ControlTreeExecution,
            f'/{self.namespace}/BehaviorTreeNode/control_tree_execution'
        )
        
        self.get_logger().info(f'行为树自动化控制器已启动 (/{self.namespace})')
    
    def wait_for_service(self, client, timeout=60.0):
        """等待服务可用"""
        start_time = time.time()
        while not client.wait_for_service(timeout_sec=1.0):
            if time.time() - start_time > timeout:
                self.get_logger().error(f'等待服务超时 ({timeout}s)')
                return False
            self.get_logger().info('等待服务...')
        return True
    
    def load_tree(self, tree_path):
        """加载行为树文件"""
        if not self.wait_for_service(self.load_client):
            return False
        
        req = LoadTree.Request()
        req.tree = Tree(path=tree_path)
        req.permissive = False
        
        self.get_logger().info(f'正在加载树文件：{tree_path}')
        future = self.load_client.call_async(req)
        
        try:
            rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)
            response = future.result()
            
            if response and response.success:
                self.get_logger().info(f'✅ 树加载成功：{tree_path}')
                return True
            else:
                error_msg = response.error_message if response else "未知错误"
                self.get_logger().error(f'❌ 树加载失败：{error_msg}')
                return False
                
        except Exception as e:
            self.get_logger().error(f'服务调用异常：{str(e)}')
            return False
    
    def control_tree(self, command, tick_frequency_hz=0.0):
        """控制行为树执行"""
        if not self.wait_for_service(self.control_client):
            return False
        
        req = ControlTreeExecution.Request()
        req.command = command
        req.tick_frequency_hz = tick_frequency_hz
        
        future = self.control_client.call_async(req)
        
        try:
            rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)
            response = future.result()
            
            if response and response.success:
                return True
            else:
                error_msg = response.error_message if response else "未知错误"
                self.get_logger().error(f'控制失败：{error_msg}')
                return False
                
        except Exception as e:
            self.get_logger().error(f'服务调用异常：{str(e)}')
            return False
    
    def start_tree(self, tick_frequency_hz=10.0):
        """启动行为树（周期性 tick）"""
        self.get_logger().info('🚀 启动行为树')
        return self.control_tree(
            ControlTreeExecution.Request.TICK_PERIODICALLY,
            tick_frequency_hz
        )
    
    def stop_tree(self):
        """停止行为树"""
        self.get_logger().info('🛑 停止行为树')
        return self.control_tree(ControlTreeExecution.Request.SHUTDOWN)#STOP)
    
    def shutdown_tree(self):
        """关闭行为树"""
        self.get_logger().info('⏹️ 关闭行为树')
        time.sleep(0.5)
        return self.control_tree(ControlTreeExecution.Request.SHUTDOWN)
    
    def run_tree_sequence(self, tree_path, duration=6.0, tick_frequency_hz=10.0):
        """运行行为树序列：加载 -> 启动 -> 等待 -> 停止"""
        self.get_logger().info(f'=== 开始执行任务树 (持续时间：{duration}s) ===')
        
        # 1. 加载树
        if not self.load_tree(tree_path):
            return False
        
        # 2. 启动树
        time.sleep(0.5)
        if not self.start_tree(tick_frequency_hz):
            return False
        
        # 3. 运行指定时间
        self.get_logger().info(f'行为树运行中... ({duration}秒)')
        time.sleep(duration)
        
        # 4. 停止树
        # if not self.stop_tree():
        #     self.get_logger().warn('停止树时出现问题，继续执行')
        
        self.get_logger().info(f'=== 任务树执行完成 ===')
        return True


def main():
    parser = argparse.ArgumentParser(description='行为树自动化控制器')
    parser.add_argument('-n', '--namespace', required=True, help='机器人命名空间 (如：turtle0)')
    parser.add_argument('-t', '--tree', required=True, help='行为树文件路径')
    parser.add_argument('-d', '--duration', type=float, default=8.0, help='运行持续时间 (秒)')
    parser.add_argument('-f', '--frequency', type=float, default=10.0, help='tick 频率 (Hz)')
    parser.add_argument('--start', action='store_true', help='加载后启动')
    parser.add_argument('--stop', action='store_true', help='停止当前树')
    parser.add_argument('--shutdown', action='store_true', help='关闭当前树')
    
    args = parser.parse_args()
    
    rclpy.init()
    controller = BTreeAutomator(args.namespace)
    
    try:
        if args.stop:
            success = controller.stop_tree()
            if not success:
                sys.exit(1)
        elif args.shutdown:
            success = controller.shutdown_tree()
            if not success:
                sys.exit(1)
        elif args.tree:
            if args.start:
                success = controller.run_tree_sequence(
                    args.tree, 
                    args.duration,
                    args.frequency
                )
                if not success:
                    sys.exit(1)
            else:
                controller.load_tree(args.tree)
                rclpy.spin(controller)
        
    except KeyboardInterrupt:
        pass
    # finally:
    #     controller.destroy_node()
    #     rclpy.shutdown()


if __name__ == '__main__':
    main()