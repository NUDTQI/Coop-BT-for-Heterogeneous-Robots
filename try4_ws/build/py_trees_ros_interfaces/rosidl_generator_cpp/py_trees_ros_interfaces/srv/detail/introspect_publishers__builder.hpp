// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from py_trees_ros_interfaces:srv/IntrospectPublishers.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__SRV__DETAIL__INTROSPECT_PUBLISHERS__BUILDER_HPP_
#define PY_TREES_ROS_INTERFACES__SRV__DETAIL__INTROSPECT_PUBLISHERS__BUILDER_HPP_

#include "py_trees_ros_interfaces/srv/detail/introspect_publishers__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace py_trees_ros_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::srv::IntrospectPublishers_Request>()
{
  return ::py_trees_ros_interfaces::srv::IntrospectPublishers_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace py_trees_ros_interfaces


namespace py_trees_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_IntrospectPublishers_Response_publisher_details
{
public:
  Init_IntrospectPublishers_Response_publisher_details()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::py_trees_ros_interfaces::srv::IntrospectPublishers_Response publisher_details(::py_trees_ros_interfaces::srv::IntrospectPublishers_Response::_publisher_details_type arg)
  {
    msg_.publisher_details = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::srv::IntrospectPublishers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::srv::IntrospectPublishers_Response>()
{
  return py_trees_ros_interfaces::srv::builder::Init_IntrospectPublishers_Response_publisher_details();
}

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__SRV__DETAIL__INTROSPECT_PUBLISHERS__BUILDER_HPP_
