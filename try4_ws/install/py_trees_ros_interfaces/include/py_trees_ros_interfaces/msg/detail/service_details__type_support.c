// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from py_trees_ros_interfaces:msg/ServiceDetails.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "py_trees_ros_interfaces/msg/detail/service_details__rosidl_typesupport_introspection_c.h"
#include "py_trees_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "py_trees_ros_interfaces/msg/detail/service_details__functions.h"
#include "py_trees_ros_interfaces/msg/detail/service_details__struct.h"


// Include directives for member types
// Member `service_name`
// Member `service_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ServiceDetails__rosidl_typesupport_introspection_c__ServiceDetails_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  py_trees_ros_interfaces__msg__ServiceDetails__init(message_memory);
}

void ServiceDetails__rosidl_typesupport_introspection_c__ServiceDetails_fini_function(void * message_memory)
{
  py_trees_ros_interfaces__msg__ServiceDetails__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ServiceDetails__rosidl_typesupport_introspection_c__ServiceDetails_message_member_array[2] = {
  {
    "service_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__ServiceDetails, service_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "service_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__ServiceDetails, service_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ServiceDetails__rosidl_typesupport_introspection_c__ServiceDetails_message_members = {
  "py_trees_ros_interfaces__msg",  // message namespace
  "ServiceDetails",  // message name
  2,  // number of fields
  sizeof(py_trees_ros_interfaces__msg__ServiceDetails),
  ServiceDetails__rosidl_typesupport_introspection_c__ServiceDetails_message_member_array,  // message members
  ServiceDetails__rosidl_typesupport_introspection_c__ServiceDetails_init_function,  // function to initialize message memory (memory has to be allocated)
  ServiceDetails__rosidl_typesupport_introspection_c__ServiceDetails_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ServiceDetails__rosidl_typesupport_introspection_c__ServiceDetails_message_type_support_handle = {
  0,
  &ServiceDetails__rosidl_typesupport_introspection_c__ServiceDetails_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_py_trees_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, msg, ServiceDetails)() {
  if (!ServiceDetails__rosidl_typesupport_introspection_c__ServiceDetails_message_type_support_handle.typesupport_identifier) {
    ServiceDetails__rosidl_typesupport_introspection_c__ServiceDetails_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ServiceDetails__rosidl_typesupport_introspection_c__ServiceDetails_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
