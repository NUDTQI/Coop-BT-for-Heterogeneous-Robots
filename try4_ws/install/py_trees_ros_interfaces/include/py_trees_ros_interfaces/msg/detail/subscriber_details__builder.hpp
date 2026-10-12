// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from py_trees_ros_interfaces:msg/SubscriberDetails.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__SUBSCRIBER_DETAILS__BUILDER_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__SUBSCRIBER_DETAILS__BUILDER_HPP_

#include "py_trees_ros_interfaces/msg/detail/subscriber_details__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace py_trees_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_SubscriberDetails_latched
{
public:
  explicit Init_SubscriberDetails_latched(::py_trees_ros_interfaces::msg::SubscriberDetails & msg)
  : msg_(msg)
  {}
  ::py_trees_ros_interfaces::msg::SubscriberDetails latched(::py_trees_ros_interfaces::msg::SubscriberDetails::_latched_type arg)
  {
    msg_.latched = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::SubscriberDetails msg_;
};

class Init_SubscriberDetails_message_type
{
public:
  explicit Init_SubscriberDetails_message_type(::py_trees_ros_interfaces::msg::SubscriberDetails & msg)
  : msg_(msg)
  {}
  Init_SubscriberDetails_latched message_type(::py_trees_ros_interfaces::msg::SubscriberDetails::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_SubscriberDetails_latched(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::SubscriberDetails msg_;
};

class Init_SubscriberDetails_topic_name
{
public:
  Init_SubscriberDetails_topic_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SubscriberDetails_message_type topic_name(::py_trees_ros_interfaces::msg::SubscriberDetails::_topic_name_type arg)
  {
    msg_.topic_name = std::move(arg);
    return Init_SubscriberDetails_message_type(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::SubscriberDetails msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::msg::SubscriberDetails>()
{
  return py_trees_ros_interfaces::msg::builder::Init_SubscriberDetails_topic_name();
}

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__SUBSCRIBER_DETAILS__BUILDER_HPP_
