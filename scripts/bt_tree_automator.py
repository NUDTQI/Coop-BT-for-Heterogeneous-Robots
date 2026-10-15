#!/usr/bin/env python3


import rclpy
from rclpy.node import Node
from ros_bt_py_interfaces.srv import LoadTree, ControlTreeExecution
from ros_bt_py_interfaces.msg import Tree
import argparse
import sys
import time


class BTreeAutomator(Node):
    
    
    def __init__(self, namespace):
        super().__init__('btree_automator', namespace=namespace)
        self.namespace = namespace.lstrip('/')
        
        
        self.load_client = self.create_client(
            LoadTree,
            f'/{self.namespace}/BehaviorTreeNode/load_tree'
        )
        
        self.control_client = self.create_client(
            ControlTreeExecution,
            f'/{self.namespace}/BehaviorTreeNode/control_tree_execution'
        )
        
        self.get_logger().info(f'Start BT controller (/{self.namespace})')
    
    def wait_for_service(self, client, timeout=60.0):
        
        start_time = time.time()
        while not client.wait_for_service(timeout_sec=1.0):
            if time.time() - start_time > timeout:
                self.get_logger().error(f'Timeout when waiting for service ({timeout}s)')
                return False
            self.get_logger().info('Wating for service...')
        return True
    
    def load_tree(self, tree_path):
        
        if not self.wait_for_service(self.load_client):
            return False
        
        req = LoadTree.Request()
        req.tree = Tree(path=tree_path)
        req.permissive = False
        
        self.get_logger().info(f'Loading BT files: {tree_path}')
        future = self.load_client.call_async(req)
        
        try:
            rclpy.spin_until_future_complete(self, future, timeout_sec=5.0)
            response = future.result()
            
            if response and response.success:
                self.get_logger().info(f'Successfullt loading BT: {tree_path}')
                return True
            else:
                error_msg = response.error_message if response else "Error not specified"
                self.get_logger().error(f'Failed to load BT: {error_msg}')
                return False
                
        except Exception as e:
            self.get_logger().error(f'Service has mistakes: {str(e)}')
            return False
    
    def control_tree(self, command, tick_frequency_hz=0.0):
        
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
                error_msg = response.error_message if response else "unknown mistake"
                self.get_logger().error(f'Failed to control: {error_msg}')
                return False
                
        except Exception as e:
            self.get_logger().error(f'Service has mistakes: {str(e)}')
            return False
    
    def start_tree(self, tick_frequency_hz=10.0):
        
        self.get_logger().info('Start BT...')
        return self.control_tree(
            ControlTreeExecution.Request.TICK_PERIODICALLY,
            tick_frequency_hz
        )
    
    def stop_tree(self):
        
        self.get_logger().info('Stop BT...')
        return self.control_tree(ControlTreeExecution.Request.SHUTDOWN)#STOP)
    
    def shutdown_tree(self):
        
        self.get_logger().info('Shutdown BT...')
        time.sleep(0.5)
        return self.control_tree(ControlTreeExecution.Request.SHUTDOWN)
    
    def run_tree_sequence(self, tree_path, duration=6.0, tick_frequency_hz=10.0):
        
        self.get_logger().info(f'Start to execute task BT... (Duration: {duration}s)')
        
        
        if not self.load_tree(tree_path):
            return False
        
        
        time.sleep(0.5)
        if not self.start_tree(tick_frequency_hz):
            return False
        
        
        self.get_logger().info(f'BT is working... ({duration}s)')
        time.sleep(duration)
        
        
        
        self.get_logger().info(f'Execution of the task BT is done.')
        return True


def main():
    parser = argparse.ArgumentParser(description='BT automation controller')
    parser.add_argument('-n', '--namespace', required=True, help='robot namespace (such as turtle0)')
    parser.add_argument('-t', '--tree', required=True, help='BT file path')
    parser.add_argument('-d', '--duration', type=float, default=8.0, help='working duration (seconds)')
    parser.add_argument('-f', '--frequency', type=float, default=10.0, help='tick frequency (Hz)')
    parser.add_argument('--start', action='store_true', help='start BT after loading')
    parser.add_argument('--stop', action='store_true', help='stop the current BT')
    parser.add_argument('--shutdown', action='store_true', help='shutdown the current BT')
    
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