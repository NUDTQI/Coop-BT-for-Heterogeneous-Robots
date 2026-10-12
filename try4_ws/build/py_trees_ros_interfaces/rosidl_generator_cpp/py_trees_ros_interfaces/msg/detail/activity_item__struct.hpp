// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from py_trees_ros_interfaces:msg/ActivityItem.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__ACTIVITY_ITEM__STRUCT_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__ACTIVITY_ITEM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__py_trees_ros_interfaces__msg__ActivityItem __attribute__((deprecated))
#else
# define DEPRECATED__py_trees_ros_interfaces__msg__ActivityItem __declspec(deprecated)
#endif

namespace py_trees_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActivityItem_
{
  using Type = ActivityItem_<ContainerAllocator>;

  explicit ActivityItem_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
      this->client_name = "";
      this->activity_type = "";
      this->previous_value = "";
      this->current_value = "";
    }
  }

  explicit ActivityItem_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key(_alloc),
    client_name(_alloc),
    activity_type(_alloc),
    previous_value(_alloc),
    current_value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
      this->client_name = "";
      this->activity_type = "";
      this->previous_value = "";
      this->current_value = "";
    }
  }

  // field types and members
  using _key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _key_type key;
  using _client_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _client_name_type client_name;
  using _activity_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _activity_type_type activity_type;
  using _previous_value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _previous_value_type previous_value;
  using _current_value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_value_type current_value;

  // setters for named parameter idiom
  Type & set__key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->key = _arg;
    return *this;
  }
  Type & set__client_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->client_name = _arg;
    return *this;
  }
  Type & set__activity_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->activity_type = _arg;
    return *this;
  }
  Type & set__previous_value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->previous_value = _arg;
    return *this;
  }
  Type & set__current_value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_value = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> READ;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> INITIALISED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> WRITE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ACCESSED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ACCESS_DENIED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> NO_KEY;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> NO_OVERWRITE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> UNSET;

  // pointer types
  using RawPtr =
    py_trees_ros_interfaces::msg::ActivityItem_<ContainerAllocator> *;
  using ConstRawPtr =
    const py_trees_ros_interfaces::msg::ActivityItem_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::msg::ActivityItem_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::msg::ActivityItem_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::msg::ActivityItem_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::msg::ActivityItem_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::msg::ActivityItem_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::msg::ActivityItem_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::msg::ActivityItem_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::msg::ActivityItem_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__py_trees_ros_interfaces__msg__ActivityItem
    std::shared_ptr<py_trees_ros_interfaces::msg::ActivityItem_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__py_trees_ros_interfaces__msg__ActivityItem
    std::shared_ptr<py_trees_ros_interfaces::msg::ActivityItem_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActivityItem_ & other) const
  {
    if (this->key != other.key) {
      return false;
    }
    if (this->client_name != other.client_name) {
      return false;
    }
    if (this->activity_type != other.activity_type) {
      return false;
    }
    if (this->previous_value != other.previous_value) {
      return false;
    }
    if (this->current_value != other.current_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActivityItem_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActivityItem_

// alias to use template instance with default allocator
using ActivityItem =
  py_trees_ros_interfaces::msg::ActivityItem_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ActivityItem_<ContainerAllocator>::READ = "READ";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ActivityItem_<ContainerAllocator>::INITIALISED = "INITIALISED";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ActivityItem_<ContainerAllocator>::WRITE = "WRITE";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ActivityItem_<ContainerAllocator>::ACCESSED = "ACCESSED";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ActivityItem_<ContainerAllocator>::ACCESS_DENIED = "ACCESS_DENIED";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ActivityItem_<ContainerAllocator>::NO_KEY = "NO_KEY";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ActivityItem_<ContainerAllocator>::NO_OVERWRITE = "NO_OVERWRITE";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ActivityItem_<ContainerAllocator>::UNSET = "UNSET";

}  // namespace msg

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__ACTIVITY_ITEM__STRUCT_HPP_
