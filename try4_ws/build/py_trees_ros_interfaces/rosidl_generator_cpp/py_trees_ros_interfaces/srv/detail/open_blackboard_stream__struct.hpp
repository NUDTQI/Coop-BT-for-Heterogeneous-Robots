// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from py_trees_ros_interfaces:srv/OpenBlackboardStream.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__SRV__DETAIL__OPEN_BLACKBOARD_STREAM__STRUCT_HPP_
#define PY_TREES_ROS_INTERFACES__SRV__DETAIL__OPEN_BLACKBOARD_STREAM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__py_trees_ros_interfaces__srv__OpenBlackboardStream_Request __attribute__((deprecated))
#else
# define DEPRECATED__py_trees_ros_interfaces__srv__OpenBlackboardStream_Request __declspec(deprecated)
#endif

namespace py_trees_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OpenBlackboardStream_Request_
{
  using Type = OpenBlackboardStream_Request_<ContainerAllocator>;

  explicit OpenBlackboardStream_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filter_on_visited_path = false;
      this->with_activity_stream = false;
    }
  }

  explicit OpenBlackboardStream_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filter_on_visited_path = false;
      this->with_activity_stream = false;
    }
  }

  // field types and members
  using _variables_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _variables_type variables;
  using _filter_on_visited_path_type =
    bool;
  _filter_on_visited_path_type filter_on_visited_path;
  using _with_activity_stream_type =
    bool;
  _with_activity_stream_type with_activity_stream;

  // setters for named parameter idiom
  Type & set__variables(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->variables = _arg;
    return *this;
  }
  Type & set__filter_on_visited_path(
    const bool & _arg)
  {
    this->filter_on_visited_path = _arg;
    return *this;
  }
  Type & set__with_activity_stream(
    const bool & _arg)
  {
    this->with_activity_stream = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    py_trees_ros_interfaces::srv::OpenBlackboardStream_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const py_trees_ros_interfaces::srv::OpenBlackboardStream_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::OpenBlackboardStream_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::OpenBlackboardStream_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::OpenBlackboardStream_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::OpenBlackboardStream_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::OpenBlackboardStream_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::OpenBlackboardStream_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::OpenBlackboardStream_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::OpenBlackboardStream_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__py_trees_ros_interfaces__srv__OpenBlackboardStream_Request
    std::shared_ptr<py_trees_ros_interfaces::srv::OpenBlackboardStream_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__py_trees_ros_interfaces__srv__OpenBlackboardStream_Request
    std::shared_ptr<py_trees_ros_interfaces::srv::OpenBlackboardStream_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpenBlackboardStream_Request_ & other) const
  {
    if (this->variables != other.variables) {
      return false;
    }
    if (this->filter_on_visited_path != other.filter_on_visited_path) {
      return false;
    }
    if (this->with_activity_stream != other.with_activity_stream) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpenBlackboardStream_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpenBlackboardStream_Request_

// alias to use template instance with default allocator
using OpenBlackboardStream_Request =
  py_trees_ros_interfaces::srv::OpenBlackboardStream_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace py_trees_ros_interfaces


#ifndef _WIN32
# define DEPRECATED__py_trees_ros_interfaces__srv__OpenBlackboardStream_Response __attribute__((deprecated))
#else
# define DEPRECATED__py_trees_ros_interfaces__srv__OpenBlackboardStream_Response __declspec(deprecated)
#endif

namespace py_trees_ros_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OpenBlackboardStream_Response_
{
  using Type = OpenBlackboardStream_Response_<ContainerAllocator>;

  explicit OpenBlackboardStream_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic = "";
    }
  }

  explicit OpenBlackboardStream_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic = "";
    }
  }

  // field types and members
  using _topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_type topic;

  // setters for named parameter idiom
  Type & set__topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    py_trees_ros_interfaces::srv::OpenBlackboardStream_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const py_trees_ros_interfaces::srv::OpenBlackboardStream_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::OpenBlackboardStream_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::srv::OpenBlackboardStream_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::OpenBlackboardStream_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::OpenBlackboardStream_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::srv::OpenBlackboardStream_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::srv::OpenBlackboardStream_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::OpenBlackboardStream_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::srv::OpenBlackboardStream_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__py_trees_ros_interfaces__srv__OpenBlackboardStream_Response
    std::shared_ptr<py_trees_ros_interfaces::srv::OpenBlackboardStream_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__py_trees_ros_interfaces__srv__OpenBlackboardStream_Response
    std::shared_ptr<py_trees_ros_interfaces::srv::OpenBlackboardStream_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpenBlackboardStream_Response_ & other) const
  {
    if (this->topic != other.topic) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpenBlackboardStream_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpenBlackboardStream_Response_

// alias to use template instance with default allocator
using OpenBlackboardStream_Response =
  py_trees_ros_interfaces::srv::OpenBlackboardStream_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace py_trees_ros_interfaces

namespace py_trees_ros_interfaces
{

namespace srv
{

struct OpenBlackboardStream
{
  using Request = py_trees_ros_interfaces::srv::OpenBlackboardStream_Request;
  using Response = py_trees_ros_interfaces::srv::OpenBlackboardStream_Response;
};

}  // namespace srv

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__SRV__DETAIL__OPEN_BLACKBOARD_STREAM__STRUCT_HPP_
