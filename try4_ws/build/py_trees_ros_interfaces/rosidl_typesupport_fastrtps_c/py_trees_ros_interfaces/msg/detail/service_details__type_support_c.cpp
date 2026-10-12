// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from py_trees_ros_interfaces:msg/ServiceDetails.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/msg/detail/service_details__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "py_trees_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "py_trees_ros_interfaces/msg/detail/service_details__struct.h"
#include "py_trees_ros_interfaces/msg/detail/service_details__functions.h"
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

#include "rosidl_runtime_c/string.h"  // service_name, service_type
#include "rosidl_runtime_c/string_functions.h"  // service_name, service_type

// forward declare type support functions


using _ServiceDetails__ros_msg_type = py_trees_ros_interfaces__msg__ServiceDetails;

static bool _ServiceDetails__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ServiceDetails__ros_msg_type * ros_message = static_cast<const _ServiceDetails__ros_msg_type *>(untyped_ros_message);
  // Field name: service_name
  {
    const rosidl_runtime_c__String * str = &ros_message->service_name;
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

  // Field name: service_type
  {
    const rosidl_runtime_c__String * str = &ros_message->service_type;
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

static bool _ServiceDetails__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ServiceDetails__ros_msg_type * ros_message = static_cast<_ServiceDetails__ros_msg_type *>(untyped_ros_message);
  // Field name: service_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->service_name.data) {
      rosidl_runtime_c__String__init(&ros_message->service_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->service_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'service_name'\n");
      return false;
    }
  }

  // Field name: service_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->service_type.data) {
      rosidl_runtime_c__String__init(&ros_message->service_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->service_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'service_type'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t get_serialized_size_py_trees_ros_interfaces__msg__ServiceDetails(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ServiceDetails__ros_msg_type * ros_message = static_cast<const _ServiceDetails__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name service_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->service_name.size + 1);
  // field.name service_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->service_type.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ServiceDetails__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_py_trees_ros_interfaces__msg__ServiceDetails(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t max_serialized_size_py_trees_ros_interfaces__msg__ServiceDetails(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: service_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: service_type
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

static size_t _ServiceDetails__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_py_trees_ros_interfaces__msg__ServiceDetails(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ServiceDetails = {
  "py_trees_ros_interfaces::msg",
  "ServiceDetails",
  _ServiceDetails__cdr_serialize,
  _ServiceDetails__cdr_deserialize,
  _ServiceDetails__get_serialized_size,
  _ServiceDetails__max_serialized_size
};

static rosidl_message_type_support_t _ServiceDetails__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ServiceDetails,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, ServiceDetails)() {
  return &_ServiceDetails__type_support;
}

#if defined(__cplusplus)
}
#endif
