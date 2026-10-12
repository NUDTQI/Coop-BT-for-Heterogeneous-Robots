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


#os.environ['TURTLEBOT3_MODEL']='waffle_pi'   ####add           ######### change add 1

TURTLEBOT3_MODEL = os.environ['TURTLEBOT3_MODEL']


def generate_launch_description():
    
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')#)
    '''robot_prefix = LaunchConfiguration('robot_prefix')  ##
    #namespace = LaunchConfiguration('namespace')     ##add   ###待确定，应该删除？？？
    #use_namespace = 'True'
    map_dir = LaunchConfiguration(
        'map')#,
        #default=os.path.join(
        #    get_package_share_directory('turtlebot3_navigation2'),
        #    'map',
        #    'map.yaml'))
    '''
    ld=LaunchDescription()

    #nav2_launch_file_dir = os.path.join(get_package_share_directory('nav2_bringup'), 'launch')
    tb3_worlds_dir = get_package_share_directory('tb3_worlds')
    nav2_launch_file_dir = os.path.join(tb3_worlds_dir, 'launch','nav2_bringup')
    bringup_dir = get_package_share_directory('tb3_worlds')###

    #rviz_config_dir = os.path.join(
    #    get_package_share_directory('nav2_bringup'),
    #    'rviz',
    rviz_config_dir = os.path.join(
        get_package_share_directory('turtlebot3_navigation2'),
        'rviz',
        'nav2_namespaced_view.rviz')     #'nav2_default_view.rviz')#'tb3_navigation2.rviz')   《《《————换成这个会出现'<robot_namespace>/initialpose'问题



    ########################### bringup launch
    stdout_linebuf_envvar = SetEnvironmentVariable(
        'RCUTILS_LOGGING_BUFFERED_STREAM', '1')
    
    enable_drive = LaunchConfiguration('enable_drive', default='false')
    declare_enable_drive = DeclareLaunchArgument(
        name='enable_drive', default_value=enable_drive, description='Enable robot drive node'
    )
    
    num_robots=5#3
    x_pose_sum=[None] * num_robots
    x_pose_sum[0]=0.0#LaunchConfiguration('x_pose_0')
    x_pose_sum[1]=0.7#LaunchConfiguration('x_pose_1')
    x_pose_sum[2]=0.0
    x_pose_sum[3]=-0.7
    x_pose_sum[4]=0.0
    y_pose_sum=[None] * num_robots
    y_pose_sum[0]=0.0#LaunchConfiguration('y_pose_0')
    y_pose_sum[1]=0.2#LaunchConfiguration('y_pose_1')
    y_pose_sum[2]=0.7
    y_pose_sum[3]=-0.2
    y_pose_sum[4]=-0.7
    ## x y pose应该是数字而不是字符，这与demo world不一样




    ########################## localization launch
    
    ##map_server=LaunchConfiguration('map_server')    ##对应着下面两个IfCondition，但是一旦开启会显示找不到


    map_subscribe_transient_local = DeclareLaunchArgument(
            'map_subscribe_transient_local', default_value='false',
            description='Whether to set the map subscriber QoS to transient local')

    ld.add_action(map_subscribe_transient_local)

    map_subscribe_transient_local = LaunchConfiguration('map_subscribe_transient_local')  #新位置


    ##################### rviz launch(加不加待定)
    declare_rviz_config_file_cmd = DeclareLaunchArgument(
        'rviz_config',
        default_value=os.path.join(bringup_dir, 'rviz', 'nav2_namespaced_view.rviz'),###"turtlebot3_navigation2",get_package_share_directory('turtlebot3_navigation2'), 'rviz', 'tb3_navigation2.rviz'
        description='Full path to the RVIZ config file to use')
    
    ld.add_action(declare_rviz_config_file_cmd)




    
    

    rviz_config_dir = os.path.join(
        get_package_share_directory('turtlebot3_navigation2'),
        'rviz',
        'multi2_nav2_default_view.rviz')#'multi1_nav2_default_view.rviz')#'nav2_default_view.rviz')#
    rviz_cmd = IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(nav2_launch_file_dir, 'rviz1_launch.py')),
                launch_arguments={'use_sim_time': use_sim_time, 
                                  'use_namespace': 'false',
                                  'rviz_config': rviz_config_dir,
                                  'log_level': 'warn'}.items(),
                                    )

    ld.add_action(rviz_cmd)


    # # 可以不开，不开的话全局map收不到图，但是其他代价地图是正常的
    # shared_map_server = Node(
    #     package='nav2_map_server',
    #     executable='map_server',
    #     name='map_server',
    #     output='screen',
    #     parameters=[{
    #         'use_sim_time': use_sim_time,
    #         'yaml_filename': os.path.join(tb3_worlds_dir, 'maps', 'sim_house_map.yaml'),
    #         'topic_name': 'map',
    #         'frame_id': 'map'
    #     }],
    #     # remappings=[
    #     #     ('/tf', 'tf'),
    #     #     ('/tf_static', 'tf_static'),
    #     #     # No namespace remapping for map topic
    #     # ],
    #     )
    # ld.add_action(shared_map_server)

    # shared_amcl = Node(
    #         package='nav2_amcl',
    #         executable='amcl',
    #         name='amcl',
    #         output='screen',
    #         parameters=[{
    #         'use_sim_time': use_sim_time,
    #         'yaml_filename': os.path.join(tb3_worlds_dir, 'maps', 'sim_house_map.yaml'),
    #         'topic_name': 'map',
    #         'frame_id': 'map'
    #     }],
    #     # remappings=[
    #     #     ('/tf', 'tf'),
    #     #     ('/tf_static', 'tf_static'),
    #     #     # No namespace remapping for map topic
    #     # ],
    #         )
    # #ld.add_action(shared_amcl)

    # shared_map_server_lifecycle_manager = Node(
    #     package='nav2_lifecycle_manager',
    #     executable='lifecycle_manager',
    #     name='lifecycle_manager_shared_map_server',
    #     output='screen',
    #     parameters=[{
    #         'use_sim_time': use_sim_time,
    #         'autostart': True,
    #         'node_names': ['map_server']  # This refers to the name of the map_server node above
    #     }],
    #     # remappings=[
    #     #     ('/tf', 'tf'),
    #     #     ('/tf_static', 'tf_static'),
    #     #     # No namespace remapping for map topic
    #     # ],
    # )
    # ld.add_action(shared_map_server_lifecycle_manager)

    # shared_amcl_lifecycle_manager = Node(
    #         package='nav2_lifecycle_manager',
    #         executable='lifecycle_manager',
    #         name='lifecycle_manager_localization',
    #         output='screen',
    #         #namespace=namespace,
    #         parameters=[{'use_sim_time': use_sim_time},
    #                     {'autostart': True},
    #                     {'node_names': ['amcl']}],
    #     #     remappings=[
    #     #     ('/tf', 'tf'),
    #     #     ('/tf_static', 'tf_static'),
    #     #     # No namespace remapping for map topic
    #     # ],    
    #                 )
    # #ld.add_action(shared_amcl_lifecycle_manager)







    for i in range(0,5):#3):
        namespace=f'turtle{i}'                ###add
        robot_prefix=f'turtle_{i}'            ###add

        

        #change 4 发布初始位置
        
        
        # rviz_cmd = IncludeLaunchDescription(
        #     PythonLaunchDescriptionSource(
        #         os.path.join(nav2_launch_file_dir, 'rviz_launch.py')),
        #         launch_arguments={'use_sim_time': use_sim_time, 
        #                           'namespace': namespace,
        #                           'use_namespace': 'True',
        #                           'rviz_config': rviz_config_dir, 'log_level': 'warn'}.items(),
        #                             )
        
        
        
        # ld.add_action(rviz_cmd)

        drive_turtlebot3_burger = Node(
            package='turtlebot3_gazebo', 
            executable='turtlebot3_drive',
            namespace=namespace, 
            #parameters=[{"frame_id":namespace+'/odom'},{"child_frame_id":namespace+'/base_footprint'}],
            output='screen',
            condition=IfCondition(enable_drive),
        )
        ld.add_action(drive_turtlebot3_burger)

        amcl_init_pose = Node(
        package="tb3_worlds",
        executable="set_init_amcl_pose.py",
        name="init_pose_publisher",
        namespace=namespace,
        ##add
        parameters=[{"robot_number":3},{"robot_name":namespace},{"x_pose":x_pose_sum[i]},{"y_pose":y_pose_sum[i]}]#{"x_pose":i*2.5},{"y_pose":i*2.5}]
        )
        ld.add_action(amcl_init_pose)


        '''
        #关掉好像也不会有影响，因为rviz节点已经开启了amcl
        amcl_init_pose = Node(
            package="tb3_worlds",
            executable="set_init_amcl_pose.py",
            name="init_pose_publisher",
            namespace=namespace,
            ##add
            parameters=[{"robot_number":3},{"x_pose":0.0},{"y_pose":0.0},]#{"namespace":namespace}
            )
        ld.add_action(amcl_init_pose)'''

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
