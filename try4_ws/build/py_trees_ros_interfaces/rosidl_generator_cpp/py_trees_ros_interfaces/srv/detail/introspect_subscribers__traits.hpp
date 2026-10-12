// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from py_trees_ros_interfaces:srv/IntrospectSubscribers.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__SRV__DETAIL__INTROSPECT_SUBSCRIBERS__TRAITS_HPP_
#define PY_TREES_ROS_INTERFACES__SRV__DETAIL__INTROSPECT_SUBSCRIBERS__TRAITS_HPP_

#include "py_trees_ros_interfaces/srv/detail/introspect_subscribers__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const py_trees_ros_interfaces::srv::IntrospectSubscribers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const py_trees_ros_interfaces::srv::IntrospectSubscribers_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<py_trees_ros_interfaces::srv::IntrospectSubscribers_Request>()
{
  return "py_trees_ros_interfaces::srv::IntrospectSubscribers_Request";
}

template<>
inline const char * name<py_trees_ros_interfaces::srv::IntrospectSubscribers_Request>()
{
  return "py_trees_ros_interfaces/srv/IntrospectSubscribers_Request";
}

template<>
struct has_fixed_size<py_trees_ros_interfaces::srv::IntrospectSubscribers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<py_trees_ros_interfaces::srv::IntrospectSubscribers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<py_trees_ros_interfaces::srv::IntrospectSubscribers_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'subscriber_details'
#include "py_trees_ros_interfaces/msg/detail/subscriber_details__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const py_trees_ros_interfaces::srv::IntrospectSubscribers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: subscriber_details
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.subscriber_details.size() == 0) {
      out << "subscriber_details: []\n";
    } else {
      out << "subscriber_details:\n";
      for (auto item : msg.subscriber_details) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const py_trees_ros_interfaces::srv::IntrospectSubscribers_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<py_trees_ros_interfaces::srv::IntrospectSubscribers_Response>()
{
  return "py_trees_ros_interfaces::srv::IntrospectSubscribers_Response";
}

template<>
inline const char * name<py_trees_ros_interfaces::srv::IntrospectSubscribers_Response>()
{
  return "py_trees_ros_interfaces/srv/IntrospectSubscribers_Response";
}

template<>
struct has_fixed_size<py_trees_ros_interfaces::srv::IntrospectSubscribers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<py_trees_ros_interfaces::srv::IntrospectSubscribers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<py_trees_ros_interfaces::srv::IntrospectSubscribers_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<py_trees_ros_interfaces::srv::IntrospectSubscribers>()
{
  return "py_trees_ros_interfaces::srv::IntrospectSubscribers";
}

template<>
inline const char * name<py_trees_ros_interfaces::srv::IntrospectSubscribers>()
{
  return "py_trees_ros_interfaces/srv/IntrospectSubscribers";
}

template<>
struct has_fixed_size<py_trees_ros_interfaces::srv::IntrospectSubscribers>
  : std::integral_constant<
    bool,
    has_fixed_size<py_trees_ros_interfaces::srv::IntrospectSubscribers_Request>::value &&
    has_fixed_size<py_trees_ros_interfaces::srv::IntrospectSubscribers_Response>::value
  >
{
};

template<>
struct has_bounded_size<py_trees_ros_interfaces::srv::IntrospectSubscribers>
  : std::integral_constant<
    bool,
    has_bounded_size<py_trees_ros_interfaces::srv::IntrospectSubscribers_Request>::value &&
    has_bounded_size<py_trees_ros_interfaces::srv::IntrospectSubscribers_Response>::value
  >
{
};

template<>
struct is_service<py_trees_ros_interfaces::srv::IntrospectSubscribers>
  : std::true_type
{
};

template<>
struct is_service_request<py_trees_ros_interfaces::srv::IntrospectSubscribers_Request>
  : std::true_type
{
};

template<>
struct is_service_response<py_trees_ros_interfaces::srv::IntrospectSubscribers_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PY_TREES_ROS_INTERFACES__SRV__DETAIL__INTROSPECT_SUBSCRIBERS__TRAITS_HPP_
