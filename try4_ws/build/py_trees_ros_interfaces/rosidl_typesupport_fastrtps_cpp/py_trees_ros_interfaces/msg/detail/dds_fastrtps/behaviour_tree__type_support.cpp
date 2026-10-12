// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from py_trees_ros_interfaces:msg/BehaviourTree.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/msg/detail/behaviour_tree__rosidl_typesupport_fastrtps_cpp.hpp"
#include "py_trees_ros_interfaces/msg/detail/behaviour_tree__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace py_trees_ros_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const py_trees_ros_interfaces::msg::Behaviour &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  py_trees_ros_interfaces::msg::Behaviour &);
size_t get_serialized_size(
  const py_trees_ros_interfaces::msg::Behaviour &,
  size_t current_alignment);
size_t
max_serialized_size_Behaviour(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace py_trees_ros_interfaces

namespace diagnostic_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const diagnostic_msgs::msg::KeyValue &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  diagnostic_msgs::msg::KeyValue &);
size_t get_serialized_size(
  const diagnostic_msgs::msg::KeyValue &,
  size_t current_alignment);
size_t
max_serialized_size_KeyValue(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace diagnostic_msgs

namespace py_trees_ros_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const py_trees_ros_interfaces::msg::ActivityItem &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  py_trees_ros_interfaces::msg::ActivityItem &);
size_t get_serialized_size(
  const py_trees_ros_interfaces::msg::ActivityItem &,
  size_t current_alignment);
size_t
max_serialized_size_ActivityItem(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace py_trees_ros_interfaces

namespace py_trees_ros_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const py_trees_ros_interfaces::msg::Statistics &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  py_trees_ros_interfaces::msg::Statistics &);
size_t get_serialized_size(
  const py_trees_ros_interfaces::msg::Statistics &,
  size_t current_alignment);
size_t
max_serialized_size_Statistics(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace py_trees_ros_interfaces


namespace py_trees_ros_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
cdr_serialize(
  const py_trees_ros_interfaces::msg::BehaviourTree & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: behaviours
  {
    size_t size = ros_message.behaviours.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.behaviours[i],
        cdr);
    }
  }
  // Member: changed
  cdr << (ros_message.changed ? true : false);
  // Member: blackboard_on_visited_path
  {
    size_t size = ros_message.blackboard_on_visited_path.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      diagnostic_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.blackboard_on_visited_path[i],
        cdr);
    }
  }
  // Member: blackboard_activity
  {
    size_t size = ros_message.blackboard_activity.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.blackboard_activity[i],
        cdr);
    }
  }
  // Member: statistics
  py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.statistics,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  py_trees_ros_interfaces::msg::BehaviourTree & ros_message)
{
  // Member: behaviours
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.behaviours.resize(size);
    for (size_t i = 0; i < size; i++) {
      py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.behaviours[i]);
    }
  }

  // Member: changed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.changed = tmp ? true : false;
  }

  // Member: blackboard_on_visited_path
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.blackboard_on_visited_path.resize(size);
    for (size_t i = 0; i < size; i++) {
      diagnostic_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.blackboard_on_visited_path[i]);
    }
  }

  // Member: blackboard_activity
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.blackboard_activity.resize(size);
    for (size_t i = 0; i < size; i++) {
      py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.blackboard_activity[i]);
    }
  }

  // Member: statistics
  py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.statistics);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
get_serialized_size(
  const py_trees_ros_interfaces::msg::BehaviourTree & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: behaviours
  {
    size_t array_size = ros_message.behaviours.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.behaviours[index], current_alignment);
    }
  }
  // Member: changed
  {
    size_t item_size = sizeof(ros_message.changed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blackboard_on_visited_path
  {
    size_t array_size = ros_message.blackboard_on_visited_path.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        diagnostic_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.blackboard_on_visited_path[index], current_alignment);
    }
  }
  // Member: blackboard_activity
  {
    size_t array_size = ros_message.blackboard_activity.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.blackboard_activity[index], current_alignment);
    }
  }
  // Member: statistics

  current_alignment +=
    py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.statistics, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
max_serialized_size_BehaviourTree(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: behaviours
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Behaviour(
        full_bounded, current_alignment);
    }
  }

  // Member: changed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: blackboard_on_visited_path
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        diagnostic_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_KeyValue(
        full_bounded, current_alignment);
    }
  }

  // Member: blackboard_activity
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_ActivityItem(
        full_bounded, current_alignment);
    }
  }

  // Member: statistics
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Statistics(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _BehaviourTree__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const py_trees_ros_interfaces::msg::BehaviourTree *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BehaviourTree__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<py_trees_ros_interfaces::msg::BehaviourTree *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BehaviourTree__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const py_trees_ros_interfaces::msg::BehaviourTree *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BehaviourTree__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_BehaviourTree(full_bounded, 0);
}

static message_type_support_callbacks_t _BehaviourTree__callbacks = {
  "py_trees_ros_interfaces::msg",
  "BehaviourTree",
  _BehaviourTree__cdr_serialize,
  _BehaviourTree__cdr_deserialize,
  _BehaviourTree__get_serialized_size,
  _BehaviourTree__max_serialized_size
};

static rosidl_message_type_support_t _BehaviourTree__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BehaviourTree__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace py_trees_ros_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_py_trees_ros_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<py_trees_ros_interfaces::msg::BehaviourTree>()
{
  return &py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::_BehaviourTree__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, py_trees_ros_interfaces, msg, BehaviourTree)() {
  return &py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::_BehaviourTree__handle;
}

#ifdef __cplusplus
}
#endif
