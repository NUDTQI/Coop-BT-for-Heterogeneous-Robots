// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from py_trees_ros_interfaces:msg/Statistics.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__STATISTICS__BUILDER_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__STATISTICS__BUILDER_HPP_

#include "py_trees_ros_interfaces/msg/detail/statistics__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace py_trees_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_Statistics_tick_interval_variance
{
public:
  explicit Init_Statistics_tick_interval_variance(::py_trees_ros_interfaces::msg::Statistics & msg)
  : msg_(msg)
  {}
  ::py_trees_ros_interfaces::msg::Statistics tick_interval_variance(::py_trees_ros_interfaces::msg::Statistics::_tick_interval_variance_type arg)
  {
    msg_.tick_interval_variance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Statistics msg_;
};

class Init_Statistics_tick_interval_average
{
public:
  explicit Init_Statistics_tick_interval_average(::py_trees_ros_interfaces::msg::Statistics & msg)
  : msg_(msg)
  {}
  Init_Statistics_tick_interval_variance tick_interval_average(::py_trees_ros_interfaces::msg::Statistics::_tick_interval_average_type arg)
  {
    msg_.tick_interval_average = std::move(arg);
    return Init_Statistics_tick_interval_variance(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Statistics msg_;
};

class Init_Statistics_tick_interval
{
public:
  explicit Init_Statistics_tick_interval(::py_trees_ros_interfaces::msg::Statistics & msg)
  : msg_(msg)
  {}
  Init_Statistics_tick_interval_average tick_interval(::py_trees_ros_interfaces::msg::Statistics::_tick_interval_type arg)
  {
    msg_.tick_interval = std::move(arg);
    return Init_Statistics_tick_interval_average(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Statistics msg_;
};

class Init_Statistics_tick_duration_variance
{
public:
  explicit Init_Statistics_tick_duration_variance(::py_trees_ros_interfaces::msg::Statistics & msg)
  : msg_(msg)
  {}
  Init_Statistics_tick_interval tick_duration_variance(::py_trees_ros_interfaces::msg::Statistics::_tick_duration_variance_type arg)
  {
    msg_.tick_duration_variance = std::move(arg);
    return Init_Statistics_tick_interval(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Statistics msg_;
};

class Init_Statistics_tick_duration_average
{
public:
  explicit Init_Statistics_tick_duration_average(::py_trees_ros_interfaces::msg::Statistics & msg)
  : msg_(msg)
  {}
  Init_Statistics_tick_duration_variance tick_duration_average(::py_trees_ros_interfaces::msg::Statistics::_tick_duration_average_type arg)
  {
    msg_.tick_duration_average = std::move(arg);
    return Init_Statistics_tick_duration_variance(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Statistics msg_;
};

class Init_Statistics_tick_duration
{
public:
  explicit Init_Statistics_tick_duration(::py_trees_ros_interfaces::msg::Statistics & msg)
  : msg_(msg)
  {}
  Init_Statistics_tick_duration_average tick_duration(::py_trees_ros_interfaces::msg::Statistics::_tick_duration_type arg)
  {
    msg_.tick_duration = std::move(arg);
    return Init_Statistics_tick_duration_average(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Statistics msg_;
};

class Init_Statistics_stamp
{
public:
  explicit Init_Statistics_stamp(::py_trees_ros_interfaces::msg::Statistics & msg)
  : msg_(msg)
  {}
  Init_Statistics_tick_duration stamp(::py_trees_ros_interfaces::msg::Statistics::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Statistics_tick_duration(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Statistics msg_;
};

class Init_Statistics_count
{
public:
  Init_Statistics_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Statistics_stamp count(::py_trees_ros_interfaces::msg::Statistics::_count_type arg)
  {
    msg_.count = std::move(arg);
    return Init_Statistics_stamp(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::Statistics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::msg::Statistics>()
{
  return py_trees_ros_interfaces::msg::builder::Init_Statistics_count();
}

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__STATISTICS__BUILDER_HPP_
