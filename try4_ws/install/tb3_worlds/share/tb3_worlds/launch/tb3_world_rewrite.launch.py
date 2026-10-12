from os.path import join
#robot state publisher
import os
from launch_ros.actions import Node

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument
from nav2_common.launch import ReplaceString
from nav2_common.launch import RewrittenYaml
import time



def generate_launch_description():
    tb3_gazebo_dir = get_package_share_directory("turtlebot3_gazebo")
    gazebo_ros_dir = get_package_share_directory("gazebo_ros")
    tb3_world_dir = get_package_share_directory("tb3_worlds")
    default_world = join(tb3_world_dir, "worlds", "sim_house.world")


    
    # Configure the number of robots
    num_robots = 5#3
    use_sim_time = LaunchConfiguration("use_sim_time", default="true")
    x_pose_sum=[None] * num_robots
    x_pose_sum[0]='0.0'#LaunchConfiguration('x_pose_0')
    x_pose_sum[1]='0.7'#LaunchConfiguration('x_pose_1')
    x_pose_sum[2]='0.0'
    x_pose_sum[3]='-0.7'
    x_pose_sum[4]='0.0'
    y_pose_sum=[None] * num_robots
    y_pose_sum[0]='0.0'#LaunchConfiguration('y_pose_0')
    y_pose_sum[1]='0.2'#LaunchConfiguration('y_pose_1')
    y_pose_sum[2]='0.7'
    y_pose_sum[3]='-0.2'
    y_pose_sum[4]='-0.7'

    
    publisher_port=[None] * num_robots
    publisher_port[0]='1666'#LaunchConfiguration('x_pose_0')
    publisher_port[1]='1667'#LaunchConfiguration('x_pose_1')
    publisher_port[2]='1668'
    publisher_port[3]='1672'
    publisher_port[4]='1673'
    
    server_port=[None] * num_robots
    server_port[0]='1669'#LaunchConfiguration('y_pose_0')
    server_port[1]='1670'#LaunchConfiguration('y_pose_1')
    server_port[2]='1671'
    server_port[3]='1674'
    server_port[4]='1675'

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

    #nodes = [gzserver_cmd, gzclient_cmd]
    nodes = LaunchDescription()
    nodes.add_action(gzserver_cmd)
    nodes.add_action(gzclient_cmd)


    #robot state publisher launch中开启的状态发布节点

    #已修改，修改后urdf文件开启waffle pi
    os.environ['TURTLEBOT3_MODEL']='waffle_pi'
    TURTLEBOT3_MODEL = os.environ['TURTLEBOT3_MODEL']
    
    model_folder = 'turtlebot3_waffle_pi'#'turtlebot3_' + TURTLEBOT3_MODEL
    urdf_path_robot = os.path.join(
        get_package_share_directory('turtlebot3_gazebo'),
        'models',
        model_folder,#'turtlebot3_burger',#waffle_pi',      #waffle_pi
        'model.sdf'
    )
    #开启的是model文件夹中的sdf文件

    #spawn robot launch中开启的模型相关节点

    
    urdf_file_name = f'turtlebot3_{TURTLEBOT3_MODEL}.urdf'   #burger
    urdf_path = os.path.join(
            get_package_share_directory('turtlebot3_description'),# gazebo'),
            'urdf',
            urdf_file_name)
    #开启的是urdf文件夹中的urdf文件
    with open(urdf_path, 'r') as infp:
            robot_desc = infp.read()
    #也存在只有fixed连的上，continuos连不上的问题


    ## 问题在于，diff drive的tf信息全部发布在turtlex/tf里，缺少amcl发布的map->odom信息，可能存在于某个和init amcl相关的话题里，/turtle0/map
    ## 的定义问题也无法修改
    
    
    
    remappings = [('map','/map')]#("/tf", "tf"), ("/tf_static", "tf_static")]#,('/map','map')]



    ######################## change 6 bringup launch
    map_dir = LaunchConfiguration(
        'map',
        default=os.path.join(
            get_package_share_directory('turtlebot3_navigation2'),
            'map',
            'map.yaml'))
    

    # param_file_name = TURTLEBOT3_MODEL + '.yaml'              #burger
    # #print(f"2222222227777777777777 {param_file_name}")
    # #param_file_name = 'waffle_pi.yaml'
    # param_dir = LaunchConfiguration(
    #     'params_file',
    #     default=os.path.join(
    #         get_package_share_directory('turtlebot3_navigation2'),
    #         'param',
    #         param_file_name, 
    #         ))

    nav2_launch_file_dir = os.path.join(get_package_share_directory('nav2_bringup'), 'launch')

    default_map = join(tb3_world_dir, "maps", "sim_house_map.yaml")

    rviz_config_dir = os.path.join(
        get_package_share_directory('nav2_bringup'),
        'rviz',
        'nav2_default_view.rviz')
    


    tb3_worlds_dir = get_package_share_directory('tb3_worlds')
    # 可以不开，不开的话全局map收不到图，但是其他代价地图是正常的
    shared_map_server = Node(
        package='nav2_map_server',
        executable='map_server',
        name='map_server',
        output='screen',
        parameters=[{
            'use_sim_time': use_sim_time,
            'yaml_filename': os.path.join(tb3_worlds_dir, 'maps', 'sim_house_map.yaml'),
            'topic_name': '/map',
            'frame_id': 'map',
            'map_subscribe_transient_local': True
        }],
        
        )
    nodes.add_action(shared_map_server)

    

    shared_map_server_lifecycle_manager = Node(
        package='nav2_lifecycle_manager',
        executable='lifecycle_manager',
        name='lifecycle_manager_shared_map_server',
        output='screen',
        parameters=[{
            'use_sim_time': use_sim_time,
            'autostart': True,
            'node_names': ['map_server']  # This refers to the name of the map_server node above
        }],
        
    )
    nodes.add_action(shared_map_server_lifecycle_manager)

    # shared_amcl_node = Node(
    #         package='nav2_amcl',
    #         executable='amcl',
    #         name='amcl',
            
    #         output='screen',
    #         parameters=[{'child_frame_id': 'odom',}],
    #         remappings=remappings,
    #         )

    # shared_amcl_node = Node(
    #         package='nav2_lifecycle_manager',
    #         executable='lifecycle_manager',
    #         name='lifecycle_manager_localization',
    #         output='screen',
            
    #         parameters=[{'use_sim_time': use_sim_time},
    #                     {'node_names': ['amcl']}])

    
    

    
    # Iterate to spawn each robot with unique namespace and prefix
    for i in range(0,5):#3):#num_robots):

        namespace=f'turtle{i}'                ###add
        robot_prefix=f'turtle_{i}'            ###add
        ##可以加打印信息，print？打印出命名空间和prefix看一下
        print(namespace)

        server_port_zmq=server_port[i]
        publisher_port_zmq=publisher_port[i]
        print(publisher_port_zmq)


        
        
        robot_state_publisher=Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',#_{namespace}',
            output='screen',
            parameters=[{
                'use_sim_time': use_sim_time,
                'frame_prefix':f'{namespace}/',
                'robot_description': robot_desc,
                #'use_namespace':'true',## 去掉这两行，以及namespace=namespace，能够让在tf中收到base_link到其他和odom到base_footprint的信号
                #'namespace': namespace,
            }],
            namespace=namespace,  # 打开能够在rviz中正常显示机器人模型，也能连上wheel了
            #不确定是单开就行还是需要同时打开namespace和param-namespace
            remappings=[('map','/map'),("/tf", "/tf"), ("/tf_static", "/tf_static")]#remappings,   ###add


            ## 这里修改了model.sdf文件中的480行后面的tf为/tf，增加481行，修改506、507行增加前缀turtle0
            ## 163行增加前缀turtle0，增加之后scan能显示了


            #### base footprint连不上，可能是urdf传输有问题，需要验证 ################
            #arguments=[urdf_path],     ###add,对应 new_4-2 rqt图
        )

        #nodes.append(robot_state_publisher)
        nodes.add_action(robot_state_publisher)

        '''
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
        '''

        # Spawn each Turtlebot
        x_pose = x_pose_sum[i]#LaunchConfiguration(f'x_pose_{i}')#, default=str(i * 2.0))  # Example offset for demonstration
        y_pose = y_pose_sum[i]#LaunchConfiguration(f'y_pose_{i}')#, default="0.0")#
        print(x_pose)
        print("2222222222222222222222")


        '''
        ##不确定需不需要
        declare_x_position_cmd = DeclareLaunchArgument(
        'x_pose', default_value='0.0',
        description='Specify namespace of the robot')

        declare_y_position_cmd = DeclareLaunchArgument(
        'y_pose', default_value='0.0',
        description='Specify namespace of the robot')
        '''
        urdf_path_robot = os.path.join(
        get_package_share_directory('turtlebot3_gazebo'),
        'models',
        model_folder, #waffle_pi
        f'model_{namespace}.sdf'
        )
        ## 分成三个文件之后可以同时显示三个机器人

        start_spawn_turtlebot_cmd = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        #namespace=namespace,      ############## change 5 add
        name=f'spawn_entity_{namespace}',
        arguments=[
            '-entity', robot_prefix,## 为了区分两个机器人（改了名字之后能够显示两个机器人了 new5），原：TURTLEBOT3_MODEL,            
            '-file', urdf_path_robot,
            #'-file', PathJoinSubstitution([robot_prefix, urdf_path]),
            '-reference_frame', 'map',
            '-robot_namespace', namespace,## robot_prefix, ##add
            '-x', x_pose,
            '-y', y_pose,
            '-z', '0.01',
        ],
        output='screen',
        )

        '''
        ##不确定需不需要
        nodes.add_action(declare_x_position_cmd)
        nodes.add_action(declare_y_position_cmd)
        '''
        nodes.add_action(start_spawn_turtlebot_cmd)


        ##change add 3 能动起来，但还是连不上rviz
        #drive_turtlebot3_burger = Node(
        #        package="turtlebot3_gazebo",
        #        executable="turtlebot3_drive",###
        #        namespace=namespace,
        #        output="screen",
        #    )
        #nodes.add_action(drive_turtlebot3_burger)



        ################ change 6 bringup launch

        print('2222222222222222222222223333333333333333333')
        bringup_dir=os.path.join(get_package_share_directory#('nav2_bringup'),'launch','bringup_launch.py')
                                 ('tb3_worlds'),'launch','nav2_bringup','bringup_launch.py')
        print(bringup_dir)


        param_substitutions = {
        #'default_bt_xml_filename': os.path.join(get_package_share_directory("tb3_autonomy"), 'bt_xml', 'tree_queue.xml'),
        'autostart': 'True',
        'map_subscribe_transient_local': 'True',
        'use_sim_time': 'True',
        'groot_zmq_publisher_port':publisher_port_zmq,
        'groot_zmq_server_port':server_port_zmq,
        'yaml_filename': join(tb3_world_dir, "maps", "sim_house_map.yaml"),#'map.yaml',#
        # 'base_frame_id': f'{namespace}/base_footprint',#base_link',  # AMCL 参数
        # 'global_frame': 'map',   # 导航栈参数
        # 'recoveries_server.global_frame': f'{namespace}/odom',
        # #'map_topic': '/map',
        # 'odom_frame_id': f'{namespace}/odom',           # AMCL 参数
        # 'odom_topic': f'/{namespace}/odom',
        # 'topic': f'/{namespace}/scan',
        # #'local_costmap/local_costmap/global_frame': f'{namespace}/odom',
        # #'recoveries_server.global_frame': f'/{namespace}/odom',
        # #'/turtle0/amcl/base_frame_id':'base_link',
        # 'robot_base_frame': f'{namespace}/base_link',
        # 'costmap_topic': f'/{namespace}/local_costmap/costmap_raw',
        # 'footprint_topic': f'/{namespace}/local_costmap/published_footprint',
        #'scan_topic': f'/scan',
        #f'{namespace}/global_costmap.global_costmap.robot_base_frame':f'{namespace}/base_link'
        }
        print(param_substitutions)
        param_file_name = f'waffle_pi_{namespace}.yaml'
        
        
        # 原来参数重写是在bringup下面的每个launch文件中进行，修改后
        # 参数重写是在rewrite文件中进行的，将重写了的文件直接传递给bringup，再传入naviagtion
        # 这里原来的问题是只能打开最开始的一个机器人，turtle1等打不开，原因是输入的param_dir是launchconfiguration，
        # 改成str就好了，最最最开始的文件是以launchconfiguration不重写传到bringup中的
        # param_dir = LaunchConfiguration(
        # 'params_file',
        # default=os.path.join(
        #     get_package_share_directory('turtlebot3_navigation2'),
        #     'param',
        #     param_file_name
        #     )
        #     )
        
        param_dir = os.path.join(
            get_package_share_directory('turtlebot3_navigation2'),
            'param',
            param_file_name
            )
        print(param_dir)
    
    
        configured_params = RewrittenYaml(
        source_file=param_dir,#namespaced_params_file,#
        root_key=namespace,
        param_rewrites=param_substitutions,
        convert_types=True)



        bringup_cmd = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(bringup_dir),#[nav2_launch_file_dir, '/bringup_launch.py']),#join(get_package_share_directory('nav2_bringup'), 'launch', 'bringup_launch.py')),
            launch_arguments={
                 
                #'slam': 'False',
                'use_namespace': 'true',
                'namespace':namespace,
                #'map': '',
                #'map_server': 'False',
                'default_bt_xml_filename': os.path.join(get_package_share_directory("tb3_autonomy"), 'bt_xml', 'tree_queue.xml'),
                'autostart': 'true',
                'map': default_map,#map_dir,
                'use_sim_time': use_sim_time,
                'params_file': configured_params,#param_dir,#
                'server_port':server_port_zmq,
                'publisher_port':publisher_port_zmq,
                }.items(),     #robot_prefix}.items(),  #'robot_prefix'
        )
        nodes.add_action(bringup_cmd)


        '''
        rviz_cmd = Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            namespace=namespace, ##add   ??????????????????????? 已经是launchconfiguration格式了
            arguments=['-d', rviz_config_dir],
            #arguments=['-d', PathJoinSubstitution([robot_prefix, rviz_config_dir])],
            parameters=[{'use_sim_time': use_sim_time}],
            output='screen')
        nodes.add_action(rviz_cmd)'''

        '''
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
        '''

    return nodes#LaunchDescription(nodes)
