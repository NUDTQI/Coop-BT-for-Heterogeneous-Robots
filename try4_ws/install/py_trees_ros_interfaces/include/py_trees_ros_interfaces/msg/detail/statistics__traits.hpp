// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from py_trees_ros_interfaces:msg/Statistics.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__STATISTICS__TRAITS_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__STATISTICS__TRAITS_HPP_

#include "py_trees_ros_interfaces/msg/detail/statistics__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const py_trees_ros_interfaces::msg::Statistics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    value_to_yaml(msg.count, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }

  // member: tick_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick_duration: ";
    value_to_yaml(msg.tick_duration, out);
    out << "\n";
  }

  // member: tick_duration_average
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick_duration_average: ";
    value_to_yaml(msg.tick_duration_average, out);
    out << "\n";
  }

  // member: tick_duration_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick_duration_variance: ";
    value_to_yaml(msg.tick_duration_variance, out);
    out << "\n";
  }

  // member: tick_interval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick_interval: ";
    value_to_yaml(msg.tick_interval, out);
    out << "\n";
  }

  // member: tick_interval_average
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick_interval_average: ";
    value_to_yaml(msg.tick_interval_average, out);
    out << "\n";
  }

  // member: tick_interval_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick_interval_variance: ";
    value_to_yaml(msg.tick_interval_variance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const py_trees_ros_interfaces::msg::Statistics & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<py_trees_ros_interfaces::msg::Statistics>()
{
  return "py_trees_ros_interfaces::msg::Statistics";
}

template<>
inline const char * name<py_trees_ros_interfaces::msg::Statistics>()
{
  return "py_trees_ros_interfaces/msg/Statistics";
}

template<>
struct has_fixed_size<py_trees_ros_interfaces::msg::Statistics>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<py_trees_ros_interfaces::msg::Statistics>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<py_trees_ros_interfaces::msg::Statistics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__STATISTICS__TRAITS_HPP_
