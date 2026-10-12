// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from py_trees_ros_interfaces:msg/SnapshotStreamParameters.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/msg/detail/snapshot_stream_parameters__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "py_trees_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "py_trees_ros_interfaces/msg/detail/snapshot_stream_parameters__struct.h"
#include "py_trees_ros_interfaces/msg/detail/snapshot_stream_parameters__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SnapshotStreamParameters__ros_msg_type = py_trees_ros_interfaces__msg__SnapshotStreamParameters;

static bool _SnapshotStreamParameters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SnapshotStreamParameters__ros_msg_type * ros_message = static_cast<const _SnapshotStreamParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: snapshot_period
  {
    cdr << ros_message->snapshot_period;
  }

  // Field name: blackboard_data
  {
    cdr << (ros_message->blackboard_data ? true : false);
  }

  // Field name: blackboard_activity
  {
    cdr << (ros_message->blackboard_activity ? true : false);
  }

  return true;
}

static bool _SnapshotStreamParameters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SnapshotStreamParameters__ros_msg_type * ros_message = static_cast<_SnapshotStreamParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: snapshot_period
  {
    cdr >> ros_message->snapshot_period;
  }

  // Field name: blackboard_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->blackboard_data = tmp ? true : false;
  }

  // Field name: blackboard_activity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->blackboard_activity = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t get_serialized_size_py_trees_ros_interfaces__msg__SnapshotStreamParameters(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SnapshotStreamParameters__ros_msg_type * ros_message = static_cast<const _SnapshotStreamParameters__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name snapshot_period
  {
    size_t item_size = sizeof(ros_message->snapshot_period);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blackboard_data
  {
    size_t item_size = sizeof(ros_message->blackboard_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blackboard_activity
  {
    size_t item_size = sizeof(ros_message->blackboard_activity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SnapshotStreamParameters__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_py_trees_ros_interfaces__msg__SnapshotStreamParameters(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t max_serialized_size_py_trees_ros_interfaces__msg__SnapshotStreamParameters(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: snapshot_period
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: blackboard_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: blackboard_activity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SnapshotStreamParameters__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_py_trees_ros_interfaces__msg__SnapshotStreamParameters(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SnapshotStreamParameters = {
  "py_trees_ros_interfaces::msg",
  "SnapshotStreamParameters",
  _SnapshotStreamParameters__cdr_serialize,
  _SnapshotStreamParameters__cdr_deserialize,
  _SnapshotStreamParameters__get_serialized_size,
  _SnapshotStreamParameters__max_serialized_size
};

static rosidl_message_type_support_t _SnapshotStreamParameters__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SnapshotStreamParameters,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, SnapshotStreamParameters)() {
  return &_SnapshotStreamParameters__type_support;
}

#if defined(__cplusplus)
}
#endif
