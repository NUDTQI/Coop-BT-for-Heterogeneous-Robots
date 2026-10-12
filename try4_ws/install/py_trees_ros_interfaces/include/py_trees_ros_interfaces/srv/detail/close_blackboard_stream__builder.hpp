// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from py_trees_ros_interfaces:srv/CloseBlackboardStream.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__SRV__DETAIL__CLOSE_BLACKBOARD_STREAM__BUILDER_HPP_
#define PY_TREES_ROS_INTERFACES__SRV__DETAIL__CLOSE_BLACKBOARD_STREAM__BUILDER_HPP_

#include "py_trees_ros_interfaces/srv/detail/close_blackboard_stream__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace py_trees_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_CloseBlackboardStream_Request_topic_name
{
public:
  Init_CloseBlackboardStream_Request_topic_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::py_trees_ros_interfaces::srv::CloseBlackboardStream_Request topic_name(::py_trees_ros_interfaces::srv::CloseBlackboardStream_Request::_topic_name_type arg)
  {
    msg_.topic_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::srv::CloseBlackboardStream_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::srv::CloseBlackboardStream_Request>()
{
  return py_trees_ros_interfaces::srv::builder::Init_CloseBlackboardStream_Request_topic_name();
}

}  // namespace py_trees_ros_interfaces


namespace py_trees_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_CloseBlackboardStream_Response_result
{
public:
  Init_CloseBlackboardStream_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::py_trees_ros_interfaces::srv::CloseBlackboardStream_Response result(::py_trees_ros_interfaces::srv::CloseBlackboardStream_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::srv::CloseBlackboardStream_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::srv::CloseBlackboardStream_Response>()
{
  return py_trees_ros_interfaces::srv::builder::Init_CloseBlackboardStream_Response_result();
}

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__SRV__DETAIL__CLOSE_BLACKBOARD_STREAM__BUILDER_HPP_
