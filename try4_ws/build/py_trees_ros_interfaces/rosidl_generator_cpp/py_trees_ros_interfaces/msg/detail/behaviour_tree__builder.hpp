// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from py_trees_ros_interfaces:msg/BehaviourTree.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR_TREE__BUILDER_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR_TREE__BUILDER_HPP_

#include "py_trees_ros_interfaces/msg/detail/behaviour_tree__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace py_trees_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_BehaviourTree_statistics
{
public:
  explicit Init_BehaviourTree_statistics(::py_trees_ros_interfaces::msg::BehaviourTree & msg)
  : msg_(msg)
  {}
  ::py_trees_ros_interfaces::msg::BehaviourTree statistics(::py_trees_ros_interfaces::msg::BehaviourTree::_statistics_type arg)
  {
    msg_.statistics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::BehaviourTree msg_;
};

class Init_BehaviourTree_blackboard_activity
{
public:
  explicit Init_BehaviourTree_blackboard_activity(::py_trees_ros_interfaces::msg::BehaviourTree & msg)
  : msg_(msg)
  {}
  Init_BehaviourTree_statistics blackboard_activity(::py_trees_ros_interfaces::msg::BehaviourTree::_blackboard_activity_type arg)
  {
    msg_.blackboard_activity = std::move(arg);
    return Init_BehaviourTree_statistics(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::BehaviourTree msg_;
};

class Init_BehaviourTree_blackboard_on_visited_path
{
public:
  explicit Init_BehaviourTree_blackboard_on_visited_path(::py_trees_ros_interfaces::msg::BehaviourTree & msg)
  : msg_(msg)
  {}
  Init_BehaviourTree_blackboard_activity blackboard_on_visited_path(::py_trees_ros_interfaces::msg::BehaviourTree::_blackboard_on_visited_path_type arg)
  {
    msg_.blackboard_on_visited_path = std::move(arg);
    return Init_BehaviourTree_blackboard_activity(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::BehaviourTree msg_;
};

class Init_BehaviourTree_changed
{
public:
  explicit Init_BehaviourTree_changed(::py_trees_ros_interfaces::msg::BehaviourTree & msg)
  : msg_(msg)
  {}
  Init_BehaviourTree_blackboard_on_visited_path changed(::py_trees_ros_interfaces::msg::BehaviourTree::_changed_type arg)
  {
    msg_.changed = std::move(arg);
    return Init_BehaviourTree_blackboard_on_visited_path(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::BehaviourTree msg_;
};

class Init_BehaviourTree_behaviours
{
public:
  Init_BehaviourTree_behaviours()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviourTree_changed behaviours(::py_trees_ros_interfaces::msg::BehaviourTree::_behaviours_type arg)
  {
    msg_.behaviours = std::move(arg);
    return Init_BehaviourTree_changed(msg_);
  }

private:
  ::py_trees_ros_interfaces::msg::BehaviourTree msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::msg::BehaviourTree>()
{
  return py_trees_ros_interfaces::msg::builder::Init_BehaviourTree_behaviours();
}

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR_TREE__BUILDER_HPP_
