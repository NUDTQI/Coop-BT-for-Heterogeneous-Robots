// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from py_trees_ros_interfaces:msg/SnapshotStreamParameters.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__SNAPSHOT_STREAM_PARAMETERS__TRAITS_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__SNAPSHOT_STREAM_PARAMETERS__TRAITS_HPP_

#include "py_trees_ros_interfaces/msg/detail/snapshot_stream_parameters__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const py_trees_ros_interfaces::msg::SnapshotStreamParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: snapshot_period
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "snapshot_period: ";
    value_to_yaml(msg.snapshot_period, out);
    out << "\n";
  }

  // member: blackboard_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blackboard_data: ";
    value_to_yaml(msg.blackboard_data, out);
    out << "\n";
  }

  // member: blackboard_activity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blackboard_activity: ";
    value_to_yaml(msg.blackboard_activity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const py_trees_ros_interfaces::msg::SnapshotStreamParameters & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<py_trees_ros_interfaces::msg::SnapshotStreamParameters>()
{
  return "py_trees_ros_interfaces::msg::SnapshotStreamParameters";
}

template<>
inline const char * name<py_trees_ros_interfaces::msg::SnapshotStreamParameters>()
{
  return "py_trees_ros_interfaces/msg/SnapshotStreamParameters";
}

template<>
struct has_fixed_size<py_trees_ros_interfaces::msg::SnapshotStreamParameters>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<py_trees_ros_interfaces::msg::SnapshotStreamParameters>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<py_trees_ros_interfaces::msg::SnapshotStreamParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__SNAPSHOT_STREAM_PARAMETERS__TRAITS_HPP_
