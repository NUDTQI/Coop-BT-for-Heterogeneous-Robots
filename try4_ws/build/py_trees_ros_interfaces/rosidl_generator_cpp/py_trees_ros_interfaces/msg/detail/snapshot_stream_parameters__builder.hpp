// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from py_trees_ros_interfaces:msg/SnapshotStreamParameters.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__SNAPSHOT_STREAM_PARAMETERS__BUILDER_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__SNAPSHOT_STREAM_PARAMETERS__BUILDER_HPP_

#include "py_trees_ros_interfaces/msg/detail/snapshot_stream_parameters__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace py_trees_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_SnapshotStreamParameters_blackboard_activity
{
public:
  explicit Init_SnapshotStreamParameters_blackboard_activity(::py_trees_ros_interfaces::msg::SnapshotStreamParameters & msg)
  : msg_(msg)
  {}
  ::py_trees_ros_interfaces::msg::SnapshotStreamParameters blackboard_activity(::py_trees_ros_interfaces::msg::SnapshotStreamParameters::_blackboard_activity_type arg)
  {
    msg_.blackboard_activity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::SnapshotStreamParameters msg_;
};

class Init_SnapshotStreamParameters_blackboard_data
{
public:
  explicit Init_SnapshotStreamParameters_blackboard_data(::py_trees_ros_interfaces::msg::SnapshotStreamParameters & msg)
  : msg_(msg)
  {}
  Init_SnapshotStreamParameters_blackboard_activity blackboard_data(::py_trees_ros_interfaces::msg::SnapshotStreamParameters::_blackboard_data_type arg)
  {
    msg_.blackboard_data = std::move(arg);
    return Init_SnapshotStreamParameters_blackboard_activity(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::SnapshotStreamParameters msg_;
};

class Init_SnapshotStreamParameters_snapshot_period
{
public:
  Init_SnapshotStreamParameters_snapshot_period()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SnapshotStreamParameters_blackboard_data snapshot_period(::py_trees_ros_interfaces::msg::SnapshotStreamParameters::_snapshot_period_type arg)
  {
    msg_.snapshot_period = std::move(arg);
    return Init_SnapshotStreamParameters_blackboard_data(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::SnapshotStreamParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::msg::SnapshotStreamParameters>()
{
  return py_trees_ros_interfaces::msg::builder::Init_SnapshotStreamParameters_snapshot_period();
}

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__SNAPSHOT_STREAM_PARAMETERS__BUILDER_HPP_
