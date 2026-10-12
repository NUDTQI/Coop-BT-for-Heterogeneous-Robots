// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from py_trees_ros_interfaces:msg/ServiceDetails.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__SERVICE_DETAILS__STRUCT_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__SERVICE_DETAILS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__py_trees_ros_interfaces__msg__ServiceDetails __attribute__((deprecated))
#else
# define DEPRECATED__py_trees_ros_interfaces__msg__ServiceDetails __declspec(deprecated)
#endif

namespace py_trees_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServiceDetails_
{
  using Type = ServiceDetails_<ContainerAllocator>;

  explicit ServiceDetails_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->service_type = "";
    }
  }

  explicit ServiceDetails_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_name(_alloc),
    service_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->service_type = "";
    }
  }

  // field types and members
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _service_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_type_type service_type;

  // setters for named parameter idiom
  Type & set__service_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_name = _arg;
    return *this;
  }
  Type & set__service_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    py_trees_ros_interfaces::msg::ServiceDetails_<ContainerAllocator> *;
  using ConstRawPtr =
    const py_trees_ros_interfaces::msg::ServiceDetails_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::msg::ServiceDetails_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::msg::ServiceDetails_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::msg::ServiceDetails_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::msg::ServiceDetails_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::msg::ServiceDetails_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::msg::ServiceDetails_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::msg::ServiceDetails_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::msg::ServiceDetails_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__py_trees_ros_interfaces__msg__ServiceDetails
    std::shared_ptr<py_trees_ros_interfaces::msg::ServiceDetails_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__py_trees_ros_interfaces__msg__ServiceDetails
    std::shared_ptr<py_trees_ros_interfaces::msg::ServiceDetails_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceDetails_ & other) const
  {
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->service_type != other.service_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceDetails_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceDetails_

// alias to use template instance with default allocator
using ServiceDetails =
  py_trees_ros_interfaces::msg::ServiceDetails_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__SERVICE_DETAILS__STRUCT_HPP_
