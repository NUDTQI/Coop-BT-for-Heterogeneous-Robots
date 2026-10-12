// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from py_trees_ros_interfaces:msg/ActivityItem.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__ACTIVITY_ITEM__TRAITS_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__ACTIVITY_ITEM__TRAITS_HPP_

#include "py_trees_ros_interfaces/msg/detail/activity_item__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const py_trees_ros_interfaces::msg::ActivityItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    value_to_yaml(msg.key, out);
    out << "\n";
  }

  // member: client_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "client_name: ";
    value_to_yaml(msg.client_name, out);
    out << "\n";
  }

  // member: activity_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activity_type: ";
    value_to_yaml(msg.activity_type, out);
    out << "\n";
  }

  // member: previous_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "previous_value: ";
    value_to_yaml(msg.previous_value, out);
    out << "\n";
  }

  // member: current_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_value: ";
    value_to_yaml(msg.current_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const py_trees_ros_interfaces::msg::ActivityItem & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<py_trees_ros_interfaces::msg::ActivityItem>()
{
  return "py_trees_ros_interfaces::msg::ActivityItem";
}

template<>
inline const char * name<py_trees_ros_interfaces::msg::ActivityItem>()
{
  return "py_trees_ros_interfaces/msg/ActivityItem";
}

template<>
struct has_fixed_size<py_trees_ros_interfaces::msg::ActivityItem>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<py_trees_ros_interfaces::msg::ActivityItem>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<py_trees_ros_interfaces::msg::ActivityItem>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__ACTIVITY_ITEM__TRAITS_HPP_
