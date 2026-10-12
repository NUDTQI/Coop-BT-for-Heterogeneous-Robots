// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from py_trees_ros_interfaces:msg/Statistics.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__STATISTICS__STRUCT_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__STATISTICS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__py_trees_ros_interfaces__msg__Statistics __attribute__((deprecated))
#else
# define DEPRECATED__py_trees_ros_interfaces__msg__Statistics __declspec(deprecated)
#endif

namespace py_trees_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Statistics_
{
  using Type = Statistics_<ContainerAllocator>;

  explicit Statistics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0ll;
      this->tick_duration = 0.0f;
      this->tick_duration_average = 0.0f;
      this->tick_duration_variance = 0.0f;
      this->tick_interval = 0.0f;
      this->tick_interval_average = 0.0f;
      this->tick_interval_variance = 0.0f;
    }
  }

  explicit Statistics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0ll;
      this->tick_duration = 0.0f;
      this->tick_duration_average = 0.0f;
      this->tick_duration_variance = 0.0f;
      this->tick_interval = 0.0f;
      this->tick_interval_average = 0.0f;
      this->tick_interval_variance = 0.0f;
    }
  }

  // field types and members
  using _count_type =
    int64_t;
  _count_type count;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _tick_duration_type =
    float;
  _tick_duration_type tick_duration;
  using _tick_duration_average_type =
    float;
  _tick_duration_average_type tick_duration_average;
  using _tick_duration_variance_type =
    float;
  _tick_duration_variance_type tick_duration_variance;
  using _tick_interval_type =
    float;
  _tick_interval_type tick_interval;
  using _tick_interval_average_type =
    float;
  _tick_interval_average_type tick_interval_average;
  using _tick_interval_variance_type =
    float;
  _tick_interval_variance_type tick_interval_variance;

  // setters for named parameter idiom
  Type & set__count(
    const int64_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__tick_duration(
    const float & _arg)
  {
    this->tick_duration = _arg;
    return *this;
  }
  Type & set__tick_duration_average(
    const float & _arg)
  {
    this->tick_duration_average = _arg;
    return *this;
  }
  Type & set__tick_duration_variance(
    const float & _arg)
  {
    this->tick_duration_variance = _arg;
    return *this;
  }
  Type & set__tick_interval(
    const float & _arg)
  {
    this->tick_interval = _arg;
    return *this;
  }
  Type & set__tick_interval_average(
    const float & _arg)
  {
    this->tick_interval_average = _arg;
    return *this;
  }
  Type & set__tick_interval_variance(
    const float & _arg)
  {
    this->tick_interval_variance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    py_trees_ros_interfaces::msg::Statistics_<ContainerAllocator> *;
  using ConstRawPtr =
    const py_trees_ros_interfaces::msg::Statistics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::msg::Statistics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::msg::Statistics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::msg::Statistics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::msg::Statistics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::msg::Statistics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::msg::Statistics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::msg::Statistics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::msg::Statistics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__py_trees_ros_interfaces__msg__Statistics
    std::shared_ptr<py_trees_ros_interfaces::msg::Statistics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__py_trees_ros_interfaces__msg__Statistics
    std::shared_ptr<py_trees_ros_interfaces::msg::Statistics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Statistics_ & other) const
  {
    if (this->count != other.count) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->tick_duration != other.tick_duration) {
      return false;
    }
    if (this->tick_duration_average != other.tick_duration_average) {
      return false;
    }
    if (this->tick_duration_variance != other.tick_duration_variance) {
      return false;
    }
    if (this->tick_interval != other.tick_interval) {
      return false;
    }
    if (this->tick_interval_average != other.tick_interval_average) {
      return false;
    }
    if (this->tick_interval_variance != other.tick_interval_variance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Statistics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Statistics_

// alias to use template instance with default allocator
using Statistics =
  py_trees_ros_interfaces::msg::Statistics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__STATISTICS__STRUCT_HPP_
