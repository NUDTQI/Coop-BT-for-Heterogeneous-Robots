#!/usr/bin/env python3
#
# Copyright 2019 ROBOTIS CO., LTD.
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
# Authors: Darby Lim

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.substitutions import Command
from launch.substitutions import PythonExpression

def generate_launch_description():
    num_robots = 2  # Define the number of robots you want to spawn
    #robot_prefixes = [f"robot_{i}_" for i in range(num_robots)]  # Generate prefixes for each robot
    ######robot_prefix=LaunchConfiguration('robot_prefix')#####删掉的

    ##############################  nodes = []  # Initialize a list to hold Node instances   !!!!!!!!!!!!!

    #for robot_prefix in robot_prefixes:
    
    TURTLEBOT3_MODEL = os.environ['TURTLEBOT3_MODEL']
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    urdf_file_name = f'turtlebot3_{TURTLEBOT3_MODEL}.urdf'

    namespace = LaunchConfiguration('namespace')
    #for j in range(0,num_robots):       ##add，以下截至到declare所有都右移一位
    ###复原了右移，因为state publisher在tb3_world里面开了两遍，同时移除了下面所有关于robot_prefix的改动，因为如果tb3_world开启的时候定义了namespace，下面的所有节点就限定在该命名空间中了
    robot_prefix=LaunchConfiguration('robot_prefix')#f"robot_{j}"
    urdf_path = os.path.join(
            get_package_share_directory('turtlebot3_gazebo'),
            'urdf',
            urdf_file_name)

    with open(urdf_path, 'r') as infp:
            robot_desc = infp.read() #.replace('turtlebot3_', f'{robot_prefix[:-1]}')  # Replace base link with prefixed link

    '''    
    nodes.append(Node(  ##两次开启的node名称要不要区分
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',#f'{robot_prefix}/robot_state_publisher',
            output='screen',
            parameters=[{
                'robot_prefix':robot_prefix,  ##add
                'use_sim_time': use_sim_time,
                'robot_description': robot_desc,
            }],
            namespace=namespace,
        ))

    # Declare the 'use_sim_time' argument once outside the loop
    declare_use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation (Gazebo) clock if true'
    )

    return LaunchDescription([declare_use_sim_time_arg] + nodes)
    '''
    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation (Gazebo) clock if true'),

        ####add
        DeclareLaunchArgument(
            'namespace',
            default_value=namespace,
            description='namespace of the robot'),
        ####add


        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{
                'use_sim_time': use_sim_time,
                'robot_description': robot_desc
            }],
            namespace=namespace,
        ),
    ])


