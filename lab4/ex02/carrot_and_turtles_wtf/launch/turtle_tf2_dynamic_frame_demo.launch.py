import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node





def generate_launch_description():
    return LaunchDescription([
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='sim'
        ),
        Node(
            package='carrot_and_turtles_wtf',
            executable='turtle_tf2_broadcaster',
            name='broadcaster1',
            parameters=[
                {'turtlename': 'turtle1'}
            ]
        ),
        DeclareLaunchArgument(
            'radius', default_value='2.0',
            description='radius'
        ),
        DeclareLaunchArgument(
            'direction_of_rotation', default_value='1',
            description='direction of rotation'
        ),
        Node(
            package='carrot_and_turtles_wtf',
            executable='turtle_tf2_broadcaster',
            name='broadcaster2',
            parameters=[
                {'turtlename': 'turtle2'}
            ]
        ),
        Node(
            package='carrot_and_turtles_wtf',
            executable='dynamic_frame_tf2_broadcaster',
            name='broadcaster3',
            parameters=[
                {'turtlename': 'carrot1'},
                {'radius':LaunchConfiguration('radius')},
                {'direction_of_rotation':LaunchConfiguration('direction_of_rotation')}
            ]
        ),
        Node(
            package='carrot_and_turtles_wtf',
            executable='turtle_tf2_listener',
            name='listener',
            parameters=[
                {'target_frame': 'carrot1'}
            ]
        )
    ])