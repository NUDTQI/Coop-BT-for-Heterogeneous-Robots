// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from py_trees_ros_interfaces:msg/SnapshotStreamParameters.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/msg/detail/snapshot_stream_parameters__rosidl_typesupport_fastrtps_cpp.hpp"
#include "py_trees_ros_interfaces/msg/detail/snapshot_stream_parameters__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
cdr_serialize(
  const py_trees_ros_interfaces::msg::SnapshotStreamParameters & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: snapshot_period
  cdr << ros_message.snapshot_period;
  // Member: blackboard_data
  cdr << (ros_message.blackboard_data ? true : false);
  // Member: blackboard_activity
  cdr << (ros_message.blackboard_activity ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  py_trees_ros_interfaces::msg::SnapshotStreamParameters & ros_message)
{
  // Member: snapshot_period
  cdr >> ros_message.snapshot_period;

  // Member: blackboard_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.blackboard_data = tmp ? true : false;
  }

  // Member: blackboard_activity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.blackboard_activity = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
get_serialized_size(
  const py_trees_ros_interfaces::msg::SnapshotStreamParameters & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: snapshot_period
  {
    size_t item_size = sizeof(ros_message.snapshot_period);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blackboard_data
  {
    size_t item_size = sizeof(ros_message.blackboard_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blackboard_activity
  {
    size_t item_size = sizeof(ros_message.blackboard_activity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
max_serialized_size_SnapshotStreamParameters(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: snapshot_period
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: blackboard_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: blackboard_activity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SnapshotStreamParameters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const py_trees_ros_interfaces::msg::SnapshotStreamParameters *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SnapshotStreamParameters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<py_trees_ros_interfaces::msg::SnapshotStreamParameters *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SnapshotStreamParameters__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const py_trees_ros_interfaces::msg::SnapshotStreamParameters *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SnapshotStreamParameters__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SnapshotStreamParameters(full_bounded, 0);
}

static message_type_support_callbacks_t _SnapshotStreamParameters__callbacks = {
  "py_trees_ros_interfaces::msg",
  "SnapshotStreamParameters",
  _SnapshotStreamParameters__cdr_serialize,
  _SnapshotStreamParameters__cdr_deserialize,
  _SnapshotStreamParameters__get_serialized_size,
  _SnapshotStreamParameters__max_serialized_size
};

static rosidl_message_type_support_t _SnapshotStreamParameters__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SnapshotStreamParameters__callbacks,
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
get_message_type_support_handle<py_trees_ros_interfaces::msg::SnapshotStreamParameters>()
{
  return &py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::_SnapshotStreamParameters__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, py_trees_ros_interfaces, msg, SnapshotStreamParameters)() {
  return &py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::_SnapshotStreamParameters__handle;
}

#ifdef __cplusplus
}
#endif
