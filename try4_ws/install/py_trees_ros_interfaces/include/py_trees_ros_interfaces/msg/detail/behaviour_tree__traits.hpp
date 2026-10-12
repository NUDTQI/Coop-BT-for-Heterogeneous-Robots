// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from py_trees_ros_interfaces:msg/BehaviourTree.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR_TREE__TRAITS_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR_TREE__TRAITS_HPP_

#include "py_trees_ros_interfaces/msg/detail/behaviour_tree__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'behaviours'
#include "py_trees_ros_interfaces/msg/detail/behaviour__traits.hpp"
// Member 'blackboard_on_visited_path'
#include "diagnostic_msgs/msg/detail/key_value__traits.hpp"
// Member 'blackboard_activity'
#include "py_trees_ros_interfaces/msg/detail/activity_item__traits.hpp"
// Member 'statistics'
#include "py_trees_ros_interfaces/msg/detail/statistics__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const py_trees_ros_interfaces::msg::BehaviourTree & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: behaviours
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.behaviours.size() == 0) {
      out << "behaviours: []\n";
    } else {
      out << "behaviours:\n";
      for (auto item : msg.behaviours) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: changed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "changed: ";
    value_to_yaml(msg.changed, out);
    out << "\n";
  }

  // member: blackboard_on_visited_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.blackboard_on_visited_path.size() == 0) {
      out << "blackboard_on_visited_path: []\n";
    } else {
      out << "blackboard_on_visited_path:\n";
      for (auto item : msg.blackboard_on_visited_path) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: blackboard_activity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.blackboard_activity.size() == 0) {
      out << "blackboard_activity: []\n";
    } else {
      out << "blackboard_activity:\n";
      for (auto item : msg.blackboard_activity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: statistics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "statistics:\n";
    to_yaml(msg.statistics, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const py_trees_ros_interfaces::msg::BehaviourTree & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<py_trees_ros_interfaces::msg::BehaviourTree>()
{
  return "py_trees_ros_interfaces::msg::BehaviourTree";
}

template<>
inline const char * name<py_trees_ros_interfaces::msg::BehaviourTree>()
{
  return "py_trees_ros_interfaces/msg/BehaviourTree";
}

template<>
struct has_fixed_size<py_trees_ros_interfaces::msg::BehaviourTree>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<py_trees_ros_interfaces::msg::BehaviourTree>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<py_trees_ros_interfaces::msg::BehaviourTree>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR_TREE__TRAITS_HPP_
