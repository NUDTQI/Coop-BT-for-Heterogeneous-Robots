// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from py_trees_ros_interfaces:msg/SubscriberDetails.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "py_trees_ros_interfaces/msg/detail/subscriber_details__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace py_trees_ros_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SubscriberDetails_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) py_trees_ros_interfaces::msg::SubscriberDetails(_init);
}

void SubscriberDetails_fini_function(void * message_memory)
{
  auto typed_message = static_cast<py_trees_ros_interfaces::msg::SubscriberDetails *>(message_memory);
  typed_message->~SubscriberDetails();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SubscriberDetails_message_member_array[3] = {
  {
    "topic_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::SubscriberDetails, topic_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::SubscriberDetails, message_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "latched",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::SubscriberDetails, latched),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SubscriberDetails_message_members = {
  "py_trees_ros_interfaces::msg",  // message namespace
  "SubscriberDetails",  // message name
  3,  // number of fields
  sizeof(py_trees_ros_interfaces::msg::SubscriberDetails),
  SubscriberDetails_message_member_array,  // message members
  SubscriberDetails_init_function,  // function to initialize message memory (memory has to be allocated)
  SubscriberDetails_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SubscriberDetails_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SubscriberDetails_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace py_trees_ros_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<py_trees_ros_interfaces::msg::SubscriberDetails>()
{
  return &::py_trees_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::SubscriberDetails_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, py_trees_ros_interfaces, msg, SubscriberDetails)() {
  return &::py_trees_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::SubscriberDetails_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
