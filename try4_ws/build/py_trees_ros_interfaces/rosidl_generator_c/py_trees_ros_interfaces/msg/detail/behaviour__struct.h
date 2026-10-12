// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from py_trees_ros_interfaces:msg/Behaviour.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR__STRUCT_H_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INVALID'.
enum
{
  py_trees_ros_interfaces__msg__Behaviour__INVALID = 1
};

/// Constant 'RUNNING'.
enum
{
  py_trees_ros_interfaces__msg__Behaviour__RUNNING = 2
};

/// Constant 'SUCCESS'.
enum
{
  py_trees_ros_interfaces__msg__Behaviour__SUCCESS = 3
};

/// Constant 'FAILURE'.
enum
{
  py_trees_ros_interfaces__msg__Behaviour__FAILURE = 4
};

/// Constant 'UNKNOWN_TYPE'.
enum
{
  py_trees_ros_interfaces__msg__Behaviour__UNKNOWN_TYPE = 0
};

/// Constant 'BEHAVIOUR'.
enum
{
  py_trees_ros_interfaces__msg__Behaviour__BEHAVIOUR = 1
};

/// Constant 'SEQUENCE'.
enum
{
  py_trees_ros_interfaces__msg__Behaviour__SEQUENCE = 2
};

/// Constant 'SELECTOR'.
enum
{
  py_trees_ros_interfaces__msg__Behaviour__SELECTOR = 3
};

/// Constant 'PARALLEL'.
enum
{
  py_trees_ros_interfaces__msg__Behaviour__PARALLEL = 4
};

/// Constant 'CHOOSER'.
enum
{
  py_trees_ros_interfaces__msg__Behaviour__CHOOSER = 5
};

/// Constant 'DECORATOR'.
enum
{
  py_trees_ros_interfaces__msg__Behaviour__DECORATOR = 6
};

/// Constant 'BLACKBOX_LEVEL_DETAIL'.
enum
{
  py_trees_ros_interfaces__msg__Behaviour__BLACKBOX_LEVEL_DETAIL = 1
};

/// Constant 'BLACKBOX_LEVEL_COMPONENT'.
enum
{
  py_trees_ros_interfaces__msg__Behaviour__BLACKBOX_LEVEL_COMPONENT = 2
};

/// Constant 'BLACKBOX_LEVEL_BIG_PICTURE'.
enum
{
  py_trees_ros_interfaces__msg__Behaviour__BLACKBOX_LEVEL_BIG_PICTURE = 3
};

/// Constant 'BLACKBOX_LEVEL_NOT_A_BLACKBOX'.
enum
{
  py_trees_ros_interfaces__msg__Behaviour__BLACKBOX_LEVEL_NOT_A_BLACKBOX = 4
};

/// Constant 'BLACKBOARD_ACCESS_READ'.
static const char * const py_trees_ros_interfaces__msg__Behaviour__BLACKBOARD_ACCESS_READ = "r";

/// Constant 'BLACKBOARD_ACCESS_WRITE'.
static const char * const py_trees_ros_interfaces__msg__Behaviour__BLACKBOARD_ACCESS_WRITE = "w";

/// Constant 'BLACKBOARD_ACCESS_EXCLUSIVE_WRITE'.
static const char * const py_trees_ros_interfaces__msg__Behaviour__BLACKBOARD_ACCESS_EXCLUSIVE_WRITE = "x";

// Include directives for member types
// Member 'name'
// Member 'class_name'
// Member 'additional_detail'
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'own_id'
// Member 'parent_id'
// Member 'tip_id'
// Member 'child_ids'
// Member 'current_child_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'blackboard_access'
#include "py_trees_ros_interfaces/msg/detail/key_value__struct.h"

// Struct defined in msg/Behaviour in the package py_trees_ros_interfaces.
typedef struct py_trees_ros_interfaces__msg__Behaviour
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String class_name;
  unique_identifier_msgs__msg__UUID own_id;
  unique_identifier_msgs__msg__UUID parent_id;
  unique_identifier_msgs__msg__UUID tip_id;
  unique_identifier_msgs__msg__UUID__Sequence child_ids;
  unique_identifier_msgs__msg__UUID current_child_id;
  uint8_t type;
  rosidl_runtime_c__String additional_detail;
  uint8_t blackbox_level;
  uint8_t status;
  rosidl_runtime_c__String message;
  bool is_active;
  py_trees_ros_interfaces__msg__KeyValue__Sequence blackboard_access;
} py_trees_ros_interfaces__msg__Behaviour;

// Struct for a sequence of py_trees_ros_interfaces__msg__Behaviour.
typedef struct py_trees_ros_interfaces__msg__Behaviour__Sequence
{
  py_trees_ros_interfaces__msg__Behaviour * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} py_trees_ros_interfaces__msg__Behaviour__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR__STRUCT_H_
