// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from py_trees_ros_interfaces:msg/ActivityItem.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "py_trees_ros_interfaces/msg/detail/activity_item__rosidl_typesupport_introspection_c.h"
#include "py_trees_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "py_trees_ros_interfaces/msg/detail/activity_item__functions.h"
#include "py_trees_ros_interfaces/msg/detail/activity_item__struct.h"


// Include directives for member types
// Member `key`
// Member `client_name`
// Member `activity_type`
// Member `previous_value`
// Member `current_value`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActivityItem__rosidl_typesupport_introspection_c__ActivityItem_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  py_trees_ros_interfaces__msg__ActivityItem__init(message_memory);
}

void ActivityItem__rosidl_typesupport_introspection_c__ActivityItem_fini_function(void * message_memory)
{
  py_trees_ros_interfaces__msg__ActivityItem__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActivityItem__rosidl_typesupport_introspection_c__ActivityItem_message_member_array[5] = {
  {
    "key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__ActivityItem, key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "client_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__ActivityItem, client_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "activity_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__ActivityItem, activity_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "previous_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__ActivityItem, previous_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__ActivityItem, current_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActivityItem__rosidl_typesupport_introspection_c__ActivityItem_message_members = {
  "py_trees_ros_interfaces__msg",  // message namespace
  "ActivityItem",  // message name
  5,  // number of fields
  sizeof(py_trees_ros_interfaces__msg__ActivityItem),
  ActivityItem__rosidl_typesupport_introspection_c__ActivityItem_message_member_array,  // message members
  ActivityItem__rosidl_typesupport_introspection_c__ActivityItem_init_function,  // function to initialize message memory (memory has to be allocated)
  ActivityItem__rosidl_typesupport_introspection_c__ActivityItem_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActivityItem__rosidl_typesupport_introspection_c__ActivityItem_message_type_support_handle = {
  0,
  &ActivityItem__rosidl_typesupport_introspection_c__ActivityItem_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_py_trees_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, msg, ActivityItem)() {
  if (!ActivityItem__rosidl_typesupport_introspection_c__ActivityItem_message_type_support_handle.typesupport_identifier) {
    ActivityItem__rosidl_typesupport_introspection_c__ActivityItem_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActivityItem__rosidl_typesupport_introspection_c__ActivityItem_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
