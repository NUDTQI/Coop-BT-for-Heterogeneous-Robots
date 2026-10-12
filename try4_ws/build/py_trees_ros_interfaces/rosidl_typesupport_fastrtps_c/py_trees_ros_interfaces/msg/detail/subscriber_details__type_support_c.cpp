// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from py_trees_ros_interfaces:msg/SubscriberDetails.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/msg/detail/subscriber_details__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "py_trees_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "py_trees_ros_interfaces/msg/detail/subscriber_details__struct.h"
#include "py_trees_ros_interfaces/msg/detail/subscriber_details__functions.h"
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

#include "rosidl_runtime_c/string.h"  // message_type, topic_name
#include "rosidl_runtime_c/string_functions.h"  // message_type, topic_name

// forward declare type support functions


using _SubscriberDetails__ros_msg_type = py_trees_ros_interfaces__msg__SubscriberDetails;

static bool _SubscriberDetails__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SubscriberDetails__ros_msg_type * ros_message = static_cast<const _SubscriberDetails__ros_msg_type *>(untyped_ros_message);
  // Field name: topic_name
  {
    const rosidl_runtime_c__String * str = &ros_message->topic_name;
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

  // Field name: message_type
  {
    const rosidl_runtime_c__String * str = &ros_message->message_type;
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

  // Field name: latched
  {
    cdr << (ros_message->latched ? true : false);
  }

  return true;
}

static bool _SubscriberDetails__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SubscriberDetails__ros_msg_type * ros_message = static_cast<_SubscriberDetails__ros_msg_type *>(untyped_ros_message);
  // Field name: topic_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->topic_name.data) {
      rosidl_runtime_c__String__init(&ros_message->topic_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->topic_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'topic_name'\n");
      return false;
    }
  }

  // Field name: message_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message_type.data) {
      rosidl_runtime_c__String__init(&ros_message->message_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message_type'\n");
      return false;
    }
  }

  // Field name: latched
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->latched = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t get_serialized_size_py_trees_ros_interfaces__msg__SubscriberDetails(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SubscriberDetails__ros_msg_type * ros_message = static_cast<const _SubscriberDetails__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name topic_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->topic_name.size + 1);
  // field.name message_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message_type.size + 1);
  // field.name latched
  {
    size_t item_size = sizeof(ros_message->latched);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SubscriberDetails__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_py_trees_ros_interfaces__msg__SubscriberDetails(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t max_serialized_size_py_trees_ros_interfaces__msg__SubscriberDetails(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: topic_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: message_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: latched
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SubscriberDetails__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_py_trees_ros_interfaces__msg__SubscriberDetails(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SubscriberDetails = {
  "py_trees_ros_interfaces::msg",
  "SubscriberDetails",
  _SubscriberDetails__cdr_serialize,
  _SubscriberDetails__cdr_deserialize,
  _SubscriberDetails__get_serialized_size,
  _SubscriberDetails__max_serialized_size
};

static rosidl_message_type_support_t _SubscriberDetails__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SubscriberDetails,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, SubscriberDetails)() {
  return &_SubscriberDetails__type_support;
}

#if defined(__cplusplus)
}
#endif
