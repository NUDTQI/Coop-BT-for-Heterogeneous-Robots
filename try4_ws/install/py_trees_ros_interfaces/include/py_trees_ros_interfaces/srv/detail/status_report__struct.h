// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from py_trees_ros_interfaces:srv/StatusReport.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__SRV__DETAIL__STATUS_REPORT__STRUCT_H_
#define PY_TREES_ROS_INTERFACES__SRV__DETAIL__STATUS_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/StatusReport in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__srv__StatusReport_Request
{
  uint8_t structure_needs_at_least_one_member;
} py_trees_ros_interfaces__srv__StatusReport_Request;

// Struct for a sequence of py_trees_ros_interfaces__srv__StatusReport_Request.
typedef struct py_trees_ros_interfaces__srv__StatusReport_Request__Sequence
{
  py_trees_ros_interfaces__srv__StatusReport_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__srv__StatusReport_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'report'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/StatusReport in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__srv__StatusReport_Response
{
  rosidl_runtime_c__String report;
} py_trees_ros_interfaces__srv__StatusReport_Response;

// Struct for a sequence of py_trees_ros_interfaces__srv__StatusReport_Response.
typedef struct py_trees_ros_interfaces__srv__StatusReport_Response__Sequence
{
  py_trees_ros_interfaces__srv__StatusReport_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__srv__StatusReport_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PY_TREES_ROS_INTERFACES__SRV__DETAIL__STATUS_REPORT__STRUCT_H_
