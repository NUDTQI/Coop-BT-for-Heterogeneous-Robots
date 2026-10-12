// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from py_trees_ros_interfaces:msg/BehaviourTree.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/msg/detail/behaviour_tree__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "py_trees_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "py_trees_ros_interfaces/msg/detail/behaviour_tree__struct.h"
#include "py_trees_ros_interfaces/msg/detail/behaviour_tree__functions.h"
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

#include "diagnostic_msgs/msg/detail/key_value__functions.h"  // blackboard_on_visited_path
#include "py_trees_ros_interfaces/msg/detail/activity_item__functions.h"  // blackboard_activity
#include "py_trees_ros_interfaces/msg/detail/behaviour__functions.h"  // behaviours
#include "py_trees_ros_interfaces/msg/detail/statistics__functions.h"  // statistics

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_py_trees_ros_interfaces
size_t get_serialized_size_diagnostic_msgs__msg__KeyValue(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_py_trees_ros_interfaces
size_t max_serialized_size_diagnostic_msgs__msg__KeyValue(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_py_trees_ros_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, KeyValue)();
size_t get_serialized_size_py_trees_ros_interfaces__msg__ActivityItem(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_py_trees_ros_interfaces__msg__ActivityItem(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, ActivityItem)();
size_t get_serialized_size_py_trees_ros_interfaces__msg__Behaviour(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_py_trees_ros_interfaces__msg__Behaviour(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, Behaviour)();
size_t get_serialized_size_py_trees_ros_interfaces__msg__Statistics(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_py_trees_ros_interfaces__msg__Statistics(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, Statistics)();


using _BehaviourTree__ros_msg_type = py_trees_ros_interfaces__msg__BehaviourTree;

static bool _BehaviourTree__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BehaviourTree__ros_msg_type * ros_message = static_cast<const _BehaviourTree__ros_msg_type *>(untyped_ros_message);
  // Field name: behaviours
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, Behaviour
      )()->data);
    size_t size = ros_message->behaviours.size;
    auto array_ptr = ros_message->behaviours.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: changed
  {
    cdr << (ros_message->changed ? true : false);
  }

  // Field name: blackboard_on_visited_path
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, KeyValue
      )()->data);
    size_t size = ros_message->blackboard_on_visited_path.size;
    auto array_ptr = ros_message->blackboard_on_visited_path.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: blackboard_activity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, ActivityItem
      )()->data);
    size_t size = ros_message->blackboard_activity.size;
    auto array_ptr = ros_message->blackboard_activity.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: statistics
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, Statistics
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->statistics, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _BehaviourTree__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BehaviourTree__ros_msg_type * ros_message = static_cast<_BehaviourTree__ros_msg_type *>(untyped_ros_message);
  // Field name: behaviours
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, Behaviour
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->behaviours.data) {
      py_trees_ros_interfaces__msg__Behaviour__Sequence__fini(&ros_message->behaviours);
    }
    if (!py_trees_ros_interfaces__msg__Behaviour__Sequence__init(&ros_message->behaviours, size)) {
      fprintf(stderr, "failed to create array for field 'behaviours'");
      return false;
    }
    auto array_ptr = ros_message->behaviours.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: changed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->changed = tmp ? true : false;
  }

  // Field name: blackboard_on_visited_path
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, diagnostic_msgs, msg, KeyValue
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->blackboard_on_visited_path.data) {
      diagnostic_msgs__msg__KeyValue__Sequence__fini(&ros_message->blackboard_on_visited_path);
    }
    if (!diagnostic_msgs__msg__KeyValue__Sequence__init(&ros_message->blackboard_on_visited_path, size)) {
      fprintf(stderr, "failed to create array for field 'blackboard_on_visited_path'");
      return false;
    }
    auto array_ptr = ros_message->blackboard_on_visited_path.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: blackboard_activity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, ActivityItem
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->blackboard_activity.data) {
      py_trees_ros_interfaces__msg__ActivityItem__Sequence__fini(&ros_message->blackboard_activity);
    }
    if (!py_trees_ros_interfaces__msg__ActivityItem__Sequence__init(&ros_message->blackboard_activity, size)) {
      fprintf(stderr, "failed to create array for field 'blackboard_activity'");
      return false;
    }
    auto array_ptr = ros_message->blackboard_activity.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: statistics
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, Statistics
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->statistics))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t get_serialized_size_py_trees_ros_interfaces__msg__BehaviourTree(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BehaviourTree__ros_msg_type * ros_message = static_cast<const _BehaviourTree__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name behaviours
  {
    size_t array_size = ros_message->behaviours.size;
    auto array_ptr = ros_message->behaviours.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_py_trees_ros_interfaces__msg__Behaviour(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name changed
  {
    size_t item_size = sizeof(ros_message->changed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blackboard_on_visited_path
  {
    size_t array_size = ros_message->blackboard_on_visited_path.size;
    auto array_ptr = ros_message->blackboard_on_visited_path.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_diagnostic_msgs__msg__KeyValue(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name blackboard_activity
  {
    size_t array_size = ros_message->blackboard_activity.size;
    auto array_ptr = ros_message->blackboard_activity.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_py_trees_ros_interfaces__msg__ActivityItem(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name statistics

  current_alignment += get_serialized_size_py_trees_ros_interfaces__msg__Statistics(
    &(ros_message->statistics), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _BehaviourTree__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_py_trees_ros_interfaces__msg__BehaviourTree(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t max_serialized_size_py_trees_ros_interfaces__msg__BehaviourTree(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: behaviours
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_py_trees_ros_interfaces__msg__Behaviour(
        full_bounded, current_alignment);
    }
  }
  // member: changed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: blackboard_on_visited_path
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_diagnostic_msgs__msg__KeyValue(
        full_bounded, current_alignment);
    }
  }
  // member: blackboard_activity
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_py_trees_ros_interfaces__msg__ActivityItem(
        full_bounded, current_alignment);
    }
  }
  // member: statistics
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_py_trees_ros_interfaces__msg__Statistics(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _BehaviourTree__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_py_trees_ros_interfaces__msg__BehaviourTree(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BehaviourTree = {
  "py_trees_ros_interfaces::msg",
  "BehaviourTree",
  _BehaviourTree__cdr_serialize,
  _BehaviourTree__cdr_deserialize,
  _BehaviourTree__get_serialized_size,
  _BehaviourTree__max_serialized_size
};

static rosidl_message_type_support_t _BehaviourTree__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BehaviourTree,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, BehaviourTree)() {
  return &_BehaviourTree__type_support;
}

#if defined(__cplusplus)
}
#endif
