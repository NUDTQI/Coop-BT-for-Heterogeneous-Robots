// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from py_trees_ros_interfaces:srv/OpenSnapshotStream.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__SRV__DETAIL__OPEN_SNAPSHOT_STREAM__STRUCT_H_
#define PY_TREES_ROS_INTERFACES__SRV__DETAIL__OPEN_SNAPSHOT_STREAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topic_name'
#include "rosidl_runtime_c/string.h"
// Member 'parameters'
#include "py_trees_ros_interfaces/msg/detail/snapshot_stream_parameters__struct.h"

// Struct defined in srv/OpenSnapshotStream in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__srv__OpenSnapshotStream_Request
{
  rosidl_runtime_c__String topic_name;
  py_trees_ros_interfaces__msg__SnapshotStreamParameters parameters;
} py_trees_ros_interfaces__srv__OpenSnapshotStream_Request;

// Struct for a sequence of py_trees_ros_interfaces__srv__OpenSnapshotStream_Request.
typedef struct py_trees_ros_interfaces__srv__OpenSnapshotStream_Request__Sequence
{
  py_trees_ros_interfaces__srv__OpenSnapshotStream_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__srv__OpenSnapshotStream_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'topic_name'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/OpenSnapshotStream in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__srv__OpenSnapshotStream_Response
{
  rosidl_runtime_c__String topic_name;
} py_trees_ros_interfaces__srv__OpenSnapshotStream_Response;

// Struct for a sequence of py_trees_ros_interfaces__srv__OpenSnapshotStream_Response.
typedef struct py_trees_ros_interfaces__srv__OpenSnapshotStream_Response__Sequence
{
  py_trees_ros_interfaces__srv__OpenSnapshotStream_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__srv__OpenSnapshotStream_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PY_TREES_ROS_INTERFACES__SRV__DETAIL__OPEN_SNAPSHOT_STREAM__STRUCT_H_
