// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from py_trees_ros_interfaces:msg/BehaviourTree.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR_TREE__STRUCT_H_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR_TREE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'behaviours'
#include "py_trees_ros_interfaces/msg/detail/behaviour__struct.h"
// Member 'blackboard_on_visited_path'
#include "diagnostic_msgs/msg/detail/key_value__struct.h"
// Member 'blackboard_activity'
#include "py_trees_ros_interfaces/msg/detail/activity_item__struct.h"
// Member 'statistics'
#include "py_trees_ros_interfaces/msg/detail/statistics__struct.h"

// Struct defined in msg/BehaviourTree in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__msg__BehaviourTree
{
  py_trees_ros_interfaces__msg__Behaviour__Sequence behaviours;
  bool changed;
  diagnostic_msgs__msg__KeyValue__Sequence blackboard_on_visited_path;
  py_trees_ros_interfaces__msg__ActivityItem__Sequence blackboard_activity;
  py_trees_ros_interfaces__msg__Statistics statistics;
} py_trees_ros_interfaces__msg__BehaviourTree;

// Struct for a sequence of py_trees_ros_interfaces__msg__BehaviourTree.
typedef struct py_trees_ros_interfaces__msg__BehaviourTree__Sequence
{
  py_trees_ros_interfaces__msg__BehaviourTree * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__msg__BehaviourTree__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR_TREE__STRUCT_H_
