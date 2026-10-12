// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from py_trees_ros_interfaces:srv/OpenSnapshotStream.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__SRV__DETAIL__OPEN_SNAPSHOT_STREAM__STRUCT_HPP_
#define PY_TREES_ROS_INTERFACES__SRV__DETAIL__OPEN_SNAPSHOT_STREAM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'parameters'
#include "py_trees_ros_interfaces/msg/detail/snapshot_stream_parameters__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__py_trees_ros_interfaces__srv__OpenSnapshotStream_Request __attribute__((deprecated))
#else
# define DEPRECATED__py_trees_ros_interfaces__srv__OpenSnapshotStream_Request __declspec(deprecated)
#endif

namespace py_trees_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OpenSnapshotStream_Request_
{
  using Type = OpenSnapshotStream_Request_<ContainerAllocator>;

  explicit OpenSnapshotStream_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : parameters(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
    }
  }

  explicit OpenSnapshotStream_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic_name(_alloc),
    parameters(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
    }
  }

  // field types and members
  using _topic_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_name_type topic_name;
  using _parameters_type =
    py_trees_ros_interfaces::msg::SnapshotStreamParameters_<ContainerAllocator>;
  _parameters_type parameters;

  // setters for named parameter idiom
  Type & set__topic_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic_name = _arg;
    return *this;
  }
  Type & set__parameters(
    const py_trees_ros_interfaces::msg::SnapshotStreamParameters_<ContainerAllocator> & _arg)
  {
    this->parameters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    py_trees_ros_interfaces::srv::OpenSnapshotStream_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const py_trees_ros_interfaces::srv::OpenSnapshotStream_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::OpenSnapshotStream_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::OpenSnapshotStream_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::OpenSnapshotStream_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::OpenSnapshotStream_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::OpenSnapshotStream_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::OpenSnapshotStream_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::OpenSnapshotStream_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::OpenSnapshotStream_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__py_trees_ros_interfaces__srv__OpenSnapshotStream_Request
    std::shared_ptr<py_trees_ros_interfaces::srv::OpenSnapshotStream_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__py_trees_ros_interfaces__srv__OpenSnapshotStream_Request
    std::shared_ptr<py_trees_ros_interfaces::srv::OpenSnapshotStream_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpenSnapshotStream_Request_ & other) const
  {
    if (this->topic_name != other.topic_name) {
      return false;
    }
    if (this->parameters != other.parameters) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpenSnapshotStream_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpenSnapshotStream_Request_

// alias to use template instance with default allocator
using OpenSnapshotStream_Request =
  py_trees_ros_interfaces::srv::OpenSnapshotStream_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace py_trees_ros_interfaces


#ifndef _WIN32
# define DEPRECATED__py_trees_ros_interfaces__srv__OpenSnapshotStream_Response __attribute__((deprecated))
#else
# define DEPRECATED__py_trees_ros_interfaces__srv__OpenSnapshotStream_Response __declspec(deprecated)
#endif

namespace py_trees_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OpenSnapshotStream_Response_
{
  using Type = OpenSnapshotStream_Response_<ContainerAllocator>;

  explicit OpenSnapshotStream_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
    }
  }

  explicit OpenSnapshotStream_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
    }
  }

  // field types and members
  using _topic_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_name_type topic_name;

  // setters for named parameter idiom
  Type & set__topic_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    py_trees_ros_interfaces::srv::OpenSnapshotStream_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const py_trees_ros_interfaces::srv::OpenSnapshotStream_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::OpenSnapshotStream_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::OpenSnapshotStream_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::OpenSnapshotStream_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::OpenSnapshotStream_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::OpenSnapshotStream_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::OpenSnapshotStream_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::OpenSnapshotStream_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::OpenSnapshotStream_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__py_trees_ros_interfaces__srv__OpenSnapshotStream_Response
    std::shared_ptr<py_trees_ros_interfaces::srv::OpenSnapshotStream_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__py_trees_ros_interfaces__srv__OpenSnapshotStream_Response
    std::shared_ptr<py_trees_ros_interfaces::srv::OpenSnapshotStream_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpenSnapshotStream_Response_ & other) const
  {
    if (this->topic_name != other.topic_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpenSnapshotStream_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpenSnapshotStream_Response_

// alias to use template instance with default allocator
using OpenSnapshotStream_Response =
  py_trees_ros_interfaces::srv::OpenSnapshotStream_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace py_trees_ros_interfaces

namespace py_trees_ros_interfaces
{

namespace srv
{

struct OpenSnapshotStream
{
  using Request = py_trees_ros_interfaces::srv::OpenSnapshotStream_Request;
  using Response = py_trees_ros_interfaces::srv::OpenSnapshotStream_Response;
};

}  // namespace srv

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__SRV__DETAIL__OPEN_SNAPSHOT_STREAM__STRUCT_HPP_
