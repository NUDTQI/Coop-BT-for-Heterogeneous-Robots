// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from py_trees_ros_interfaces:msg/BehaviourTree.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR_TREE__STRUCT_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR_TREE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'behaviours'
#include "py_trees_ros_interfaces/msg/detail/behaviour__struct.hpp"
// Member 'blackboard_on_visited_path'
#include "diagnostic_msgs/msg/detail/key_value__struct.hpp"
// Member 'blackboard_activity'
#include "py_trees_ros_interfaces/msg/detail/activity_item__struct.hpp"
// Member 'statistics'
#include "py_trees_ros_interfaces/msg/detail/statistics__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__py_trees_ros_interfaces__msg__BehaviourTree __attribute__((deprecated))
#else
# define DEPRECATED__py_trees_ros_interfaces__msg__BehaviourTree __declspec(deprecated)
#endif

namespace py_trees_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BehaviourTree_
{
  using Type = BehaviourTree_<ContainerAllocator>;

  explicit BehaviourTree_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : statistics(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->changed = false;
    }
  }

  explicit BehaviourTree_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : statistics(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->changed = false;
    }
  }

  // field types and members
  using _behaviours_type =
    std::vector<py_trees_ros_interfaces::msg::Behaviour_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<py_trees_ros_interfaces::msg::Behaviour_<ContainerAllocator>>>;
  _behaviours_type behaviours;
  using _changed_type =
    bool;
  _changed_type changed;
  using _blackboard_on_visited_path_type =
    std::vector<diagnostic_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::KeyValue_<ContainerAllocator>>>;
  _blackboard_on_visited_path_type blackboard_on_visited_path;
  using _blackboard_activity_type =
    std::vector<py_trees_ros_interfaces::msg::ActivityItem_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<py_trees_ros_interfaces::msg::ActivityItem_<ContainerAllocator>>>;
  _blackboard_activity_type blackboard_activity;
  using _statistics_type =
    py_trees_ros_interfaces::msg::Statistics_<ContainerAllocator>;
  _statistics_type statistics;

  // setters for named parameter idiom
  Type & set__behaviours(
    const std::vector<py_trees_ros_interfaces::msg::Behaviour_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<py_trees_ros_interfaces::msg::Behaviour_<ContainerAllocator>>> & _arg)
  {
    this->behaviours = _arg;
    return *this;
  }
  Type & set__changed(
    const bool & _arg)
  {
    this->changed = _arg;
    return *this;
  }
  Type & set__blackboard_on_visited_path(
    const std::vector<diagnostic_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::KeyValue_<ContainerAllocator>>> & _arg)
  {
    this->blackboard_on_visited_path = _arg;
    return *this;
  }
  Type & set__blackboard_activity(
    const std::vector<py_trees_ros_interfaces::msg::ActivityItem_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<py_trees_ros_interfaces::msg::ActivityItem_<ContainerAllocator>>> & _arg)
  {
    this->blackboard_activity = _arg;
    return *this;
  }
  Type & set__statistics(
    const py_trees_ros_interfaces::msg::Statistics_<ContainerAllocator> & _arg)
  {
    this->statistics = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    py_trees_ros_interfaces::msg::BehaviourTree_<ContainerAllocator> *;
  using ConstRawPtr =
    const py_trees_ros_interfaces::msg::BehaviourTree_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::msg::BehaviourTree_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::msg::BehaviourTree_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::msg::BehaviourTree_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::msg::BehaviourTree_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::msg::BehaviourTree_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::msg::BehaviourTree_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::msg::BehaviourTree_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::msg::BehaviourTree_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__py_trees_ros_interfaces__msg__BehaviourTree
    std::shared_ptr<py_trees_ros_interfaces::msg::BehaviourTree_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__py_trees_ros_interfaces__msg__BehaviourTree
    std::shared_ptr<py_trees_ros_interfaces::msg::BehaviourTree_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BehaviourTree_ & other) const
  {
    if (this->behaviours != other.behaviours) {
      return false;
    }
    if (this->changed != other.changed) {
      return false;
    }
    if (this->blackboard_on_visited_path != other.blackboard_on_visited_path) {
      return false;
    }
    if (this->blackboard_activity != other.blackboard_activity) {
      return false;
    }
    if (this->statistics != other.statistics) {
      return false;
    }
    return true;
  }
  bool operator!=(const BehaviourTree_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BehaviourTree_

// alias to use template instance with default allocator
using BehaviourTree =
  py_trees_ros_interfaces::msg::BehaviourTree_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR_TREE__STRUCT_HPP_
