// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from py_trees_ros_interfaces:msg/SnapshotStreamParameters.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__SNAPSHOT_STREAM_PARAMETERS__STRUCT_H_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__SNAPSHOT_STREAM_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SnapshotStreamParameters in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__msg__SnapshotStreamParameters
{
  double snapshot_period;
  bool blackboard_data;
  bool blackboard_activity;
} py_trees_ros_interfaces__msg__SnapshotStreamParameters;

// Struct for a sequence of py_trees_ros_interfaces__msg__SnapshotStreamParameters.
typedef struct py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence
{
  py_trees_ros_interfaces__msg__SnapshotStreamParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__msg__SnapshotStreamParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__SNAPSHOT_STREAM_PARAMETERS__STRUCT_H_
