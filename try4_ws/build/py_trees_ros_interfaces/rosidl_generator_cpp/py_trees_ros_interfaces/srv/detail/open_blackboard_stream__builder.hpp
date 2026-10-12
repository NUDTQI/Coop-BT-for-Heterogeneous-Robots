// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from py_trees_ros_interfaces:srv/OpenBlackboardStream.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__SRV__DETAIL__OPEN_BLACKBOARD_STREAM__BUILDER_HPP_
#define PY_TREES_ROS_INTERFACES__SRV__DETAIL__OPEN_BLACKBOARD_STREAM__BUILDER_HPP_

#include "py_trees_ros_interfaces/srv/detail/open_blackboard_stream__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace py_trees_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_OpenBlackboardStream_Request_with_activity_stream
{
public:
  explicit Init_OpenBlackboardStream_Request_with_activity_stream(::py_trees_ros_interfaces::srv::OpenBlackboardStream_Request & msg)
  : msg_(msg)
  {}
  ::py_trees_ros_interfaces::srv::OpenBlackboardStream_Request with_activity_stream(::py_trees_ros_interfaces::srv::OpenBlackboardStream_Request::_with_activity_stream_type arg)
  {
    msg_.with_activity_stream = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::srv::OpenBlackboardStream_Request msg_;
};

class Init_OpenBlackboardStream_Request_filter_on_visited_path
{
public:
  explicit Init_OpenBlackboardStream_Request_filter_on_visited_path(::py_trees_ros_interfaces::srv::OpenBlackboardStream_Request & msg)
  : msg_(msg)
  {}
  Init_OpenBlackboardStream_Request_with_activity_stream filter_on_visited_path(::py_trees_ros_interfaces::srv::OpenBlackboardStream_Request::_filter_on_visited_path_type arg)
  {
    msg_.filter_on_visited_path = std::move(arg);
    return Init_OpenBlackboardStream_Request_with_activity_stream(msg_);
  }

private:
  ::py_trees_ros_interfaces::srv::OpenBlackboardStream_Request msg_;
};

class Init_OpenBlackboardStream_Request_variables
{
public:
  Init_OpenBlackboardStream_Request_variables()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpenBlackboardStream_Request_filter_on_visited_path variables(::py_trees_ros_interfaces::srv::OpenBlackboardStream_Request::_variables_type arg)
  {
    msg_.variables = std::move(arg);
    return Init_OpenBlackboardStream_Request_filter_on_visited_path(msg_);
  }

private:
  ::py_trees_ros_interfaces::srv::OpenBlackboardStream_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::srv::OpenBlackboardStream_Request>()
{
  return py_trees_ros_interfaces::srv::builder::Init_OpenBlackboardStream_Request_variables();
}

}  // namespace py_trees_ros_interfaces


namespace py_trees_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_OpenBlackboardStream_Response_topic
{
public:
  Init_OpenBlackboardStream_Response_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::py_trees_ros_interfaces::srv::OpenBlackboardStream_Response topic(::py_trees_ros_interfaces::srv::OpenBlackboardStream_Response::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::srv::OpenBlackboardStream_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::srv::OpenBlackboardStream_Response>()
{
  return py_trees_ros_interfaces::srv::builder::Init_OpenBlackboardStream_Response_topic();
}

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__SRV__DETAIL__OPEN_BLACKBOARD_STREAM__BUILDER_HPP_
