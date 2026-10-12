// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from py_trees_ros_interfaces:srv/StatusReport.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/srv/detail/status_report__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "py_trees_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "py_trees_ros_interfaces/srv/detail/status_report__struct.h"
#include "py_trees_ros_interfaces/srv/detail/status_report__functions.h"
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


using _StatusReport_Request__ros_msg_type = py_trees_ros_interfaces__srv__StatusReport_Request;

static bool _StatusReport_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StatusReport_Request__ros_msg_type * ros_message = static_cast<const _StatusReport_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _StatusReport_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StatusReport_Request__ros_msg_type * ros_message = static_cast<_StatusReport_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t get_serialized_size_py_trees_ros_interfaces__srv__StatusReport_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StatusReport_Request__ros_msg_type * ros_message = static_cast<const _StatusReport_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StatusReport_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_py_trees_ros_interfaces__srv__StatusReport_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t max_serialized_size_py_trees_ros_interfaces__srv__StatusReport_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _StatusReport_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_py_trees_ros_interfaces__srv__StatusReport_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_StatusReport_Request = {
  "py_trees_ros_interfaces::srv",
  "StatusReport_Request",
  _StatusReport_Request__cdr_serialize,
  _StatusReport_Request__cdr_deserialize,
  _StatusReport_Request__get_serialized_size,
  _StatusReport_Request__max_serialized_size
};

static rosidl_message_type_support_t _StatusReport_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StatusReport_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, StatusReport_Request)() {
  return &_StatusReport_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "py_trees_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "py_trees_ros_interfaces/srv/detail/status_report__struct.h"
// already included above
// #include "py_trees_ros_interfaces/srv/detail/status_report__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "rosidl_runtime_c/string.h"  // report
#include "rosidl_runtime_c/string_functions.h"  // report

// forward declare type support functions


using _StatusReport_Response__ros_msg_type = py_trees_ros_interfaces__srv__StatusReport_Response;

static bool _StatusReport_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StatusReport_Response__ros_msg_type * ros_message = static_cast<const _StatusReport_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: report
  {
    const rosidl_runtime_c__String * str = &ros_message->report;
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

static bool _StatusReport_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StatusReport_Response__ros_msg_type * ros_message = static_cast<_StatusReport_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: report
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->report.data) {
      rosidl_runtime_c__String__init(&ros_message->report);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->report,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'report'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t get_serialized_size_py_trees_ros_interfaces__srv__StatusReport_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StatusReport_Response__ros_msg_type * ros_message = static_cast<const _StatusReport_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name report
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->report.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _StatusReport_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_py_trees_ros_interfaces__srv__StatusReport_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t max_serialized_size_py_trees_ros_interfaces__srv__StatusReport_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: report
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

static size_t _StatusReport_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_py_trees_ros_interfaces__srv__StatusReport_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_StatusReport_Response = {
  "py_trees_ros_interfaces::srv",
  "StatusReport_Response",
  _StatusReport_Response__cdr_serialize,
  _StatusReport_Response__cdr_deserialize,
  _StatusReport_Response__get_serialized_size,
  _StatusReport_Response__max_serialized_size
};

static rosidl_message_type_support_t _StatusReport_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StatusReport_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, StatusReport_Response)() {
  return &_StatusReport_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "py_trees_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "py_trees_ros_interfaces/srv/status_report.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t StatusReport__callbacks = {
  "py_trees_ros_interfaces::srv",
  "StatusReport",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, StatusReport_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, StatusReport_Response)(),
};

static rosidl_service_type_support_t StatusReport__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &StatusReport__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, StatusReport)() {
  return &StatusReport__handle;
}

#if defined(__cplusplus)
}
#endif
