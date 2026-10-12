// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from py_trees_ros_interfaces:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__KEY_VALUE__BUILDER_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__KEY_VALUE__BUILDER_HPP_

#include "py_trees_ros_interfaces/msg/detail/key_value__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace py_trees_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_KeyValue_value
{
public:
  explicit Init_KeyValue_value(::py_trees_ros_interfaces::msg::KeyValue & msg)
  : msg_(msg)
  {}
  ::py_trees_ros_interfaces::msg::KeyValue value(::py_trees_ros_interfaces::msg::KeyValue::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::KeyValue msg_;
};

class Init_KeyValue_key
{
public:
  Init_KeyValue_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyValue_value key(::py_trees_ros_interfaces::msg::KeyValue::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_KeyValue_value(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::KeyValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::msg::KeyValue>()
{
  return py_trees_ros_interfaces::msg::builder::Init_KeyValue_key();
}

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__KEY_VALUE__BUILDER_HPP_
