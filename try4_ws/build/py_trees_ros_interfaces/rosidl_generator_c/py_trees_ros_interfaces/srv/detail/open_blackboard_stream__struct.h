// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from py_trees_ros_interfaces:srv/OpenBlackboardStream.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__SRV__DETAIL__OPEN_BLACKBOARD_STREAM__STRUCT_H_
#define PY_TREES_ROS_INTERFACES__SRV__DETAIL__OPEN_BLACKBOARD_STREAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'variables'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/OpenBlackboardStream in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__srv__OpenBlackboardStream_Request
{
  rosidl_runtime_c__String__Sequence variables;
  bool filter_on_visited_path;
  bool with_activity_stream;
} py_trees_ros_interfaces__srv__OpenBlackboardStream_Request;

// Struct for a sequence of py_trees_ros_interfaces__srv__OpenBlackboardStream_Request.
typedef struct py_trees_ros_interfaces__srv__OpenBlackboardStream_Request__Sequence
{
  py_trees_ros_interfaces__srv__OpenBlackboardStream_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__srv__OpenBlackboardStream_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'topic'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/OpenBlackboardStream in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__srv__OpenBlackboardStream_Response
{
  rosidl_runtime_c__String topic;
} py_trees_ros_interfaces__srv__OpenBlackboardStream_Response;

// Struct for a sequence of py_trees_ros_interfaces__srv__OpenBlackboardStream_Response.
typedef struct py_trees_ros_interfaces__srv__OpenBlackboardStream_Response__Sequence
{
  py_trees_ros_interfaces__srv__OpenBlackboardStream_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__srv__OpenBlackboardStream_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PY_TREES_ROS_INTERFACES__SRV__DETAIL__OPEN_BLACKBOARD_STREAM__STRUCT_H_
