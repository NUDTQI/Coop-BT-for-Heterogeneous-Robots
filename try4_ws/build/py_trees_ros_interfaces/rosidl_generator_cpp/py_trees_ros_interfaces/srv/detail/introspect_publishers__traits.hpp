// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from py_trees_ros_interfaces:srv/IntrospectPublishers.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__SRV__DETAIL__INTROSPECT_PUBLISHERS__TRAITS_HPP_
#define PY_TREES_ROS_INTERFACES__SRV__DETAIL__INTROSPECT_PUBLISHERS__TRAITS_HPP_

#include "py_trees_ros_interfaces/srv/detail/introspect_publishers__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const py_trees_ros_interfaces::srv::IntrospectPublishers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const py_trees_ros_interfaces::srv::IntrospectPublishers_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<py_trees_ros_interfaces::srv::IntrospectPublishers_Request>()
{
  return "py_trees_ros_interfaces::srv::IntrospectPublishers_Request";
}

template<>
inline const char * name<py_trees_ros_interfaces::srv::IntrospectPublishers_Request>()
{
  return "py_trees_ros_interfaces/srv/IntrospectPublishers_Request";
}

template<>
struct has_fixed_size<py_trees_ros_interfaces::srv::IntrospectPublishers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<py_trees_ros_interfaces::srv::IntrospectPublishers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<py_trees_ros_interfaces::srv::IntrospectPublishers_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'publisher_details'
#include "py_trees_ros_interfaces/msg/detail/publisher_details__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const py_trees_ros_interfaces::srv::IntrospectPublishers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: publisher_details
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.publisher_details.size() == 0) {
      out << "publisher_details: []\n";
    } else {
      out << "publisher_details:\n";
      for (auto item : msg.publisher_details) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const py_trees_ros_interfaces::srv::IntrospectPublishers_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<py_trees_ros_interfaces::srv::IntrospectPublishers_Response>()
{
  return "py_trees_ros_interfaces::srv::IntrospectPublishers_Response";
}

template<>
inline const char * name<py_trees_ros_interfaces::srv::IntrospectPublishers_Response>()
{
  return "py_trees_ros_interfaces/srv/IntrospectPublishers_Response";
}

template<>
struct has_fixed_size<py_trees_ros_interfaces::srv::IntrospectPublishers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<py_trees_ros_interfaces::srv::IntrospectPublishers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<py_trees_ros_interfaces::srv::IntrospectPublishers_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<py_trees_ros_interfaces::srv::IntrospectPublishers>()
{
  return "py_trees_ros_interfaces::srv::IntrospectPublishers";
}

template<>
inline const char * name<py_trees_ros_interfaces::srv::IntrospectPublishers>()
{
  return "py_trees_ros_interfaces/srv/IntrospectPublishers";
}

template<>
struct has_fixed_size<py_trees_ros_interfaces::srv::IntrospectPublishers>
  : std::integral_constant<
    bool,
    has_fixed_size<py_trees_ros_interfaces::srv::IntrospectPublishers_Request>::value &&
    has_fixed_size<py_trees_ros_interfaces::srv::IntrospectPublishers_Response>::value
  >
{
};

template<>
struct has_bounded_size<py_trees_ros_interfaces::srv::IntrospectPublishers>
  : std::integral_constant<
    bool,
    has_bounded_size<py_trees_ros_interfaces::srv::IntrospectPublishers_Request>::value &&
    has_bounded_size<py_trees_ros_interfaces::srv::IntrospectPublishers_Response>::value
  >
{
};

template<>
struct is_service<py_trees_ros_interfaces::srv::IntrospectPublishers>
  : std::true_type
{
};

template<>
struct is_service_request<py_trees_ros_interfaces::srv::IntrospectPublishers_Request>
  : std::true_type
{
};

template<>
struct is_service_response<py_trees_ros_interfaces::srv::IntrospectPublishers_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PY_TREES_ROS_INTERFACES__SRV__DETAIL__INTROSPECT_PUBLISHERS__TRAITS_HPP_
