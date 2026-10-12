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
from launch.actions import DeclareLaunchArgument
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.substitutions import PathJoinSubstitution#add


#os.environ['TURTLEBOT3_MODEL']='waffle_pi'   ####add

TURTLEBOT3_MODEL = os.environ['TURTLEBOT3_MODEL']


def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    robot_prefix = LaunchConfiguration('robot_prefix')  ##
    namespace = LaunchConfiguration('namespace')     ##add
    use_namespace = 'True'
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
        get_package_share_directory('nav2_bringup'),
        'rviz',
        'nav2_default_view.rviz')#'nav2_namespaced_view.rviz')   《《《————换成这个会出现'<robot_namespace>/initialpose'问题

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
