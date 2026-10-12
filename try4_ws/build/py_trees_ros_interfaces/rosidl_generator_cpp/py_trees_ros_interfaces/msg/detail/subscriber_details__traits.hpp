// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from py_trees_ros_interfaces:msg/SubscriberDetails.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__SUBSCRIBER_DETAILS__TRAITS_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__SUBSCRIBER_DETAILS__TRAITS_HPP_

#include "py_trees_ros_interfaces/msg/detail/subscriber_details__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const py_trees_ros_interfaces::msg::SubscriberDetails & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: topic_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_name: ";
    value_to_yaml(msg.topic_name, out);
    out << "\n";
  }

  // member: message_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_type: ";
    value_to_yaml(msg.message_type, out);
    out << "\n";
  }

  // member: latched
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latched: ";
    value_to_yaml(msg.latched, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const py_trees_ros_interfaces::msg::SubscriberDetails & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<py_trees_ros_interfaces::msg::SubscriberDetails>()
{
  return "py_trees_ros_interfaces::msg::SubscriberDetails";
}

template<>
inline const char * name<py_trees_ros_interfaces::msg::SubscriberDetails>()
{
  return "py_trees_ros_interfaces/msg/SubscriberDetails";
}

template<>
struct has_fixed_size<py_trees_ros_interfaces::msg::SubscriberDetails>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<py_trees_ros_interfaces::msg::SubscriberDetails>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<py_trees_ros_interfaces::msg::SubscriberDetails>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__SUBSCRIBER_DETAILS__TRAITS_HPP_
