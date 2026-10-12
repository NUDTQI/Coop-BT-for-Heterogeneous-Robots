// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from py_trees_ros_interfaces:msg/Behaviour.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR__BUILDER_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR__BUILDER_HPP_

#include "py_trees_ros_interfaces/msg/detail/behaviour__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace py_trees_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Behaviour_blackboard_access
{
public:
  explicit Init_Behaviour_blackboard_access(::py_trees_ros_interfaces::msg::Behaviour & msg)
  : msg_(msg)
  {}
  ::py_trees_ros_interfaces::msg::Behaviour blackboard_access(::py_trees_ros_interfaces::msg::Behaviour::_blackboard_access_type arg)
  {
    msg_.blackboard_access = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Behaviour msg_;
};

class Init_Behaviour_is_active
{
public:
  explicit Init_Behaviour_is_active(::py_trees_ros_interfaces::msg::Behaviour & msg)
  : msg_(msg)
  {}
  Init_Behaviour_blackboard_access is_active(::py_trees_ros_interfaces::msg::Behaviour::_is_active_type arg)
  {
    msg_.is_active = std::move(arg);
    return Init_Behaviour_blackboard_access(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Behaviour msg_;
};

class Init_Behaviour_message
{
public:
  explicit Init_Behaviour_message(::py_trees_ros_interfaces::msg::Behaviour & msg)
  : msg_(msg)
  {}
  Init_Behaviour_is_active message(::py_trees_ros_interfaces::msg::Behaviour::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_Behaviour_is_active(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Behaviour msg_;
};

class Init_Behaviour_status
{
public:
  explicit Init_Behaviour_status(::py_trees_ros_interfaces::msg::Behaviour & msg)
  : msg_(msg)
  {}
  Init_Behaviour_message status(::py_trees_ros_interfaces::msg::Behaviour::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Behaviour_message(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Behaviour msg_;
};

class Init_Behaviour_blackbox_level
{
public:
  explicit Init_Behaviour_blackbox_level(::py_trees_ros_interfaces::msg::Behaviour & msg)
  : msg_(msg)
  {}
  Init_Behaviour_status blackbox_level(::py_trees_ros_interfaces::msg::Behaviour::_blackbox_level_type arg)
  {
    msg_.blackbox_level = std::move(arg);
    return Init_Behaviour_status(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Behaviour msg_;
};

class Init_Behaviour_additional_detail
{
public:
  explicit Init_Behaviour_additional_detail(::py_trees_ros_interfaces::msg::Behaviour & msg)
  : msg_(msg)
  {}
  Init_Behaviour_blackbox_level additional_detail(::py_trees_ros_interfaces::msg::Behaviour::_additional_detail_type arg)
  {
    msg_.additional_detail = std::move(arg);
    return Init_Behaviour_blackbox_level(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Behaviour msg_;
};

class Init_Behaviour_type
{
public:
  explicit Init_Behaviour_type(::py_trees_ros_interfaces::msg::Behaviour & msg)
  : msg_(msg)
  {}
  Init_Behaviour_additional_detail type(::py_trees_ros_interfaces::msg::Behaviour::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Behaviour_additional_detail(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Behaviour msg_;
};

class Init_Behaviour_current_child_id
{
public:
  explicit Init_Behaviour_current_child_id(::py_trees_ros_interfaces::msg::Behaviour & msg)
  : msg_(msg)
  {}
  Init_Behaviour_type current_child_id(::py_trees_ros_interfaces::msg::Behaviour::_current_child_id_type arg)
  {
    msg_.current_child_id = std::move(arg);
    return Init_Behaviour_type(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Behaviour msg_;
};

class Init_Behaviour_child_ids
{
public:
  explicit Init_Behaviour_child_ids(::py_trees_ros_interfaces::msg::Behaviour & msg)
  : msg_(msg)
  {}
  Init_Behaviour_current_child_id child_ids(::py_trees_ros_interfaces::msg::Behaviour::_child_ids_type arg)
  {
    msg_.child_ids = std::move(arg);
    return Init_Behaviour_current_child_id(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Behaviour msg_;
};

class Init_Behaviour_tip_id
{
public:
  explicit Init_Behaviour_tip_id(::py_trees_ros_interfaces::msg::Behaviour & msg)
  : msg_(msg)
  {}
  Init_Behaviour_child_ids tip_id(::py_trees_ros_interfaces::msg::Behaviour::_tip_id_type arg)
  {
    msg_.tip_id = std::move(arg);
    return Init_Behaviour_child_ids(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Behaviour msg_;
};

class Init_Behaviour_parent_id
{
public:
  explicit Init_Behaviour_parent_id(::py_trees_ros_interfaces::msg::Behaviour & msg)
  : msg_(msg)
  {}
  Init_Behaviour_tip_id parent_id(::py_trees_ros_interfaces::msg::Behaviour::_parent_id_type arg)
  {
    msg_.parent_id = std::move(arg);
    return Init_Behaviour_tip_id(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Behaviour msg_;
};

class Init_Behaviour_own_id
{
public:
  explicit Init_Behaviour_own_id(::py_trees_ros_interfaces::msg::Behaviour & msg)
  : msg_(msg)
  {}
  Init_Behaviour_parent_id own_id(::py_trees_ros_interfaces::msg::Behaviour::_own_id_type arg)
  {
    msg_.own_id = std::move(arg);
    return Init_Behaviour_parent_id(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Behaviour msg_;
};

class Init_Behaviour_class_name
{
public:
  explicit Init_Behaviour_class_name(::py_trees_ros_interfaces::msg::Behaviour & msg)
  : msg_(msg)
  {}
  Init_Behaviour_own_id class_name(::py_trees_ros_interfaces::msg::Behaviour::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_Behaviour_own_id(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Behaviour msg_;
};

class Init_Behaviour_name
{
public:
  Init_Behaviour_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Behaviour_class_name name(::py_trees_ros_interfaces::msg::Behaviour::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Behaviour_class_name(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Behaviour msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::msg::Behaviour>()
{
  return py_trees_ros_interfaces::msg::builder::Init_Behaviour_name();
}

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR__BUILDER_HPP_
