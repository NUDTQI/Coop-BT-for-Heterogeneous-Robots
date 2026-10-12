// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from py_trees_ros_interfaces:msg/Statistics.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__STATISTICS__STRUCT_H_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__STATISTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/Statistics in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__msg__Statistics
{
  int64_t count;
  builtin_interfaces__msg__Time stamp;
  float tick_duration;
  float tick_duration_average;
  float tick_duration_variance;
  float tick_interval;
  float tick_interval_average;
  float tick_interval_variance;
} py_trees_ros_interfaces__msg__Statistics;

// Struct for a sequence of py_trees_ros_interfaces__msg__Statistics.
typedef struct py_trees_ros_interfaces__msg__Statistics__Sequence
{
  py_trees_ros_interfaces__msg__Statistics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__msg__Statistics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__STATISTICS__STRUCT_H_
