// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from py_trees_ros_interfaces:msg/PublisherDetails.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__PUBLISHER_DETAILS__STRUCT_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__PUBLISHER_DETAILS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__py_trees_ros_interfaces__msg__PublisherDetails __attribute__((deprecated))
#else
# define DEPRECATED__py_trees_ros_interfaces__msg__PublisherDetails __declspec(deprecated)
#endif

namespace py_trees_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PublisherDetails_
{
  using Type = PublisherDetails_<ContainerAllocator>;

  explicit PublisherDetails_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
      this->message_type = "";
      this->latched = false;
    }
  }

  explicit PublisherDetails_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic_name(_alloc),
    message_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
      this->message_type = "";
      this->latched = false;
    }
  }

  // field types and members
  using _topic_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_name_type topic_name;
  using _message_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type_type message_type;
  using _latched_type =
    bool;
  _latched_type latched;

  // setters for named parameter idiom
  Type & set__topic_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic_name = _arg;
    return *this;
  }
  Type & set__message_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message_type = _arg;
    return *this;
  }
  Type & set__latched(
    const bool & _arg)
  {
    this->latched = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    py_trees_ros_interfaces::msg::PublisherDetails_<ContainerAllocator> *;
  using ConstRawPtr =
    const py_trees_ros_interfaces::msg::PublisherDetails_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::msg::PublisherDetails_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::msg::PublisherDetails_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::msg::PublisherDetails_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::msg::PublisherDetails_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::msg::PublisherDetails_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::msg::PublisherDetails_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::msg::PublisherDetails_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::msg::PublisherDetails_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__py_trees_ros_interfaces__msg__PublisherDetails
    std::shared_ptr<py_trees_ros_interfaces::msg::PublisherDetails_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__py_trees_ros_interfaces__msg__PublisherDetails
    std::shared_ptr<py_trees_ros_interfaces::msg::PublisherDetails_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PublisherDetails_ & other) const
  {
    if (this->topic_name != other.topic_name) {
      return false;
    }
    if (this->message_type != other.message_type) {
      return false;
    }
    if (this->latched != other.latched) {
      return false;
    }
    return true;
  }
  bool operator!=(const PublisherDetails_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PublisherDetails_

// alias to use template instance with default allocator
using PublisherDetails =
  py_trees_ros_interfaces::msg::PublisherDetails_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__PUBLISHER_DETAILS__STRUCT_HPP_
