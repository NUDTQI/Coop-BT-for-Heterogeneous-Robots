// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from py_trees_ros_interfaces:srv/IntrospectPublishers.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__SRV__DETAIL__INTROSPECT_PUBLISHERS__STRUCT_HPP_
#define PY_TREES_ROS_INTERFACES__SRV__DETAIL__INTROSPECT_PUBLISHERS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__py_trees_ros_interfaces__srv__IntrospectPublishers_Request __attribute__((deprecated))
#else
# define DEPRECATED__py_trees_ros_interfaces__srv__IntrospectPublishers_Request __declspec(deprecated)
#endif

namespace py_trees_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IntrospectPublishers_Request_
{
  using Type = IntrospectPublishers_Request_<ContainerAllocator>;

  explicit IntrospectPublishers_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit IntrospectPublishers_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    py_trees_ros_interfaces::srv::IntrospectPublishers_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const py_trees_ros_interfaces::srv::IntrospectPublishers_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::IntrospectPublishers_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::IntrospectPublishers_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::IntrospectPublishers_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::IntrospectPublishers_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::IntrospectPublishers_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::IntrospectPublishers_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::IntrospectPublishers_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::IntrospectPublishers_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__py_trees_ros_interfaces__srv__IntrospectPublishers_Request
    std::shared_ptr<py_trees_ros_interfaces::srv::IntrospectPublishers_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__py_trees_ros_interfaces__srv__IntrospectPublishers_Request
    std::shared_ptr<py_trees_ros_interfaces::srv::IntrospectPublishers_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntrospectPublishers_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntrospectPublishers_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntrospectPublishers_Request_

// alias to use template instance with default allocator
using IntrospectPublishers_Request =
  py_trees_ros_interfaces::srv::IntrospectPublishers_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace py_trees_ros_interfaces


// Include directives for member types
// Member 'publisher_details'
#include "py_trees_ros_interfaces/msg/detail/publisher_details__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__py_trees_ros_interfaces__srv__IntrospectPublishers_Response __attribute__((deprecated))
#else
# define DEPRECATED__py_trees_ros_interfaces__srv__IntrospectPublishers_Response __declspec(deprecated)
#endif

namespace py_trees_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IntrospectPublishers_Response_
{
  using Type = IntrospectPublishers_Response_<ContainerAllocator>;

  explicit IntrospectPublishers_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit IntrospectPublishers_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _publisher_details_type =
    std::vector<py_trees_ros_interfaces::msg::PublisherDetails_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<py_trees_ros_interfaces::msg::PublisherDetails_<ContainerAllocator>>>;
  _publisher_details_type publisher_details;

  // setters for named parameter idiom
  Type & set__publisher_details(
    const std::vector<py_trees_ros_interfaces::msg::PublisherDetails_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<py_trees_ros_interfaces::msg::PublisherDetails_<ContainerAllocator>>> & _arg)
  {
    this->publisher_details = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    py_trees_ros_interfaces::srv::IntrospectPublishers_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const py_trees_ros_interfaces::srv::IntrospectPublishers_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::IntrospectPublishers_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::IntrospectPublishers_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::IntrospectPublishers_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::IntrospectPublishers_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::IntrospectPublishers_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::IntrospectPublishers_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::IntrospectPublishers_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::IntrospectPublishers_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__py_trees_ros_interfaces__srv__IntrospectPublishers_Response
    std::shared_ptr<py_trees_ros_interfaces::srv::IntrospectPublishers_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__py_trees_ros_interfaces__srv__IntrospectPublishers_Response
    std::shared_ptr<py_trees_ros_interfaces::srv::IntrospectPublishers_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntrospectPublishers_Response_ & other) const
  {
    if (this->publisher_details != other.publisher_details) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntrospectPublishers_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntrospectPublishers_Response_

// alias to use template instance with default allocator
using IntrospectPublishers_Response =
  py_trees_ros_interfaces::srv::IntrospectPublishers_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace py_trees_ros_interfaces

namespace py_trees_ros_interfaces
{

namespace srv
{

struct IntrospectPublishers
{
  using Request = py_trees_ros_interfaces::srv::IntrospectPublishers_Request;
  using Response = py_trees_ros_interfaces::srv::IntrospectPublishers_Response;
};

}  // namespace srv

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__SRV__DETAIL__INTROSPECT_PUBLISHERS__STRUCT_HPP_
