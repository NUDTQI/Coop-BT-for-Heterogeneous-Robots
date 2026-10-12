// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from py_trees_ros_interfaces:srv/StatusReport.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__SRV__DETAIL__STATUS_REPORT__STRUCT_HPP_
#define PY_TREES_ROS_INTERFACES__SRV__DETAIL__STATUS_REPORT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__py_trees_ros_interfaces__srv__StatusReport_Request __attribute__((deprecated))
#else
# define DEPRECATED__py_trees_ros_interfaces__srv__StatusReport_Request __declspec(deprecated)
#endif

namespace py_trees_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StatusReport_Request_
{
  using Type = StatusReport_Request_<ContainerAllocator>;

  explicit StatusReport_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit StatusReport_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    py_trees_ros_interfaces::srv::StatusReport_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const py_trees_ros_interfaces::srv::StatusReport_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::StatusReport_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::StatusReport_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::StatusReport_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::StatusReport_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::StatusReport_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::StatusReport_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::StatusReport_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::StatusReport_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__py_trees_ros_interfaces__srv__StatusReport_Request
    std::shared_ptr<py_trees_ros_interfaces::srv::StatusReport_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__py_trees_ros_interfaces__srv__StatusReport_Request
    std::shared_ptr<py_trees_ros_interfaces::srv::StatusReport_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StatusReport_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const StatusReport_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StatusReport_Request_

// alias to use template instance with default allocator
using StatusReport_Request =
  py_trees_ros_interfaces::srv::StatusReport_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace py_trees_ros_interfaces


#ifndef _WIN32
# define DEPRECATED__py_trees_ros_interfaces__srv__StatusReport_Response __attribute__((deprecated))
#else
# define DEPRECATED__py_trees_ros_interfaces__srv__StatusReport_Response __declspec(deprecated)
#endif

namespace py_trees_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StatusReport_Response_
{
  using Type = StatusReport_Response_<ContainerAllocator>;

  explicit StatusReport_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->report = "";
    }
  }

  explicit StatusReport_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : report(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->report = "";
    }
  }

  // field types and members
  using _report_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _report_type report;

  // setters for named parameter idiom
  Type & set__report(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->report = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    py_trees_ros_interfaces::srv::StatusReport_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const py_trees_ros_interfaces::srv::StatusReport_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::StatusReport_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::StatusReport_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::StatusReport_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::StatusReport_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::StatusReport_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::StatusReport_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::StatusReport_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::StatusReport_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__py_trees_ros_interfaces__srv__StatusReport_Response
    std::shared_ptr<py_trees_ros_interfaces::srv::StatusReport_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__py_trees_ros_interfaces__srv__StatusReport_Response
    std::shared_ptr<py_trees_ros_interfaces::srv::StatusReport_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StatusReport_Response_ & other) const
  {
    if (this->report != other.report) {
      return false;
    }
    return true;
  }
  bool operator!=(const StatusReport_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StatusReport_Response_

// alias to use template instance with default allocator
using StatusReport_Response =
  py_trees_ros_interfaces::srv::StatusReport_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace py_trees_ros_interfaces

namespace py_trees_ros_interfaces
{

namespace srv
{

struct StatusReport
{
  using Request = py_trees_ros_interfaces::srv::StatusReport_Request;
  using Response = py_trees_ros_interfaces::srv::StatusReport_Response;
};

}  // namespace srv

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__SRV__DETAIL__STATUS_REPORT__STRUCT_HPP_
