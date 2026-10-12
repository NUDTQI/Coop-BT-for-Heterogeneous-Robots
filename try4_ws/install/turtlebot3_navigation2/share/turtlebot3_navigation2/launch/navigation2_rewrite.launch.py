# Copyright 2019 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# Author: Darby Lim

import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (DeclareLaunchArgument, GroupAction,
                            IncludeLaunchDescription, SetEnvironmentVariable)
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.substitutions import PathJoinSubstitution #add
from nav2_common.launch import RewrittenYaml #add

######### rviz launch（加不加待定）
from launch.actions import EmitEvent, RegisterEventHandler, ExecuteProcess
from launch.event_handlers import OnProcessExit
from launch.events import Shutdown
from nav2_common.launch import ReplaceString


os.environ['TURTLEBOT3_MODEL']='waffle_pi'   ####add           ######### change add 1

TURTLEBOT3_MODEL = os.environ['TURTLEBOT3_MODEL']


def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    robot_prefix = LaunchConfiguration('robot_prefix')  ##
    #namespace = LaunchConfiguration('namespace')     ##add   ###待确定，应该删除？？？
    #use_namespace = 'True'
    map_dir = LaunchConfiguration(
        'map',
        default=os.path.join(
            get_package_share_directory('turtlebot3_navigation2'),
            'map',
            'map.yaml'))
    

    param_file_name = TURTLEBOT3_MODEL + '.yaml'
    param_dir = LaunchConfiguration(
        'params_file',
        default=os.path.join(
            get_package_share_directory('turtlebot3_navigation2'),
            'param',
            param_file_name, 
            ))

    nav2_launch_file_dir = os.path.join(get_package_share_directory('nav2_bringup'), 'launch')
    map_test=os.path.join(
            get_package_share_directory('turtlebot3_navigation2'),
            'map',
            'map.yaml')
    param_test=os.path.join(
            get_package_share_directory('turtlebot3_navigation2'),
            'param',
            param_file_name, 
            )
    print(map_test)
    print(param_test)
    print(nav2_launch_file_dir)
    print("5555555555555555555555555555")

    rviz_config_dir = os.path.join(
        get_package_share_directory('tutrtlebot3_navigation2'),#get_package_share_directory('nav2_bringup'),
        'rviz',
        'tb3_navigation2.rviz')#'nav2_default_view.rviz')#'nav2_namespaced_view.rviz')   《《《————换成这个会出现'<robot_namespace>/initialpose'问题

    declare_map = DeclareLaunchArgument(
            'map',
            default_value=map_dir,
            description='Full path to map file to load')

    declare_params_file = DeclareLaunchArgument(
            'params_file',
            default_value=param_dir,
            description='Full path to param file to load')

    declare_use_time = DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation (Gazebo) clock if true')
    
    
    ld=LaunchDescription()
    ld.add_action(declare_map)
    ld.add_action(declare_params_file)
    ld.add_action(declare_use_time)


    ########################### bringup launch
    stdout_linebuf_envvar = SetEnvironmentVariable(
        'RCUTILS_LOGGING_BUFFERED_STREAM', '1')


    declare_slam_cmd = DeclareLaunchArgument(
        'slam',
        default_value='False',
        description='Whether run a SLAM')


    declare_map_server_cmd = DeclareLaunchArgument(
            'map_server_cmd',   ####change 2 否则与后面的Node重名
            default_value='True',
            description='Whether run a map server per nav2 stack')

    

    declare_params_file_cmd = DeclareLaunchArgument(
        'params_file',
        default_value=os.path.join(get_package_share_directory("turtlebot3_navigation2"), 'param', 'waffle_pi'),#'burger.yaml'),###bringup_dir, 'params', 'nav2_params.yaml'
        description='Full path to the ROS2 parameters file to use for all launched nodes')

    declare_bt_xml_cmd = DeclareLaunchArgument(
        'default_bt_xml_filename',
        default_value=os.path.join(
            get_package_share_directory('nav2_bt_navigator'),
            'behavior_trees', 'navigate_w_replanning_and_recovery.xml'),
        description='Full path to the behavior tree xml file to use')

    declare_autostart_cmd = DeclareLaunchArgument(
        'autostart', default_value='true',
        description='Automatically startup the nav2 stack')
    
    autostart = LaunchConfiguration('autostart')
    
    # Set environment variables
    ld.add_action(stdout_linebuf_envvar)
    
    # Declare the launch options
    ld.add_action(declare_slam_cmd)
    #ld.add_action(declare_use_sim_time_cmd)
    ld.add_action(declare_params_file_cmd)
    ld.add_action(declare_autostart_cmd)
    ld.add_action(declare_bt_xml_cmd)
    
    print("6666666666666666666666666666")


    ########################### slam launch
    # Variables
    lifecycle_nodes_slam = ['map_saver']

    # Getting directories and launch-files
    bringup_dir = get_package_share_directory('tb3_worlds')###
    slam_toolbox_dir = get_package_share_directory('slam_toolbox')
    slam_launch_file = os.path.join(slam_toolbox_dir, 'launch', 'online_sync_launch.py')

    # Create our own temporary YAML files that include substitutions
    param_substitutions_slam = {
        'use_sim_time': use_sim_time}

    configured_params_slam = RewrittenYaml(
        source_file=param_dir,
        #root_key=namespace,     ###待确定，是否有必要？？？
        param_rewrites=param_substitutions_slam,
        convert_types=True)
    
    start_slam_toolbox_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(slam_launch_file),
        launch_arguments={'use_sim_time': use_sim_time}.items())
    # Running SLAM Toolbox
    ld.add_action(start_slam_toolbox_cmd)



    ########################## localization launch
    remappings = [('/tf', 'tf'),
                  ('/tf_static', 'tf_static'),
                  ('/scan', 'scan')]
    
    ##map_server=LaunchConfiguration('map_server')    ##对应着下面两个IfCondition，但是一旦开启会显示找不到

    #######rewrite 原位置（loc）
    


    ########################## navigation launch

    default_bt_xml_filename = LaunchConfiguration('default_bt_xml_filename')
    # map_subscribe_transient_local = LaunchConfiguration('map_subscribe_transient_local')  原位置
    lifecycle_nodes_nav = ['controller_server',
                       'planner_server',
                       'bt_navigator',
                       'waypoint_follower']

    ########rewrite 原位置（nav）




    map_subscribe_transient_local = DeclareLaunchArgument(
            'map_subscribe_transient_local', default_value='false',
            description='Whether to set the map subscriber QoS to transient local')

    ld.add_action(map_subscribe_transient_local)

    map_subscribe_transient_local = LaunchConfiguration('map_subscribe_transient_local')  #新位置


    ##################### rviz launch(加不加待定)
    declare_rviz_config_file_cmd = DeclareLaunchArgument(
        'rviz_config',
        default_value=os.path.join(bringup_dir, 'rviz', 'nav2_default_view.rviz'),###"turtlebot3_navigation2",get_package_share_directory('turtlebot3_navigation2'), 'rviz', 'tb3_navigation2.rviz'
        description='Full path to the RVIZ config file to use')
    
    ld.add_action(declare_rviz_config_file_cmd)


    ########### 一些预备，效果待定
    remappings = [('/tf', 'tf'),
                  ('/tf_static', 'tf_static'),
                  ('/scan', 'scan')]
    map_server=Node(
        package='nav2_map_server',
        executable='map_server',
        name='map_server',
        output='screen',
        parameters=[{'yaml_filename': os.path.join(get_package_share_directory('tb3_worlds'), 'maps', 'sim_house_map.yaml'),###
                     },],###
        #remappings=remappings
        )

    map_server_lifecyle=Node(package='nav2_lifecycle_manager',
            executable='lifecycle_manager',
            name='lifecycle_manager_map_server',
            output='screen',
            parameters=[{'use_sim_time': use_sim_time},
                        {'autostart': True},
                        {'node_names': ['map_server']}])


    ld.add_action(map_server)
    ld.add_action(map_server_lifecyle)

    last_action=None

    remappings = [('/tf', 'tf'),
                  ('/tf_static', 'tf_static'),
                  ('/scan', 'scan')]


    for i in range(0,2):
        namespace=f'turtle{i}'                ###add
        robot_prefix=f'turtle_{i}'            ###add

        ####################### slam launch
        '''
        start_map_saver_server_cmd = Node(
            namespace=namespace,
            package='nav2_map_server',
            executable='map_saver_server', #node_executable='map_saver_server',
            output='screen',
            parameters=[configured_params_slam])
        


        start_lifecycle_manager_cmd = Node(
            namespace=namespace,
            package='nav2_lifecycle_manager',
            executable='lifecycle_manager', #node_executable='lifecycle_manager',
            name='lifecycle_manager_slam', #node_name='lifecycle_manager_slam',
            output='screen',
            parameters=[{'use_sim_time': use_sim_time},
                        {'autostart': autostart},
                        {'node_names': lifecycle_nodes_slam}])
    
        
        # Running Map Saver Server
        ld.add_action(start_map_saver_server_cmd)
        ld.add_action(start_lifecycle_manager_cmd)
        '''

        ###################### localization launch


        # Create our own temporary YAML files that include substitutions
        param_substitutions_loc = {
        'use_sim_time': use_sim_time,
        'yaml_filename': map_dir}  ###待确定？？？
    
        configured_params_localization = RewrittenYaml(
        source_file=param_dir,  ###待确定？？？
        root_key=namespace,     ###待确定，是否有必要？？？
        param_rewrites=param_substitutions_loc,
        convert_types=True)




        '''
        nav2_map_server = Node(
            package='nav2_map_server',
            executable='map_server',
            name='map_server',
            namespace=namespace,
            output='screen',
            parameters=[configured_params_localization],
            #remappings=remappings,
            #condition=IfCondition(map_server)    ##待定，似乎可以关闭
            )
        '''

        nav2_amcl = Node(
            package='nav2_amcl',
            executable='amcl',
            name='amcl',
            namespace=namespace,
            output='screen',
            parameters=[configured_params_localization],
            #remappings=remappings
            )
        

        nav2_lifecycle_manager_localization = Node(
            package='nav2_lifecycle_manager',
            executable='lifecycle_manager',
            name='lifecycle_manager_localization',
            output='screen',
            namespace=namespace,
            parameters=[{'use_sim_time': use_sim_time},
                        {'autostart': autostart},
                        {'node_names': ['amcl']}])
        

        '''
        nav2_lifecycle_manager_map_server = Node(
            package='nav2_lifecycle_manager',
            executable='lifecycle_manager',
            name='lifecycle_manager_map_server',
            namespace=namespace,
            output='screen',
            parameters=[{'use_sim_time': use_sim_time},
                        {'autostart': autostart},
                        {'node_names': ['map_server']}],
            #condition=IfCondition(map_server)          ##待定，似乎可以关闭
            )
        '''

        
        #ld.add_action(nav2_map_server)
        ld.add_action(nav2_amcl)
        ld.add_action(nav2_lifecycle_manager_localization)
        #ld.add_action(nav2_lifecycle_manager_map_server)



        ###################### navigation launch

        param_substitutions_nav = {
            'use_sim_time': use_sim_time,
            'default_bt_xml_filename': default_bt_xml_filename,
            'autostart': autostart,
            'map_subscribe_transient_local': map_subscribe_transient_local}

        configured_params_nav = RewrittenYaml(
            source_file=param_dir,
            root_key=namespace,
            param_rewrites=param_substitutions_nav,
            convert_types=True)



        nav2_controller = Node(
            package='nav2_controller',
            executable='controller_server',
            output='screen',
            namespace=namespace,
            parameters=[configured_params_nav],
            #remappings=remappings
            )
        

        nav2_planner = Node(
            package='nav2_planner',
            executable='planner_server',
            name='planner_server',
            output='screen',
            namespace=namespace,
            parameters=[configured_params_nav],
            #remappings=remappings
            )


        nav2_bt_navigator = Node(
            package='nav2_bt_navigator',
            executable='bt_navigator',
            name='bt_navigator',
            output='screen',
            namespace=namespace,
            parameters=[configured_params_nav],
            #remappings=remappings
            )


        nav2_waypoint_follower = Node(
            package='nav2_waypoint_follower',
            executable='waypoint_follower',
            name='waypoint_follower',
            output='screen',
            namespace=namespace,
            parameters=[configured_params_nav],
            #remappings=remappings
            )


        nav2_lifecycle_manager_navigation = Node(
            package='nav2_lifecycle_manager',
            executable='lifecycle_manager',
            name='lifecycle_manager_navigation',
            output='screen',
            namespace=namespace,
            parameters=[{'use_sim_time': use_sim_time},
                        {'autostart': autostart},
                        {'node_names': lifecycle_nodes_nav}])

        
        ld.add_action(nav2_controller)
        ld.add_action(nav2_planner)
        ld.add_action(nav2_bt_navigator)
        ld.add_action(nav2_waypoint_follower)
        ld.add_action(nav2_lifecycle_manager_navigation)
        '''

        if last_action is None:
            # Call add_action directly for the first robot to facilitate chain instantiation via RegisterEventHandler
            ld.add_action(nav2_controller)
            ld.add_action(nav2_planner)
            ld.add_action(nav2_bt_navigator)
            ld.add_action(nav2_waypoint_follower)
            ld.add_action(nav2_lifecycle_manager_navigation)

        else:
            # Use RegisterEventHandler to ensure next robot creation happens only after the previous one is completed.
            # Simply calling ld.add_action for spawn_entity introduces issues due to parallel run.
            navigation_event = RegisterEventHandler(
                event_handler=OnProcessExit(
                    target_action=last_action,
                    on_exit=[nav2_controller,
                            nav2_planner,
                            nav2_bt_navigator,
                            nav2_waypoint_follower,
                            nav2_lifecycle_manager_navigation
                            ],
                )
            )

            ld.add_action(navigation_event)


        
        rviz_cmd = Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            namespace=namespace, ##add   ?
            arguments=['-d', rviz_config_dir],
            parameters=[{'use_sim_time': use_sim_time}],
            output='screen')
        
        ld.add_action(rviz_cmd)
        ''''''
        ######################### rviz launch（不确定要不要改）
        last_action=nav2_controller

    for i in range(0,2):

        namespace=f'turtle{i}'                ###add
        robot_prefix=f'turtle_{i}'            ###add
        nsp=[ '/' + namespace ]

        # Create a initial pose topic publish call
        x_pose=f'{i}'
        y_pose=f'{i}'
        message = '{header: {frame_id: map}, pose: {pose: {position: {x: ' + \
            f'{i}' + ', y: ' + f'{i}' + \
            ', z: 0.1}, orientation: {x: 0.0, y: 0.0, z: 0.0, w: 1.0000000}}, }}'

        initial_pose_cmd = ExecuteProcess(
            cmd=['ros2', 'topic', 'pub', '-1', '--qos-reliability', 'reliable', nsp + ['/initialpose'],
                'geometry_msgs/PoseWithCovarianceStamped', message],
            output='screen'
        )

        
remappings=[('/tf', 'tf'),
                        ('/tf_static', 'tf_static'),
                        ('/goal_pose', 'goal_pose'),
                        ('/clicked_point', 'clicked_point'),
                        ('/initialpose', 'initialpose')]

        '''

        #change 4 发布初始位置
        
        
        message = '{header: {frame_id: map}, pose: {pose: {position: {x: ' + \
            f'{i*2.5}' + ', y: ' + f'{i*2.5}' + \
            ', z: 0.1}, orientation: {x: 0.0, y: 0.0, z: 0.0, w: 1.0000000}}, }}'
        
        nsp=['/'+namespace]

        initial_pose_cmd = ExecuteProcess(
            cmd=['ros2', 'topic', 'pub', '-1', '--qos-reliability', 'reliable', nsp + ['/initialpose'],
                'geometry_msgs/PoseWithCovarianceStamped', message],
            output='screen'
        )

        ld.add_action(initial_pose_cmd)





        # Launch rviz
        namespaced_rviz_config_file = ReplaceString(
                source_file=rviz_config_dir,
                replacements={'<robot_namespace>': namespace})##('/', namespace)})##{'<robot_namespace>': ('/', namespace)})##

        start_namespaced_rviz_cmd = Node(
            #condition=IfCondition(use_namespace),
            package='rviz2',
            executable='rviz2',
            namespace=namespace,
            arguments=['-d', namespaced_rviz_config_file],
            output='screen',
            )

        
        #exit_event_handler_namespaced = RegisterEventHandler(
        #    #condition=IfCondition(use_namespace),
        #    event_handler=OnProcessExit(
        #        target_action=start_namespaced_rviz_cmd,
        #        on_exit=EmitEvent(event=Shutdown(reason='rviz exited'))))
        
        
        
        ld.add_action(start_namespaced_rviz_cmd)
        '''
        ###ld.add_action(exit_event_handler_namespaced)
        
        
        
        # Use RegisterEventHandler to ensure next robot rviz launch happens 
        # only after all robots are spawned
        post_spawn_event = RegisterEventHandler(
            event_handler=OnProcessExit(
                target_action=last_action,
                on_exit=[initial_pose_cmd, start_namespaced_rviz_cmd],
            )
        )

        
        last_action=initial_pose_cmd  ####last action需要是指定类型的，是否需要在前一个循环加上
        ld.add_action(post_spawn_event)
'''
    return ld




    '''
    return LaunchDescription([
        DeclareLaunchArgument(
            'map',
            default_value=map_dir,
            description='Full path to map file to load'),

        DeclareLaunchArgument(
            'params_file',
            default_value=param_dir,
            description='Full path to param file to load'),

        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation (Gazebo) clock if true'),

        #add
        DeclareLaunchArgument(
            'namespace',
            default_value=namespace,
            description='robot namespace'),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([nav2_launch_file_dir, '/bringup_launch.py']),
            launch_arguments={
                'map': map_dir,
                'use_sim_time': use_sim_time,
                'params_file': param_dir,
                'namespace':namespace}.items(),     #robot_prefix}.items(),  #'robot_prefix'
        ),

        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            namespace=namespace, ##add   ??????????????????????? 已经是launchconfiguration格式了
            arguments=['-d', rviz_config_dir],
            #arguments=['-d', PathJoinSubstitution([robot_prefix, rviz_config_dir])],
            parameters=[{'use_sim_time': use_sim_time}],
            output='screen'),
    ])
    '''
