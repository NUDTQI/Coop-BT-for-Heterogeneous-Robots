// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from py_trees_ros_interfaces:msg/SubscriberDetails.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "py_trees_ros_interfaces/msg/detail/subscriber_details__rosidl_typesupport_introspection_c.h"
#include "py_trees_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "py_trees_ros_interfaces/msg/detail/subscriber_details__functions.h"
#include "py_trees_ros_interfaces/msg/detail/subscriber_details__struct.h"


// Include directives for member types
// Member `topic_name`
// Member `message_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SubscriberDetails__rosidl_typesupport_introspection_c__SubscriberDetails_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  py_trees_ros_interfaces__msg__SubscriberDetails__init(message_memory);
}

void SubscriberDetails__rosidl_typesupport_introspection_c__SubscriberDetails_fini_function(void * message_memory)
{
  py_trees_ros_interfaces__msg__SubscriberDetails__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SubscriberDetails__rosidl_typesupport_introspection_c__SubscriberDetails_message_member_array[3] = {
  {
    "topic_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__SubscriberDetails, topic_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__SubscriberDetails, message_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latched",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__SubscriberDetails, latched),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SubscriberDetails__rosidl_typesupport_introspection_c__SubscriberDetails_message_members = {
  "py_trees_ros_interfaces__msg",  // message namespace
  "SubscriberDetails",  // message name
  3,  // number of fields
  sizeof(py_trees_ros_interfaces__msg__SubscriberDetails),
  SubscriberDetails__rosidl_typesupport_introspection_c__SubscriberDetails_message_member_array,  // message members
  SubscriberDetails__rosidl_typesupport_introspection_c__SubscriberDetails_init_function,  // function to initialize message memory (memory has to be allocated)
  SubscriberDetails__rosidl_typesupport_introspection_c__SubscriberDetails_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SubscriberDetails__rosidl_typesupport_introspection_c__SubscriberDetails_message_type_support_handle = {
  0,
  &SubscriberDetails__rosidl_typesupport_introspection_c__SubscriberDetails_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_py_trees_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, msg, SubscriberDetails)() {
  if (!SubscriberDetails__rosidl_typesupport_introspection_c__SubscriberDetails_message_type_support_handle.typesupport_identifier) {
    SubscriberDetails__rosidl_typesupport_introspection_c__SubscriberDetails_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SubscriberDetails__rosidl_typesupport_introspection_c__SubscriberDetails_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
