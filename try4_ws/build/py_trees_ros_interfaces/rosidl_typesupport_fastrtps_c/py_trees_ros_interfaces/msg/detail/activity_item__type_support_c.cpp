// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from py_trees_ros_interfaces:msg/ActivityItem.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/msg/detail/activity_item__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "py_trees_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "py_trees_ros_interfaces/msg/detail/activity_item__struct.h"
#include "py_trees_ros_interfaces/msg/detail/activity_item__functions.h"
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

#include "rosidl_runtime_c/string.h"  // activity_type, client_name, current_value, key, previous_value
#include "rosidl_runtime_c/string_functions.h"  // activity_type, client_name, current_value, key, previous_value

// forward declare type support functions


using _ActivityItem__ros_msg_type = py_trees_ros_interfaces__msg__ActivityItem;

static bool _ActivityItem__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActivityItem__ros_msg_type * ros_message = static_cast<const _ActivityItem__ros_msg_type *>(untyped_ros_message);
  // Field name: key
  {
    const rosidl_runtime_c__String * str = &ros_message->key;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: client_name
  {
    const rosidl_runtime_c__String * str = &ros_message->client_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: activity_type
  {
    const rosidl_runtime_c__String * str = &ros_message->activity_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: previous_value
  {
    const rosidl_runtime_c__String * str = &ros_message->previous_value;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: current_value
  {
    const rosidl_runtime_c__String * str = &ros_message->current_value;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ActivityItem__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActivityItem__ros_msg_type * ros_message = static_cast<_ActivityItem__ros_msg_type *>(untyped_ros_message);
  // Field name: key
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->key.data) {
      rosidl_runtime_c__String__init(&ros_message->key);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->key,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'key'\n");
      return false;
    }
  }

  // Field name: client_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->client_name.data) {
      rosidl_runtime_c__String__init(&ros_message->client_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->client_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'client_name'\n");
      return false;
    }
  }

  // Field name: activity_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->activity_type.data) {
      rosidl_runtime_c__String__init(&ros_message->activity_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->activity_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'activity_type'\n");
      return false;
    }
  }

  // Field name: previous_value
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->previous_value.data) {
      rosidl_runtime_c__String__init(&ros_message->previous_value);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->previous_value,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'previous_value'\n");
      return false;
    }
  }

  // Field name: current_value
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->current_value.data) {
      rosidl_runtime_c__String__init(&ros_message->current_value);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->current_value,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'current_value'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t get_serialized_size_py_trees_ros_interfaces__msg__ActivityItem(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActivityItem__ros_msg_type * ros_message = static_cast<const _ActivityItem__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name key
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->key.size + 1);
  // field.name client_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->client_name.size + 1);
  // field.name activity_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->activity_type.size + 1);
  // field.name previous_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->previous_value.size + 1);
  // field.name current_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->current_value.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ActivityItem__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_py_trees_ros_interfaces__msg__ActivityItem(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t max_serialized_size_py_trees_ros_interfaces__msg__ActivityItem(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: key
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: client_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: activity_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: previous_value
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: current_value
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ActivityItem__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_py_trees_ros_interfaces__msg__ActivityItem(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ActivityItem = {
  "py_trees_ros_interfaces::msg",
  "ActivityItem",
  _ActivityItem__cdr_serialize,
  _ActivityItem__cdr_deserialize,
  _ActivityItem__get_serialized_size,
  _ActivityItem__max_serialized_size
};

static rosidl_message_type_support_t _ActivityItem__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActivityItem,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, ActivityItem)() {
  return &_ActivityItem__type_support;
}

#if defined(__cplusplus)
}
#endif
