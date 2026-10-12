// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from py_trees_ros_interfaces:srv/CloseSnapshotStream.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__SRV__DETAIL__CLOSE_SNAPSHOT_STREAM__STRUCT_HPP_
#define PY_TREES_ROS_INTERFACES__SRV__DETAIL__CLOSE_SNAPSHOT_STREAM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__py_trees_ros_interfaces__srv__CloseSnapshotStream_Request __attribute__((deprecated))
#else
# define DEPRECATED__py_trees_ros_interfaces__srv__CloseSnapshotStream_Request __declspec(deprecated)
#endif

namespace py_trees_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CloseSnapshotStream_Request_
{
  using Type = CloseSnapshotStream_Request_<ContainerAllocator>;

  explicit CloseSnapshotStream_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
    }
  }

  explicit CloseSnapshotStream_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    py_trees_ros_interfaces::srv::CloseSnapshotStream_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const py_trees_ros_interfaces::srv::CloseSnapshotStream_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::CloseSnapshotStream_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::CloseSnapshotStream_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::CloseSnapshotStream_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::CloseSnapshotStream_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::CloseSnapshotStream_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::CloseSnapshotStream_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::CloseSnapshotStream_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::CloseSnapshotStream_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__py_trees_ros_interfaces__srv__CloseSnapshotStream_Request
    std::shared_ptr<py_trees_ros_interfaces::srv::CloseSnapshotStream_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__py_trees_ros_interfaces__srv__CloseSnapshotStream_Request
    std::shared_ptr<py_trees_ros_interfaces::srv::CloseSnapshotStream_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CloseSnapshotStream_Request_ & other) const
  {
    if (this->topic_name != other.topic_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const CloseSnapshotStream_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CloseSnapshotStream_Request_

// alias to use template instance with default allocator
using CloseSnapshotStream_Request =
  py_trees_ros_interfaces::srv::CloseSnapshotStream_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace py_trees_ros_interfaces


#ifndef _WIN32
# define DEPRECATED__py_trees_ros_interfaces__srv__CloseSnapshotStream_Response __attribute__((deprecated))
#else
# define DEPRECATED__py_trees_ros_interfaces__srv__CloseSnapshotStream_Response __declspec(deprecated)
#endif

namespace py_trees_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CloseSnapshotStream_Response_
{
  using Type = CloseSnapshotStream_Response_<ContainerAllocator>;

  explicit CloseSnapshotStream_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit CloseSnapshotStream_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    py_trees_ros_interfaces::srv::CloseSnapshotStream_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const py_trees_ros_interfaces::srv::CloseSnapshotStream_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::CloseSnapshotStream_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::CloseSnapshotStream_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::CloseSnapshotStream_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::CloseSnapshotStream_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::CloseSnapshotStream_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::CloseSnapshotStream_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::CloseSnapshotStream_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::CloseSnapshotStream_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__py_trees_ros_interfaces__srv__CloseSnapshotStream_Response
    std::shared_ptr<py_trees_ros_interfaces::srv::CloseSnapshotStream_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__py_trees_ros_interfaces__srv__CloseSnapshotStream_Response
    std::shared_ptr<py_trees_ros_interfaces::srv::CloseSnapshotStream_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CloseSnapshotStream_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CloseSnapshotStream_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CloseSnapshotStream_Response_

// alias to use template instance with default allocator
using CloseSnapshotStream_Response =
  py_trees_ros_interfaces::srv::CloseSnapshotStream_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace py_trees_ros_interfaces

namespace py_trees_ros_interfaces
{

namespace srv
{

struct CloseSnapshotStream
{
  using Request = py_trees_ros_interfaces::srv::CloseSnapshotStream_Request;
  using Response = py_trees_ros_interfaces::srv::CloseSnapshotStream_Response;
};

}  // namespace srv

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__SRV__DETAIL__CLOSE_SNAPSHOT_STREAM__STRUCT_HPP_
