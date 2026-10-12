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
    '''
    use_sim_time = LaunchConfiguration('use_sim_time')#, default='false')
    robot_prefix = LaunchConfiguration('robot_prefix')  ##
    #namespace = LaunchConfiguration('namespace')     ##add   ###待确定，应该删除？？？
    #use_namespace = 'True'
    map_dir = LaunchConfiguration(
        'map')#,
        #default=os.path.join(
        #    get_package_share_directory('turtlebot3_navigation2'),
        #    'map',
        #    'map.yaml'))
    '''
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
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

    #nav2_launch_file_dir = os.path.join(get_package_share_directory('nav2_bringup'), 'launch')
    tb3_worlds_dir = get_package_share_directory('tb3_worlds')
    nav2_launch_file_dir = os.path.join(tb3_worlds_dir, 'launch','nav2_bringup')
    bringup_dir = get_package_share_directory('tb3_worlds')###

    #rviz_config_dir = os.path.join(
    #    get_package_share_directory('nav2_bringup'),
    #    'rviz',
    rviz_config_dir = os.path.join(
        get_package_share_directory('nav2_bringup'),#get_package_share_directory('turtlebot3_navigation2'),
        'rviz',
        'nav2_namespaced_view.rviz')#'nav2_default_view.rviz')#'tb3_navigation2.rviz')   《《《————换成这个会出现'<robot_namespace>/initialpose'问题

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



    

    declare_params_file_cmd = DeclareLaunchArgument(
        'params_file',
        default_value=os.path.join(get_package_share_directory("turtlebot3_navigation2"), 'param', 'waffle_pi'),#'burger.yaml'),###bringup_dir, 'params', 'nav2_params.yaml'
        description='Full path to the ROS2 parameters file to use for all launched nodes')

   

    declare_autostart_cmd = DeclareLaunchArgument(
        'autostart', default_value='true',
        description='Automatically startup the nav2 stack')
    
    autostart = LaunchConfiguration('autostart')
    
    # Set environment variables
    ld.add_action(stdout_linebuf_envvar)
    
    # Declare the launch options

    #ld.add_action(declare_use_sim_time_cmd)
    ld.add_action(declare_params_file_cmd)
    ld.add_action(declare_autostart_cmd)



    ########################## localization launch
    remappings = [('/tf', 'tf'),
                  ('/tf_static', 'tf_static'),
                  ('/scan', 'scan')]
    
    ##map_server=LaunchConfiguration('map_server')    ##对应着下面两个IfCondition，但是一旦开启会显示找不到


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


    last_action=None

    remappings = [('/tf', 'tf'),
                  ('/tf_static', 'tf_static'),
                  ('/scan', 'scan'),
                  ('/goal_pose', 'goal_pose'),
                  ('/clicked_point', 'clicked_point'),
                  ('/initialpose', 'initialpose')]


    for i in range(0,1):
        namespace=f'turtle{i}'                ###add
        robot_prefix=f'turtle_{i}'            ###add

        

        #change 4 发布初始位置
        
        '''
        message = '{header: {frame_id: map}, pose: {pose: {position: {x: ' + \
            f'{i}' + ', y: ' + f'{i}' + \
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
                replacements={'<robot_namespace>': namespace})#{'robot_namespace': namespace})##('/', namespace)})

        start_namespaced_rviz_cmd = Node(
            #condition=IfCondition(use_namespace),
            package='rviz2',
            executable='rviz2',
            namespace=namespace,
            parameters=[{'use_sim_time': 'true'}],
            arguments=['-d', namespaced_rviz_config_file],
            output='screen',
            remappings=remappings,          ######change 8 add
            )
        '''
        rviz_cmd = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(nav2_launch_file_dir, 'rviz_launch.py')),
                launch_arguments={'use_sim_time': use_sim_time, 
                                  'namespace': namespace,
                                  'use_namespace': 'True',
                                  'rviz_config': rviz_config_dir, 'log_level': 'warn'}.items(),
                                    )

        
        #exit_event_handler_namespaced = RegisterEventHandler(
        #    #condition=IfCondition(use_namespace),
        #    event_handler=OnProcessExit(
        #        target_action=start_namespaced_rviz_cmd,
        #        on_exit=EmitEvent(event=Shutdown(reason='rviz exited'))))
        
        
        
        ld.add_action(rviz_cmd)

        amcl_init_pose = Node(
        package="tb3_worlds",
        executable="set_init_amcl_pose.py",
        name="init_pose_publisher",
        namespace=namespace,
        ##add
        parameters=[{"robot_number":3},{"x_pose":0.0},{"y_pose":0.0},]#{"namespace":namespace}
    )
        ld.add_action(amcl_init_pose)

        #ld.add_action(start_namespaced_rviz_cmd)
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
