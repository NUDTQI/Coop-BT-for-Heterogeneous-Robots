// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from py_trees_ros_interfaces:msg/ServiceDetails.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__SERVICE_DETAILS__STRUCT_H_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__SERVICE_DETAILS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'service_name'
// Member 'service_type'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ServiceDetails in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__msg__ServiceDetails
{
  rosidl_runtime_c__String service_name;
  rosidl_runtime_c__String service_type;
} py_trees_ros_interfaces__msg__ServiceDetails;

// Struct for a sequence of py_trees_ros_interfaces__msg__ServiceDetails.
typedef struct py_trees_ros_interfaces__msg__ServiceDetails__Sequence
{
  py_trees_ros_interfaces__msg__ServiceDetails * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__msg__ServiceDetails__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__SERVICE_DETAILS__STRUCT_H_
