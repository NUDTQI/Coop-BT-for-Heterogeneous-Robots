import rclpy
from rclpy.action import ActionServer
from rclpy.action.server import ServerGoalHandle
from ros_bt_py_interfaces.action import ExecuteRemoteCapability
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
import time


class ActionServerNode(Node):
    def __init__(self):
        super().__init__('action_server_node')

        self._action_server = ActionServer(
            self,
            ExecuteRemoteCapability,
            'your_action_name',
            self.execute_callback
        )
        self.get_logger().info('Action Server is ready and listening for goals.')

    async def execute_callback(self, goal_handle: ServerGoalHandle):
        messages = goal_handle.request.implementation_name
        self.get_logger().info('Received goal request:' + messages)

        feedback_msg = ExecuteRemoteCapability.Feedback()
        feedback_msg.completion_progress = 0.0

        goal_handle.publish_feedback(feedback_msg)

        for i in range(1, 6):
            feedback_msg.completion_progress = i * 1.0
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f'Feedback: {i * 20}% completed')
            time.sleep(1)

        goal_handle.succeed()
        
        result = ExecuteRemoteCapability.Result()
        result.error_message = 'Action completed successfully.'
        self.get_logger().info(result.error_message)
        return result

def main(args=None):
    rclpy.init(args=args)

    
    action_server_node = ActionServerNode()

    
    executor = MultiThreadedExecutor()
    executor.add_node(action_server_node)

    try:
        executor.spin()  
    except KeyboardInterrupt:
        pass
    finally:
        action_server_node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
