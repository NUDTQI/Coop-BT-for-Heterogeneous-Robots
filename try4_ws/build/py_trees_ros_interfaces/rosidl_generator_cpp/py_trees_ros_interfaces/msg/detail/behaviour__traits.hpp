// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from py_trees_ros_interfaces:msg/Behaviour.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR__TRAITS_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR__TRAITS_HPP_

#include "py_trees_ros_interfaces/msg/detail/behaviour__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'own_id'
// Member 'parent_id'
// Member 'tip_id'
// Member 'child_ids'
// Member 'current_child_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'blackboard_access'
#include "py_trees_ros_interfaces/msg/detail/key_value__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const py_trees_ros_interfaces::msg::Behaviour & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: class_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_name: ";
    value_to_yaml(msg.class_name, out);
    out << "\n";
  }

  // member: own_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "own_id:\n";
    to_yaml(msg.own_id, out, indentation + 2);
  }

  // member: parent_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent_id:\n";
    to_yaml(msg.parent_id, out, indentation + 2);
  }

  // member: tip_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tip_id:\n";
    to_yaml(msg.tip_id, out, indentation + 2);
  }

  // member: child_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.child_ids.size() == 0) {
      out << "child_ids: []\n";
    } else {
      out << "child_ids:\n";
      for (auto item : msg.child_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: current_child_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_child_id:\n";
    to_yaml(msg.current_child_id, out, indentation + 2);
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: additional_detail
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "additional_detail: ";
    value_to_yaml(msg.additional_detail, out);
    out << "\n";
  }

  // member: blackbox_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blackbox_level: ";
    value_to_yaml(msg.blackbox_level, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: is_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_active: ";
    value_to_yaml(msg.is_active, out);
    out << "\n";
  }

  // member: blackboard_access
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.blackboard_access.size() == 0) {
      out << "blackboard_access: []\n";
    } else {
      out << "blackboard_access:\n";
      for (auto item : msg.blackboard_access) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const py_trees_ros_interfaces::msg::Behaviour & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<py_trees_ros_interfaces::msg::Behaviour>()
{
  return "py_trees_ros_interfaces::msg::Behaviour";
}

template<>
inline const char * name<py_trees_ros_interfaces::msg::Behaviour>()
{
  return "py_trees_ros_interfaces/msg/Behaviour";
}

template<>
struct has_fixed_size<py_trees_ros_interfaces::msg::Behaviour>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<py_trees_ros_interfaces::msg::Behaviour>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<py_trees_ros_interfaces::msg::Behaviour>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR__TRAITS_HPP_
