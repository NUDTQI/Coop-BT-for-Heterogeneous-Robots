from os.path import join

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument


def generate_launch_description():
    tb3_gazebo_dir = get_package_share_directory("turtlebot3_gazebo")
    gazebo_ros_dir = get_package_share_directory("gazebo_ros")
    tb3_world_dir = get_package_share_directory("tb3_worlds")
    default_world = join(tb3_world_dir, "worlds", "sim_house.world")
    
    # Configure the number of robots
    num_robots = 2
    use_sim_time = LaunchConfiguration("use_sim_time", default="true")
    x_pose_sum=[None] * num_robots
    x_pose_sum[0]='0.0'#LaunchConfiguration('x_pose_0')
    x_pose_sum[1]='1.0'#LaunchConfiguration('x_pose_1')
    y_pose_sum=[None] * num_robots
    y_pose_sum[0]='0.0'#LaunchConfiguration('y_pose_0')
    y_pose_sum[1]='1.0'#LaunchConfiguration('y_pose_1')

    # Start Gazebo server and client
    gzserver_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            join(gazebo_ros_dir, "launch", "gzserver.launch.py")
        ),
        launch_arguments={"world": default_world}.items(),
    )
    gzclient_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            join(gazebo_ros_dir, "launch", "gzclient.launch.py")
        )
    )

    nodes = [gzserver_cmd, gzclient_cmd]

    # Iterate to spawn each robot with unique namespace and prefix
    for i in range(0,2):#num_robots):

        namespace=f'turtle{i}'                ###add
        robot_prefix=f"turtle_{i}"            ###add
        ##可以加打印信息，print？打印出命名空间和prefix看一下
        print(namespace)
        
        #namespace = LaunchConfiguration(f'ns_{i}', default=f'turtlebot_{i}')
        #robot_prefix = LaunchConfiguration(f'prefix_{i}', default=f'turtle_{i}_')

        # Robot State Publisher for each robot
        robot_state_publisher_cmd = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                join(tb3_gazebo_dir, "launch", "robot_state_publisher.launch.py")
            ),
            launch_arguments={
                "use_sim_time": "true",
                "namespace": namespace,
                "robot_prefix": robot_prefix,
            }.items(),
        )
        nodes.append(robot_state_publisher_cmd)

        # Spawn each Turtlebot
        x_pose = x_pose_sum[i]#LaunchConfiguration(f'x_pose_{i}')#, default=str(i * 2.0))  # Example offset for demonstration
        y_pose = y_pose_sum[i]#LaunchConfiguration(f'y_pose_{i}')#, default="0.0")#
        print(x_pose)
        print("2222222222222222222222")
        spawn_turtlebot_cmd = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                join(tb3_gazebo_dir, "launch", "spawn_turtlebot3.launch.py")
            ),
            launch_arguments={
                "x_pose": x_pose,
                "y_pose": y_pose,
                "namespace": namespace,
                "robot_prefix": robot_prefix,
                #"num_robot":num_robots,  ###add
            }.items(),
        )
        nodes.append(spawn_turtlebot_cmd)

    return LaunchDescription(nodes)
