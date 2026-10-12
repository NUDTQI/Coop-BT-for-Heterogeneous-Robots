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
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable
from launch.substitutions import LaunchConfiguration, PythonExpression
from launch_ros.actions import Node
from nav2_common.launch import RewrittenYaml
from launch.conditions import IfCondition
from nav2_common.launch import ReplaceString


def generate_launch_description():
    # Get the launch directory
    
    ##bringup_dir=LaunchConfiguration('worlds_dir')
    bringup_dir = get_package_share_directory('tb3_worlds')###

    namespace = LaunchConfiguration('namespace')
    map_yaml_file = LaunchConfiguration('map')
    map_server=LaunchConfiguration('map_server')
    use_sim_time = LaunchConfiguration('use_sim_time')
    autostart = LaunchConfiguration('autostart')
    params_file = LaunchConfiguration('params_file')

    # Map fully qualified names to relative ones so the node's namespace can be prepended.
    # In case of the transforms (tf), currently, there doesn't seem to be a better alternative
    # https://github.com/ros/geometry2/issues/32
    # https://github.com/ros/robot_state_publisher/pull/30
    # TODO(orduno) Substitute with `PushNodeRemapping`
    #              https://github.com/ros2/launch_ros/issues/56
    
    remappings = [#('/tf', 'tf'),
                  #('/tf_static', 'tf_static'),
                  #('scan', '/scan'),  #关上，turtle0/amcl才能订阅turtle0/scan
                #   ('frame: ',f'frame: {namespace}/'),
                #   ('frame_id: "',f'frame_id: "{namespace}/'),
                #   ('topic: /',f'topic: /{namespace}/')
                #   ('odom','{namespace}/odom'),
                #   ('base_link',f'{namespace}/base_link'),
                #   ('base_footprint',f'{namespace}/base_footprint'),
                #   ('map',f'{namespace}/map'),
                #   ('scan',f'{namespace}/scan'),


                # 给三个文件都加了remapping，但运行结果显示这几个部分不能替换，不清楚错误原因


                  #('robot1',namespace)
                  ('map','/map')   # 打开，然后turtle0/amcl就会订阅全局map而不是turtle0/map
                  ]

    # Create our own temporary YAML files that include substitutions
    param_substitutions = {
        'use_sim_time': use_sim_time,
        'yaml_filename': map_yaml_file,
        #'frame_id': 'map',
        #'namespace':namespace,
        #'use_namespace':'True',
        
        # 'topic_name': '/map',
        # 'frame_id': 'map'
        #'base_frame_id': namespace+'/'+'base_footprint'
        # 'global_frame': 'map',   # 导航栈参数
        # 'map_topic':'/map',
        # 'odom_frame_id': f'{}/odom',           # AMCL 参数
        # 'odom_topic': f'/{namespace}/odom',
        # 'topic': f'/{namespace}/scan',
        # 'robot_base_frame': f'{namespace}/base_link',
        # 'costmap_topic': f'/{namespace}/local_costmap/costmap_raw',
        # 'footprint_topic': f'/{namespace}/local_costmap/published_footprint',
        # 'scan_topic': f'/{namespace}/scan',
        # 'tf_prefix': 
        }

    
    
    # configured_params = RewrittenYaml(
    #     source_file=params_file,#namespaced_params_file,#
    #     root_key=namespace,
    #     param_rewrites=param_substitutions,
    #     convert_types=True)
    
    configured_params=params_file
    


    return LaunchDescription([
        # Set env var to print messages to stdout immediately
        SetEnvironmentVariable('RCUTILS_LOGGING_BUFFERED_STREAM', '1'),

        DeclareLaunchArgument(
            'namespace', default_value='',#namespace,##原： '',     ############是否需要改
            description='Top-level namespace'),

        DeclareLaunchArgument(
            'map',
            default_value=os.path.join(bringup_dir, 'maps', 'sim_house_map.yaml'),
            ###turtlebot3_world.yaml###???
            description='Full path to map yaml file to load'),

        DeclareLaunchArgument(
            'map_server',
            default_value='true',
            description='Enable/disable map server'),

        DeclareLaunchArgument(
            'use_sim_time', default_value='false',
            description='Use simulation (Gazebo) clock if true'),

        DeclareLaunchArgument(
            'autostart', default_value='true',
            description='Automatically startup the nav2 stack'),

        DeclareLaunchArgument(
            'params_file',
            default_value= os.path.join(get_package_share_directory('nav2_bringup'), 'params', 'nav2_params.yaml'),#'nav2_multirobot_params_1.yaml'), 
                #"turtlebot3_navigation2"), 'param', 'burger.yaml'),
            ###？？？？ os.path.join(get_package_share_directory(bringup_dir), 'params', 'nav2_params.yaml'), 
            ###bringup_dir, 'params', 'nav2_params.yaml'
            description='Full path to the ROS2 parameters file to use'),

        # Node(
        #     package='nav2_map_server',
        #     executable='map_server',
        #     name='map_server',
        #     namespace=namespace,     ###add
        #     output='screen',
        #     parameters=[configured_params],
        #     remappings=remappings,
        #     condition=IfCondition(map_server),
        #     ),

        Node(
            package='nav2_amcl',
            executable='amcl',
            name='amcl',
            namespace=namespace,  #关掉了就没办法订阅turtle0/amcl
            output='screen',
            parameters=[configured_params],
            remappings=remappings,
            ),

        Node(
            package='nav2_lifecycle_manager',
            executable='lifecycle_manager',
            name='lifecycle_manager_localization',
            output='screen',
            namespace=namespace,
            #remappings=remappings,
            parameters=[{'use_sim_time': use_sim_time},
                        {'autostart': autostart},
                        {'node_names': ['amcl']},
                        #{'namespace':namespace},
                        #{'use_namespace':'True'}
                        ]),

        # Node(
        #     package='nav2_lifecycle_manager',
        #     executable='lifecycle_manager',
        #     name='lifecycle_manager_map_server',
        #     namespace=namespace,
        #     output='screen',
        #     parameters=[{'use_sim_time': use_sim_time},
        #                 {'autostart': autostart},
        #                 {'node_names': ['map_server']}],
        #     condition=IfCondition(map_server))
    ])
