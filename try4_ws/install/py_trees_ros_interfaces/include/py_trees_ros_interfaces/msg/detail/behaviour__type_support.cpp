// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from py_trees_ros_interfaces:msg/Behaviour.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "py_trees_ros_interfaces/msg/detail/behaviour__struct.hpp"
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

void Behaviour_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) py_trees_ros_interfaces::msg::Behaviour(_init);
}

void Behaviour_fini_function(void * message_memory)
{
  auto typed_message = static_cast<py_trees_ros_interfaces::msg::Behaviour *>(message_memory);
  typed_message->~Behaviour();
}

size_t size_function__Behaviour__child_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<unique_identifier_msgs::msg::UUID> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Behaviour__child_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<unique_identifier_msgs::msg::UUID> *>(untyped_member);
  return &member[index];
}

void * get_function__Behaviour__child_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<unique_identifier_msgs::msg::UUID> *>(untyped_member);
  return &member[index];
}

void resize_function__Behaviour__child_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<unique_identifier_msgs::msg::UUID> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Behaviour__blackboard_access(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<py_trees_ros_interfaces::msg::KeyValue> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Behaviour__blackboard_access(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<py_trees_ros_interfaces::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void * get_function__Behaviour__blackboard_access(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<py_trees_ros_interfaces::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void resize_function__Behaviour__blackboard_access(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<py_trees_ros_interfaces::msg::KeyValue> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Behaviour_message_member_array[14] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::Behaviour, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "class_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::Behaviour, class_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "own_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::Behaviour, own_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parent_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::Behaviour, parent_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tip_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::Behaviour, tip_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "child_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::Behaviour, child_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__Behaviour__child_ids,  // size() function pointer
    get_const_function__Behaviour__child_ids,  // get_const(index) function pointer
    get_function__Behaviour__child_ids,  // get(index) function pointer
    resize_function__Behaviour__child_ids  // resize(index) function pointer
  },
  {
    "current_child_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::Behaviour, current_child_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::Behaviour, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "additional_detail",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::Behaviour, additional_detail),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "blackbox_level",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::Behaviour, blackbox_level),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::Behaviour, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::Behaviour, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_active",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::Behaviour, is_active),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "blackboard_access",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<py_trees_ros_interfaces::msg::KeyValue>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::Behaviour, blackboard_access),  // bytes offset in struct
    nullptr,  // default value
    size_function__Behaviour__blackboard_access,  // size() function pointer
    get_const_function__Behaviour__blackboard_access,  // get_const(index) function pointer
    get_function__Behaviour__blackboard_access,  // get(index) function pointer
    resize_function__Behaviour__blackboard_access  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Behaviour_message_members = {
  "py_trees_ros_interfaces::msg",  // message namespace
  "Behaviour",  // message name
  14,  // number of fields
  sizeof(py_trees_ros_interfaces::msg::Behaviour),
  Behaviour_message_member_array,  // message members
  Behaviour_init_function,  // function to initialize message memory (memory has to be allocated)
  Behaviour_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Behaviour_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Behaviour_message_members,
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
get_message_type_support_handle<py_trees_ros_interfaces::msg::Behaviour>()
{
  return &::py_trees_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::Behaviour_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, py_trees_ros_interfaces, msg, Behaviour)() {
  return &::py_trees_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::Behaviour_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
