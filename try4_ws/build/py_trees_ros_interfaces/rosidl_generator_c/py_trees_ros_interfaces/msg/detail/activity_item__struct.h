// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from py_trees_ros_interfaces:msg/ActivityItem.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__ACTIVITY_ITEM__STRUCT_H_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__ACTIVITY_ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'READ'.
static const char * const py_trees_ros_interfaces__msg__ActivityItem__READ = "READ";

/// Constant 'INITIALISED'.
static const char * const py_trees_ros_interfaces__msg__ActivityItem__INITIALISED = "INITIALISED";

/// Constant 'WRITE'.
static const char * const py_trees_ros_interfaces__msg__ActivityItem__WRITE = "WRITE";

/// Constant 'ACCESSED'.
static const char * const py_trees_ros_interfaces__msg__ActivityItem__ACCESSED = "ACCESSED";

/// Constant 'ACCESS_DENIED'.
static const char * const py_trees_ros_interfaces__msg__ActivityItem__ACCESS_DENIED = "ACCESS_DENIED";

/// Constant 'NO_KEY'.
static const char * const py_trees_ros_interfaces__msg__ActivityItem__NO_KEY = "NO_KEY";

/// Constant 'NO_OVERWRITE'.
static const char * const py_trees_ros_interfaces__msg__ActivityItem__NO_OVERWRITE = "NO_OVERWRITE";

/// Constant 'UNSET'.
static const char * const py_trees_ros_interfaces__msg__ActivityItem__UNSET = "UNSET";

// Include directives for member types
// Member 'key'
// Member 'client_name'
// Member 'activity_type'
// Member 'previous_value'
// Member 'current_value'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ActivityItem in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__msg__ActivityItem
{
  rosidl_runtime_c__String key;
  rosidl_runtime_c__String client_name;
  rosidl_runtime_c__String activity_type;
  rosidl_runtime_c__String previous_value;
  rosidl_runtime_c__String current_value;
} py_trees_ros_interfaces__msg__ActivityItem;

// Struct for a sequence of py_trees_ros_interfaces__msg__ActivityItem.
typedef struct py_trees_ros_interfaces__msg__ActivityItem__Sequence
{
  py_trees_ros_interfaces__msg__ActivityItem * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__msg__ActivityItem__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__ACTIVITY_ITEM__STRUCT_H_
