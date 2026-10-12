from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from os.path import join
import os


def generate_launch_description():
    tb3_nav2_dir = get_package_share_directory("turtlebot3_navigation2")
    tb3_world_dir = get_package_share_directory("tb3_worlds")
    #robot_prefix = LaunchConfiguration('robot_prefix')
    
    ####
    #default_map = join(tb3_world_dir, "maps", "sim_house_map.yaml")
    #default_world = join(tb3_world_dir, "worlds", "sim_house.world")
    #os.environ['TURTLEBOT3_MODEL']='waffle_pi'
    
    # Spawn the world and robot
    spawn_world = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            join(tb3_world_dir, "launch", "tb3_world_rewrite.launch.py")###!!!! "tb3_world.launch.py")
        ),
        launch_arguments={
            "x_pose_0": LaunchConfiguration("x_pose_0", default=0.0),
            "y_pose_0": LaunchConfiguration("y_pose_0", default=0.0),
            "x_pose_1": LaunchConfiguration("x_pose_1", default=0.5),
            "y_pose_1": LaunchConfiguration("y_pose_1", default=0.0),
            "x_pose_2": LaunchConfiguration("x_pose_2", default=0.0),
            "y_pose_2": LaunchConfiguration("y_pose_2", default=0.5),
            "use_sim_time": LaunchConfiguration("use_sim_time", default='true'),
            ###"robot_prefix":robot_prefix 
        }.items(),
    )
    # For some reason, there is an error with starting both spawn world and nav
    # in this launch file without this delay ???
    nodes=LaunchDescription()      # nodes=[]           #############add
    spawn_world_delayed = TimerAction(period=3.0, actions=[spawn_world])
    #nodes.append(spawn_world_delayed)
    nodes.add_action(spawn_world_delayed)

    #######################################change

    ############### change 5
    
    num_robot=3
    
    default_map = join(tb3_world_dir, "maps", "sim_house_map.yaml")
    print(default_map)
    
    #x_pose_1=LaunchConfiguration("x_pose_1", default=1.0),
    
    nav_stack = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                join(tb3_nav2_dir, "launch", "navigation2_rewrite2.launch.py") # "navigation2.launch.py")
            ),
            launch_arguments={
                "use_sim_time": LaunchConfiguration("use_sim_time", default='true'),
                "map": LaunchConfiguration("map", default=default_map),
                #try：将for0-2从
                #"robot_prefix":LaunchConfiguration("robot_prefix", default=robot_prefix), ###add
                #"namespace":LaunchConfiguration("namespace", default=namespace),
                "x_pose_0": LaunchConfiguration("x_pose_0", default=0.0),
                "y_pose_0": LaunchConfiguration("y_pose_0", default=0.0),
                "x_pose_1": LaunchConfiguration("x_pose_1", default=0.7),
                "y_pose_1": LaunchConfiguration("y_pose_1", default=0.2),
                "x_pose_2": LaunchConfiguration("x_pose_2", default=0.0),
                "y_pose_2": LaunchConfiguration("y_pose_2", default=0.7),
                "x_pose_3": LaunchConfiguration("x_pose_3", default=-0.7),
                "y_pose_3": LaunchConfiguration("y_pose_3", default=-0.2),
                "x_pose_4": LaunchConfiguration("x_pose_4", default=0.0),
                "y_pose_4": LaunchConfiguration("y_pose_4", default=-0.7),
            }.items(),
            )
    #nodes.append(nav_stack)
    nodes.add_action(nav_stack)
    '''
    for i in range(0,num_robot):
        # Start navigation stack
        namespace=f"turtle{i}"                ###add
        robot_prefix=f"turtle_{i}"            ###add
        print(namespace)
        print("33333333333333333333")
        print(default_map)

        
    
        # Set AMCL initial pose
        amcl_init_pose = Node(
            package="tb3_worlds",
            executable="set_init_amcl_pose.py",
            name="init_pose_publisher",
            ##add
            namespace=namespace,
            #parameters=[{"robot_prefix":i},{"x_pose":x_pose_1},{"y_pose":i},]    ##[{"robot_number":2}]
            parameters=[{"robot_prefix":i},{"x_pose":i},{"y_pose":i},]
            )
        #nodes.append(amcl_init_pose)
        nodes.add_action(amcl_init_pose)
    
    #######################################change

    
    # Start navigation stack
    default_map = join(tb3_world_dir, "maps", "sim_house_map.yaml")
    nav_stack = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            join(tb3_nav2_dir, "launch", "navigation2.launch.py")
        ),
        launch_arguments={
            "use_sim_time": LaunchConfiguration("use_sim_time", default="true"),
            "map": LaunchConfiguration("map", default=default_map),
            #"robot_prefix":robot_prefix ###
        }.items(),
    )
    
    # Set AMCL initial pose
    amcl_init_pose = Node(
        package="tb3_worlds",
        executable="set_init_amcl_pose.py",
        name="init_pose_publisher",
        namespace='turtle0',
        ##add
        parameters=[{"robot_number":3}]
    )
    nodes.add_action(amcl_init_pose)
    '''
    
    # Spawn blocks
    spawn_blocks = Node(
        package="tb3_worlds",
        executable="block_spawner.py",
        name="block_spawner",
        parameters=[
            {"location_file": join(tb3_world_dir, "maps", "sim_house_locations.yaml")}
        ],
    )
    nodes.add_action(spawn_blocks)

    return nodes
    '''
    return LaunchDescription(
        nodes
        #[spawn_world_delayed, 
        #nav_stack, amcl_init_pose, spawn_blocks]
    )
    '''
