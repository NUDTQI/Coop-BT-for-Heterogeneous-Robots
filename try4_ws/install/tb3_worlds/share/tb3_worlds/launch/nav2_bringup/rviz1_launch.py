# Copyright (c) 2018 Intel Corporation
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

import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, EmitEvent, RegisterEventHandler
from launch.conditions import IfCondition, UnlessCondition
from launch.event_handlers import OnProcessExit
from launch.events import Shutdown
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from nav2_common.launch import ReplaceString


def generate_launch_description():
    # Get the launch directory
    bringup_dir = get_package_share_directory('nav2_bringup')

    # Create the launch configuration variables
    #namespace = LaunchConfiguration('namespace')
    use_namespace = LaunchConfiguration('use_namespace')
    rviz_config_file = LaunchConfiguration('rviz_config')

    # Declare the launch arguments
    declare_namespace_cmd = DeclareLaunchArgument(
        'namespace',
        default_value='navigation',
        description=('Top-level namespace. The value will be used to replace the '
                     '<robot_namespace> keyword on the rviz config file.'))

    declare_use_namespace_cmd = DeclareLaunchArgument(
        'use_namespace',
        default_value='false',
        description='Whether to apply a namespace to the navigation stack')

    declare_rviz_config_file_cmd = DeclareLaunchArgument(
        'rviz_config',
        default_value=os.path.join(#bringup_dir, 'rviz', 'nav2_namespaced_view.rviz'),
            get_package_share_directory('turtlebot3_navigation2'), 'rviz', 'multi2_nav2_default_view.rviz'), #'multi1_nav2_default_view.rviz'), 
            #'nav2_namespaced_view.rviz'),#'tb3_navigation2.rviz'),
        ###就等于："turtlebot3_navigation2",bringup_dir, 'rviz', 'nav2_namespaced_view.rviz'),两个文件一样的#（'multi_nav2_default_view.rviz'),#'nav2_default_view.rviz'),
        description='Full path to the RVIZ config file to use')

    # Launch rviz
    start_rviz_cmd = Node(
        condition=UnlessCondition(use_namespace),
        package='rviz2',
        name='rviz2',
        executable='rviz2',
        arguments=['-d', rviz_config_file],
        output='screen')

    # namespaced_rviz_config_file = ReplaceString(
    #         source_file=rviz_config_file,
    #         replacements={'<robot_namespace>': ('/', namespace)})#,'/RobotModel1/Status1':('/', namespace,'/Status1')})#})
    #         #此处的<robot namespace>是对应demo world中指定的rviz文件中，initialpose话题的前缀，想正常运行必须修改
    #             #{'<robot_namespace>': ('/', namespace)})##namespace})##

    start_namespaced_rviz_cmd = Node(
        condition=IfCondition(use_namespace),
        package='rviz2',
        executable='rviz2',
        #name='rviz2',
        #namespace=namespace,
        #arguments=['-d', namespaced_rviz_config_file],
        output='screen',
        remappings=[#('/tf', 'tf'),
                    #('/tf_static', 'tf_static'),
                    ('/goal_pose', 'goal_pose'),
                    ('/clicked_point', 'clicked_point'),
                    ('/initialpose', 'initialpose'),
                    #('/map','map')########
                    ]
        )
    



    tf_relay00 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'map', 'turtle0/map']
)
    tf_relay001 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'map', 'turtle1/map']
)
    tf_relay002 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'map', 'turtle2/map']
)
    

    tf_relay0 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'map', 'turtle0/odom']
)
    tf_relay01 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'map', 'turtle1/odom']
)
    tf_relay02 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'map', 'turtle2/odom']
)
    
    tf_relay10 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'turtle0/map', 'turtle0/odom']
)
    tf_relay11 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'turtle1/map', 'turtle1/odom']
)
    tf_relay12 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'turtle2/map', 'turtle2/odom']
)
    

    tf_relay13 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'turtle0/odom', 'turtle0/base_footprint']
)
    tf_relay14 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'turtle1/odom', 'turtle1/base_footprint']
)
    tf_relay15 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'turtle2/odom', 'turtle2/base_footprint']
)
    
    



    tf_relay = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'map', 'odom']
)

    tf_relay1 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'odom', 'base_footprint']
)
    tf_relay2 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'base_footprint', 'base_link']
)
    tf_relay3 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'base_link', 'base_scan']
)
    tf_relay4 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'base_link', 'caster_back_link']
)
    tf_relay5 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'base_link', 'imu_link']
)
    tf_relay6 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'base_link', 'wheel_left_link']
)
    tf_relay7 = Node(
    package='tf2_ros',
    executable='static_transform_publisher',
    arguments=['0', '0', '0', '0', '0', '0', 'base_link', 'wheel_right_link']
)
    




    exit_event_handler = RegisterEventHandler(
        condition=UnlessCondition(use_namespace),
        event_handler=OnProcessExit(
            target_action=start_rviz_cmd,
            on_exit=EmitEvent(event=Shutdown(reason='rviz exited'))))

    exit_event_handler_namespaced = RegisterEventHandler(
        condition=IfCondition(use_namespace),
        event_handler=OnProcessExit(
            target_action=start_namespaced_rviz_cmd,
            on_exit=EmitEvent(event=Shutdown(reason='rviz exited'))))

    # Create the launch description and populate
    ld = LaunchDescription()

    # Declare the launch options
    ld.add_action(declare_namespace_cmd)
    ld.add_action(declare_use_namespace_cmd)
    ld.add_action(declare_rviz_config_file_cmd)

    # Add any conditioned actions
    ld.add_action(start_rviz_cmd)
    ld.add_action(start_namespaced_rviz_cmd)

    # ld.add_action(tf_relay00)
    # ld.add_action(tf_relay001)
    # ld.add_action(tf_relay002)
    #保留part1
    # ld.add_action(tf_relay0)
    # ld.add_action(tf_relay01)
    # ld.add_action(tf_relay02)

    # ld.add_action(tf_relay10)
    # ld.add_action(tf_relay11)
    # ld.add_action(tf_relay12)

    #保留part2
    # ld.add_action(tf_relay13)
    # ld.add_action(tf_relay14)
    # ld.add_action(tf_relay15)
    

    #ld.add_action(tf_relay)
    # ld.add_action(tf_relay1)  #只留这个就可以
    #ld.add_action(tf_relay2)
    #ld.add_action(tf_relay3)
    # ld.add_action(tf_relay4)
    # ld.add_action(tf_relay5)
    # ld.add_action(tf_relay6)
    # ld.add_action(tf_relay7)
    # downsampled map no map received


    # Add other nodes and processes we need
    ld.add_action(exit_event_handler)
    ld.add_action(exit_event_handler_namespaced)

    return ld
