// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from py_trees_ros_interfaces:msg/SnapshotStreamParameters.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__SNAPSHOT_STREAM_PARAMETERS__STRUCT_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__SNAPSHOT_STREAM_PARAMETERS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__py_trees_ros_interfaces__msg__SnapshotStreamParameters __attribute__((deprecated))
#else
# define DEPRECATED__py_trees_ros_interfaces__msg__SnapshotStreamParameters __declspec(deprecated)
#endif

namespace py_trees_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SnapshotStreamParameters_
{
  using Type = SnapshotStreamParameters_<ContainerAllocator>;

  explicit SnapshotStreamParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->snapshot_period = 0.0;
      this->blackboard_data = false;
      this->blackboard_activity = false;
    }
  }

  explicit SnapshotStreamParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->snapshot_period = 0.0;
      this->blackboard_data = false;
      this->blackboard_activity = false;
    }
  }

  // field types and members
  using _snapshot_period_type =
    double;
  _snapshot_period_type snapshot_period;
  using _blackboard_data_type =
    bool;
  _blackboard_data_type blackboard_data;
  using _blackboard_activity_type =
    bool;
  _blackboard_activity_type blackboard_activity;

  // setters for named parameter idiom
  Type & set__snapshot_period(
    const double & _arg)
  {
    this->snapshot_period = _arg;
    return *this;
  }
  Type & set__blackboard_data(
    const bool & _arg)
  {
    this->blackboard_data = _arg;
    return *this;
  }
  Type & set__blackboard_activity(
    const bool & _arg)
  {
    this->blackboard_activity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    py_trees_ros_interfaces::msg::SnapshotStreamParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const py_trees_ros_interfaces::msg::SnapshotStreamParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::msg::SnapshotStreamParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::msg::SnapshotStreamParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::msg::SnapshotStreamParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::msg::SnapshotStreamParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::msg::SnapshotStreamParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::msg::SnapshotStreamParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::msg::SnapshotStreamParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::msg::SnapshotStreamParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__py_trees_ros_interfaces__msg__SnapshotStreamParameters
    std::shared_ptr<py_trees_ros_interfaces::msg::SnapshotStreamParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__py_trees_ros_interfaces__msg__SnapshotStreamParameters
    std::shared_ptr<py_trees_ros_interfaces::msg::SnapshotStreamParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SnapshotStreamParameters_ & other) const
  {
    if (this->snapshot_period != other.snapshot_period) {
      return false;
    }
    if (this->blackboard_data != other.blackboard_data) {
      return false;
    }
    if (this->blackboard_activity != other.blackboard_activity) {
      return false;
    }
    return true;
  }
  bool operator!=(const SnapshotStreamParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SnapshotStreamParameters_

// alias to use template instance with default allocator
using SnapshotStreamParameters =
  py_trees_ros_interfaces::msg::SnapshotStreamParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__SNAPSHOT_STREAM_PARAMETERS__STRUCT_HPP_
