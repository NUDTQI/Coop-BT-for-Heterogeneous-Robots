// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from py_trees_ros_interfaces:srv/GetBlackboardVariables.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__SRV__DETAIL__GET_BLACKBOARD_VARIABLES__BUILDER_HPP_
#define PY_TREES_ROS_INTERFACES__SRV__DETAIL__GET_BLACKBOARD_VARIABLES__BUILDER_HPP_

#include "py_trees_ros_interfaces/srv/detail/get_blackboard_variables__struct.hpp"
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
auto build<::py_trees_ros_interfaces::srv::GetBlackboardVariables_Request>()
{
  return ::py_trees_ros_interfaces::srv::GetBlackboardVariables_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace py_trees_ros_interfaces


namespace py_trees_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetBlackboardVariables_Response_variables
{
public:
  Init_GetBlackboardVariables_Response_variables()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::py_trees_ros_interfaces::srv::GetBlackboardVariables_Response variables(::py_trees_ros_interfaces::srv::GetBlackboardVariables_Response::_variables_type arg)
  {
    msg_.variables = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::srv::GetBlackboardVariables_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::srv::GetBlackboardVariables_Response>()
{
  return py_trees_ros_interfaces::srv::builder::Init_GetBlackboardVariables_Response_variables();
}

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__SRV__DETAIL__GET_BLACKBOARD_VARIABLES__BUILDER_HPP_
