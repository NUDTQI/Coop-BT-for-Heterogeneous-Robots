// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from py_trees_ros_interfaces:srv/StatusReport.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__SRV__DETAIL__STATUS_REPORT__BUILDER_HPP_
#define PY_TREES_ROS_INTERFACES__SRV__DETAIL__STATUS_REPORT__BUILDER_HPP_

#include "py_trees_ros_interfaces/srv/detail/status_report__struct.hpp"
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
auto build<::py_trees_ros_interfaces::srv::StatusReport_Request>()
{
  return ::py_trees_ros_interfaces::srv::StatusReport_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace py_trees_ros_interfaces


namespace py_trees_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_StatusReport_Response_report
{
public:
  Init_StatusReport_Response_report()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::py_trees_ros_interfaces::srv::StatusReport_Response report(::py_trees_ros_interfaces::srv::StatusReport_Response::_report_type arg)
  {
    msg_.report = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::srv::StatusReport_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::srv::StatusReport_Response>()
{
  return py_trees_ros_interfaces::srv::builder::Init_StatusReport_Response_report();
}

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__SRV__DETAIL__STATUS_REPORT__BUILDER_HPP_
