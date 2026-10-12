// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from py_trees_ros_interfaces:msg/ServiceDetails.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__SERVICE_DETAILS__BUILDER_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__SERVICE_DETAILS__BUILDER_HPP_

#include "py_trees_ros_interfaces/msg/detail/service_details__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace py_trees_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_ServiceDetails_service_type
{
public:
  explicit Init_ServiceDetails_service_type(::py_trees_ros_interfaces::msg::ServiceDetails & msg)
  : msg_(msg)
  {}
  ::py_trees_ros_interfaces::msg::ServiceDetails service_type(::py_trees_ros_interfaces::msg::ServiceDetails::_service_type_type arg)
  {
    msg_.service_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::ServiceDetails msg_;
};

class Init_ServiceDetails_service_name
{
public:
  Init_ServiceDetails_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServiceDetails_service_type service_name(::py_trees_ros_interfaces::msg::ServiceDetails::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_ServiceDetails_service_type(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::ServiceDetails msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::msg::ServiceDetails>()
{
  return py_trees_ros_interfaces::msg::builder::Init_ServiceDetails_service_name();
}

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__SERVICE_DETAILS__BUILDER_HPP_
