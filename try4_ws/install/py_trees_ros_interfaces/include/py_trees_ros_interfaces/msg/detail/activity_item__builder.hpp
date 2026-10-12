// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from py_trees_ros_interfaces:msg/ActivityItem.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__ACTIVITY_ITEM__BUILDER_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__ACTIVITY_ITEM__BUILDER_HPP_

#include "py_trees_ros_interfaces/msg/detail/activity_item__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace py_trees_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_ActivityItem_current_value
{
public:
  explicit Init_ActivityItem_current_value(::py_trees_ros_interfaces::msg::ActivityItem & msg)
  : msg_(msg)
  {}
  ::py_trees_ros_interfaces::msg::ActivityItem current_value(::py_trees_ros_interfaces::msg::ActivityItem::_current_value_type arg)
  {
    msg_.current_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::ActivityItem msg_;
};

class Init_ActivityItem_previous_value
{
public:
  explicit Init_ActivityItem_previous_value(::py_trees_ros_interfaces::msg::ActivityItem & msg)
  : msg_(msg)
  {}
  Init_ActivityItem_current_value previous_value(::py_trees_ros_interfaces::msg::ActivityItem::_previous_value_type arg)
  {
    msg_.previous_value = std::move(arg);
    return Init_ActivityItem_current_value(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::ActivityItem msg_;
};

class Init_ActivityItem_activity_type
{
public:
  explicit Init_ActivityItem_activity_type(::py_trees_ros_interfaces::msg::ActivityItem & msg)
  : msg_(msg)
  {}
  Init_ActivityItem_previous_value activity_type(::py_trees_ros_interfaces::msg::ActivityItem::_activity_type_type arg)
  {
    msg_.activity_type = std::move(arg);
    return Init_ActivityItem_previous_value(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::ActivityItem msg_;
};

class Init_ActivityItem_client_name
{
public:
  explicit Init_ActivityItem_client_name(::py_trees_ros_interfaces::msg::ActivityItem & msg)
  : msg_(msg)
  {}
  Init_ActivityItem_activity_type client_name(::py_trees_ros_interfaces::msg::ActivityItem::_client_name_type arg)
  {
    msg_.client_name = std::move(arg);
    return Init_ActivityItem_activity_type(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::ActivityItem msg_;
};

class Init_ActivityItem_key
{
public:
  Init_ActivityItem_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActivityItem_client_name key(::py_trees_ros_interfaces::msg::ActivityItem::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_ActivityItem_client_name(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::ActivityItem msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::msg::ActivityItem>()
{
  return py_trees_ros_interfaces::msg::builder::Init_ActivityItem_key();
}

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__ACTIVITY_ITEM__BUILDER_HPP_
