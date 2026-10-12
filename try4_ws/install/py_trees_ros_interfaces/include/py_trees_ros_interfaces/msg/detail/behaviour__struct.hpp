// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from py_trees_ros_interfaces:msg/Behaviour.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR__STRUCT_HPP_
#define PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'own_id'
// Member 'parent_id'
// Member 'tip_id'
// Member 'child_ids'
// Member 'current_child_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'blackboard_access'
#include "py_trees_ros_interfaces/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__py_trees_ros_interfaces__msg__Behaviour __attribute__((deprecated))
#else
# define DEPRECATED__py_trees_ros_interfaces__msg__Behaviour __declspec(deprecated)
#endif

namespace py_trees_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Behaviour_
{
  using Type = Behaviour_<ContainerAllocator>;

  explicit Behaviour_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : own_id(_init),
    parent_id(_init),
    tip_id(_init),
    current_child_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->class_name = "";
      this->type = 0;
      this->additional_detail = "";
      this->blackbox_level = 0;
      this->status = 0;
      this->message = "";
      this->is_active = false;
    }
  }

  explicit Behaviour_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    class_name(_alloc),
    own_id(_alloc, _init),
    parent_id(_alloc, _init),
    tip_id(_alloc, _init),
    current_child_id(_alloc, _init),
    additional_detail(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->class_name = "";
      this->type = 0;
      this->additional_detail = "";
      this->blackbox_level = 0;
      this->status = 0;
      this->message = "";
      this->is_active = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_name_type class_name;
  using _own_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _own_id_type own_id;
  using _parent_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _parent_id_type parent_id;
  using _tip_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _tip_id_type tip_id;
  using _child_ids_type =
    std::vector<unique_identifier_msgs::msg::UUID_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unique_identifier_msgs::msg::UUID_<ContainerAllocator>>>;
  _child_ids_type child_ids;
  using _current_child_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _current_child_id_type current_child_id;
  using _type_type =
    uint8_t;
  _type_type type;
  using _additional_detail_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _additional_detail_type additional_detail;
  using _blackbox_level_type =
    uint8_t;
  _blackbox_level_type blackbox_level;
  using _status_type =
    uint8_t;
  _status_type status;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _is_active_type =
    bool;
  _is_active_type is_active;
  using _blackboard_access_type =
    std::vector<py_trees_ros_interfaces::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<py_trees_ros_interfaces::msg::KeyValue_<ContainerAllocator>>>;
  _blackboard_access_type blackboard_access;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }
  Type & set__own_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->own_id = _arg;
    return *this;
  }
  Type & set__parent_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->parent_id = _arg;
    return *this;
  }
  Type & set__tip_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->tip_id = _arg;
    return *this;
  }
  Type & set__child_ids(
    const std::vector<unique_identifier_msgs::msg::UUID_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unique_identifier_msgs::msg::UUID_<ContainerAllocator>>> & _arg)
  {
    this->child_ids = _arg;
    return *this;
  }
  Type & set__current_child_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->current_child_id = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__additional_detail(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->additional_detail = _arg;
    return *this;
  }
  Type & set__blackbox_level(
    const uint8_t & _arg)
  {
    this->blackbox_level = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__is_active(
    const bool & _arg)
  {
    this->is_active = _arg;
    return *this;
  }
  Type & set__blackboard_access(
    const std::vector<py_trees_ros_interfaces::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<py_trees_ros_interfaces::msg::KeyValue_<ContainerAllocator>>> & _arg)
  {
    this->blackboard_access = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t INVALID =
    1u;
  static constexpr uint8_t RUNNING =
    2u;
  static constexpr uint8_t SUCCESS =
    3u;
  static constexpr uint8_t FAILURE =
    4u;
  static constexpr uint8_t UNKNOWN_TYPE =
    0u;
  static constexpr uint8_t BEHAVIOUR =
    1u;
  static constexpr uint8_t SEQUENCE =
    2u;
  static constexpr uint8_t SELECTOR =
    3u;
  static constexpr uint8_t PARALLEL =
    4u;
  static constexpr uint8_t CHOOSER =
    5u;
  static constexpr uint8_t DECORATOR =
    6u;
  static constexpr uint8_t BLACKBOX_LEVEL_DETAIL =
    1u;
  static constexpr uint8_t BLACKBOX_LEVEL_COMPONENT =
    2u;
  static constexpr uint8_t BLACKBOX_LEVEL_BIG_PICTURE =
    3u;
  static constexpr uint8_t BLACKBOX_LEVEL_NOT_A_BLACKBOX =
    4u;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> BLACKBOARD_ACCESS_READ;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> BLACKBOARD_ACCESS_WRITE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> BLACKBOARD_ACCESS_EXCLUSIVE_WRITE;

  // pointer types
  using RawPtr =
    py_trees_ros_interfaces::msg::Behaviour_<ContainerAllocator> *;
  using ConstRawPtr =
    const py_trees_ros_interfaces::msg::Behaviour_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::msg::Behaviour_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<py_trees_ros_interfaces::msg::Behaviour_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::msg::Behaviour_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::msg::Behaviour_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      py_trees_ros_interfaces::msg::Behaviour_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<py_trees_ros_interfaces::msg::Behaviour_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::msg::Behaviour_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<py_trees_ros_interfaces::msg::Behaviour_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__py_trees_ros_interfaces__msg__Behaviour
    std::shared_ptr<py_trees_ros_interfaces::msg::Behaviour_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__py_trees_ros_interfaces__msg__Behaviour
    std::shared_ptr<py_trees_ros_interfaces::msg::Behaviour_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Behaviour_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->class_name != other.class_name) {
      return false;
    }
    if (this->own_id != other.own_id) {
      return false;
    }
    if (this->parent_id != other.parent_id) {
      return false;
    }
    if (this->tip_id != other.tip_id) {
      return false;
    }
    if (this->child_ids != other.child_ids) {
      return false;
    }
    if (this->current_child_id != other.current_child_id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->additional_detail != other.additional_detail) {
      return false;
    }
    if (this->blackbox_level != other.blackbox_level) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->is_active != other.is_active) {
      return false;
    }
    if (this->blackboard_access != other.blackboard_access) {
      return false;
    }
    return true;
  }
  bool operator!=(const Behaviour_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Behaviour_

// alias to use template instance with default allocator
using Behaviour =
  py_trees_ros_interfaces::msg::Behaviour_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Behaviour_<ContainerAllocator>::INVALID;
template<typename ContainerAllocator>
constexpr uint8_t Behaviour_<ContainerAllocator>::RUNNING;
template<typename ContainerAllocator>
constexpr uint8_t Behaviour_<ContainerAllocator>::SUCCESS;
template<typename ContainerAllocator>
constexpr uint8_t Behaviour_<ContainerAllocator>::FAILURE;
template<typename ContainerAllocator>
constexpr uint8_t Behaviour_<ContainerAllocator>::UNKNOWN_TYPE;
template<typename ContainerAllocator>
constexpr uint8_t Behaviour_<ContainerAllocator>::BEHAVIOUR;
template<typename ContainerAllocator>
constexpr uint8_t Behaviour_<ContainerAllocator>::SEQUENCE;
template<typename ContainerAllocator>
constexpr uint8_t Behaviour_<ContainerAllocator>::SELECTOR;
template<typename ContainerAllocator>
constexpr uint8_t Behaviour_<ContainerAllocator>::PARALLEL;
template<typename ContainerAllocator>
constexpr uint8_t Behaviour_<ContainerAllocator>::CHOOSER;
template<typename ContainerAllocator>
constexpr uint8_t Behaviour_<ContainerAllocator>::DECORATOR;
template<typename ContainerAllocator>
constexpr uint8_t Behaviour_<ContainerAllocator>::BLACKBOX_LEVEL_DETAIL;
template<typename ContainerAllocator>
constexpr uint8_t Behaviour_<ContainerAllocator>::BLACKBOX_LEVEL_COMPONENT;
template<typename ContainerAllocator>
constexpr uint8_t Behaviour_<ContainerAllocator>::BLACKBOX_LEVEL_BIG_PICTURE;
template<typename ContainerAllocator>
constexpr uint8_t Behaviour_<ContainerAllocator>::BLACKBOX_LEVEL_NOT_A_BLACKBOX;
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Behaviour_<ContainerAllocator>::BLACKBOARD_ACCESS_READ = "r";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Behaviour_<ContainerAllocator>::BLACKBOARD_ACCESS_WRITE = "w";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Behaviour_<ContainerAllocator>::BLACKBOARD_ACCESS_EXCLUSIVE_WRITE = "x";

}  // namespace msg

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__MSG__DETAIL__BEHAVIOUR__STRUCT_HPP_
