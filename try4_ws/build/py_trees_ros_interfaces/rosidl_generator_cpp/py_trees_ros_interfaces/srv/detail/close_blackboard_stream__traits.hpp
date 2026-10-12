// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from py_trees_ros_interfaces:srv/CloseBlackboardStream.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__SRV__DETAIL__CLOSE_BLACKBOARD_STREAM__TRAITS_HPP_
#define PY_TREES_ROS_INTERFACES__SRV__DETAIL__CLOSE_BLACKBOARD_STREAM__TRAITS_HPP_

#include "py_trees_ros_interfaces/srv/detail/close_blackboard_stream__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const py_trees_ros_interfaces::srv::CloseBlackboardStream_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const py_trees_ros_interfaces::srv::CloseBlackboardStream_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<py_trees_ros_interfaces::srv::CloseBlackboardStream_Request>()
{
  return "py_trees_ros_interfaces::srv::CloseBlackboardStream_Request";
}

template<>
inline const char * name<py_trees_ros_interfaces::srv::CloseBlackboardStream_Request>()
{
  return "py_trees_ros_interfaces/srv/CloseBlackboardStream_Request";
}

template<>
struct has_fixed_size<py_trees_ros_interfaces::srv::CloseBlackboardStream_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<py_trees_ros_interfaces::srv::CloseBlackboardStream_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<py_trees_ros_interfaces::srv::CloseBlackboardStream_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const py_trees_ros_interfaces::srv::CloseBlackboardStream_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const py_trees_ros_interfaces::srv::CloseBlackboardStream_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<py_trees_ros_interfaces::srv::CloseBlackboardStream_Response>()
{
  return "py_trees_ros_interfaces::srv::CloseBlackboardStream_Response";
}

template<>
inline const char * name<py_trees_ros_interfaces::srv::CloseBlackboardStream_Response>()
{
  return "py_trees_ros_interfaces/srv/CloseBlackboardStream_Response";
}

template<>
struct has_fixed_size<py_trees_ros_interfaces::srv::CloseBlackboardStream_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<py_trees_ros_interfaces::srv::CloseBlackboardStream_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<py_trees_ros_interfaces::srv::CloseBlackboardStream_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<py_trees_ros_interfaces::srv::CloseBlackboardStream>()
{
  return "py_trees_ros_interfaces::srv::CloseBlackboardStream";
}

template<>
inline const char * name<py_trees_ros_interfaces::srv::CloseBlackboardStream>()
{
  return "py_trees_ros_interfaces/srv/CloseBlackboardStream";
}

template<>
struct has_fixed_size<py_trees_ros_interfaces::srv::CloseBlackboardStream>
  : std::integral_constant<
    bool,
    has_fixed_size<py_trees_ros_interfaces::srv::CloseBlackboardStream_Request>::value &&
    has_fixed_size<py_trees_ros_interfaces::srv::CloseBlackboardStream_Response>::value
  >
{
};

template<>
struct has_bounded_size<py_trees_ros_interfaces::srv::CloseBlackboardStream>
  : std::integral_constant<
    bool,
    has_bounded_size<py_trees_ros_interfaces::srv::CloseBlackboardStream_Request>::value &&
    has_bounded_size<py_trees_ros_interfaces::srv::CloseBlackboardStream_Response>::value
  >
{
};

template<>
struct is_service<py_trees_ros_interfaces::srv::CloseBlackboardStream>
  : std::true_type
{
};

template<>
struct is_service_request<py_trees_ros_interfaces::srv::CloseBlackboardStream_Request>
  : std::true_type
{
};

template<>
struct is_service_response<py_trees_ros_interfaces::srv::CloseBlackboardStream_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PY_TREES_ROS_INTERFACES__SRV__DETAIL__CLOSE_BLACKBOARD_STREAM__TRAITS_HPP_
