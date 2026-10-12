// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from py_trees_ros_interfaces:msg/BehaviourTree.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "py_trees_ros_interfaces/msg/detail/behaviour_tree__struct.hpp"
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

void BehaviourTree_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) py_trees_ros_interfaces::msg::BehaviourTree(_init);
}

void BehaviourTree_fini_function(void * message_memory)
{
  auto typed_message = static_cast<py_trees_ros_interfaces::msg::BehaviourTree *>(message_memory);
  typed_message->~BehaviourTree();
}

size_t size_function__BehaviourTree__behaviours(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<py_trees_ros_interfaces::msg::Behaviour> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BehaviourTree__behaviours(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<py_trees_ros_interfaces::msg::Behaviour> *>(untyped_member);
  return &member[index];
}

void * get_function__BehaviourTree__behaviours(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<py_trees_ros_interfaces::msg::Behaviour> *>(untyped_member);
  return &member[index];
}

void resize_function__BehaviourTree__behaviours(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<py_trees_ros_interfaces::msg::Behaviour> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BehaviourTree__blackboard_on_visited_path(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<diagnostic_msgs::msg::KeyValue> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BehaviourTree__blackboard_on_visited_path(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<diagnostic_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void * get_function__BehaviourTree__blackboard_on_visited_path(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<diagnostic_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void resize_function__BehaviourTree__blackboard_on_visited_path(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<diagnostic_msgs::msg::KeyValue> *>(untyped_member);
  member->resize(size);
}

size_t size_function__BehaviourTree__blackboard_activity(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<py_trees_ros_interfaces::msg::ActivityItem> *>(untyped_member);
  return member->size();
}

const void * get_const_function__BehaviourTree__blackboard_activity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<py_trees_ros_interfaces::msg::ActivityItem> *>(untyped_member);
  return &member[index];
}

void * get_function__BehaviourTree__blackboard_activity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<py_trees_ros_interfaces::msg::ActivityItem> *>(untyped_member);
  return &member[index];
}

void resize_function__BehaviourTree__blackboard_activity(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<py_trees_ros_interfaces::msg::ActivityItem> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BehaviourTree_message_member_array[5] = {
  {
    "behaviours",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<py_trees_ros_interfaces::msg::Behaviour>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::BehaviourTree, behaviours),  // bytes offset in struct
    nullptr,  // default value
    size_function__BehaviourTree__behaviours,  // size() function pointer
    get_const_function__BehaviourTree__behaviours,  // get_const(index) function pointer
    get_function__BehaviourTree__behaviours,  // get(index) function pointer
    resize_function__BehaviourTree__behaviours  // resize(index) function pointer
  },
  {
    "changed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::BehaviourTree, changed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "blackboard_on_visited_path",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<diagnostic_msgs::msg::KeyValue>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::BehaviourTree, blackboard_on_visited_path),  // bytes offset in struct
    nullptr,  // default value
    size_function__BehaviourTree__blackboard_on_visited_path,  // size() function pointer
    get_const_function__BehaviourTree__blackboard_on_visited_path,  // get_const(index) function pointer
    get_function__BehaviourTree__blackboard_on_visited_path,  // get(index) function pointer
    resize_function__BehaviourTree__blackboard_on_visited_path  // resize(index) function pointer
  },
  {
    "blackboard_activity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<py_trees_ros_interfaces::msg::ActivityItem>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::BehaviourTree, blackboard_activity),  // bytes offset in struct
    nullptr,  // default value
    size_function__BehaviourTree__blackboard_activity,  // size() function pointer
    get_const_function__BehaviourTree__blackboard_activity,  // get_const(index) function pointer
    get_function__BehaviourTree__blackboard_activity,  // get(index) function pointer
    resize_function__BehaviourTree__blackboard_activity  // resize(index) function pointer
  },
  {
    "statistics",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<py_trees_ros_interfaces::msg::Statistics>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces::msg::BehaviourTree, statistics),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BehaviourTree_message_members = {
  "py_trees_ros_interfaces::msg",  // message namespace
  "BehaviourTree",  // message name
  5,  // number of fields
  sizeof(py_trees_ros_interfaces::msg::BehaviourTree),
  BehaviourTree_message_member_array,  // message members
  BehaviourTree_init_function,  // function to initialize message memory (memory has to be allocated)
  BehaviourTree_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BehaviourTree_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BehaviourTree_message_members,
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
get_message_type_support_handle<py_trees_ros_interfaces::msg::BehaviourTree>()
{
  return &::py_trees_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::BehaviourTree_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, py_trees_ros_interfaces, msg, BehaviourTree)() {
  return &::py_trees_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::BehaviourTree_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
