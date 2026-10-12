// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from py_trees_ros_interfaces:srv/OpenSnapshotStream.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/srv/detail/open_snapshot_stream__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "py_trees_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "py_trees_ros_interfaces/srv/detail/open_snapshot_stream__struct.h"
#include "py_trees_ros_interfaces/srv/detail/open_snapshot_stream__functions.h"
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

#include "py_trees_ros_interfaces/msg/detail/snapshot_stream_parameters__functions.h"  // parameters
#include "rosidl_runtime_c/string.h"  // topic_name
#include "rosidl_runtime_c/string_functions.h"  // topic_name

// forward declare type support functions
size_t get_serialized_size_py_trees_ros_interfaces__msg__SnapshotStreamParameters(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_py_trees_ros_interfaces__msg__SnapshotStreamParameters(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, SnapshotStreamParameters)();


using _OpenSnapshotStream_Request__ros_msg_type = py_trees_ros_interfaces__srv__OpenSnapshotStream_Request;

static bool _OpenSnapshotStream_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OpenSnapshotStream_Request__ros_msg_type * ros_message = static_cast<const _OpenSnapshotStream_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: parameters
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, SnapshotStreamParameters
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->parameters, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _OpenSnapshotStream_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OpenSnapshotStream_Request__ros_msg_type * ros_message = static_cast<_OpenSnapshotStream_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: parameters
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, SnapshotStreamParameters
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->parameters))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t get_serialized_size_py_trees_ros_interfaces__srv__OpenSnapshotStream_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OpenSnapshotStream_Request__ros_msg_type * ros_message = static_cast<const _OpenSnapshotStream_Request__ros_msg_type *>(untyped_ros_message);
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
  // field.name parameters

  current_alignment += get_serialized_size_py_trees_ros_interfaces__msg__SnapshotStreamParameters(
    &(ros_message->parameters), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _OpenSnapshotStream_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_py_trees_ros_interfaces__srv__OpenSnapshotStream_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t max_serialized_size_py_trees_ros_interfaces__srv__OpenSnapshotStream_Request(
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
  // member: parameters
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_py_trees_ros_interfaces__msg__SnapshotStreamParameters(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _OpenSnapshotStream_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_py_trees_ros_interfaces__srv__OpenSnapshotStream_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OpenSnapshotStream_Request = {
  "py_trees_ros_interfaces::srv",
  "OpenSnapshotStream_Request",
  _OpenSnapshotStream_Request__cdr_serialize,
  _OpenSnapshotStream_Request__cdr_deserialize,
  _OpenSnapshotStream_Request__get_serialized_size,
  _OpenSnapshotStream_Request__max_serialized_size
};

static rosidl_message_type_support_t _OpenSnapshotStream_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OpenSnapshotStream_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, OpenSnapshotStream_Request)() {
  return &_OpenSnapshotStream_Request__type_support;
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
// #include "py_trees_ros_interfaces/srv/detail/open_snapshot_stream__struct.h"
// already included above
// #include "py_trees_ros_interfaces/srv/detail/open_snapshot_stream__functions.h"
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

// already included above
// #include "rosidl_runtime_c/string.h"  // topic_name
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // topic_name

// forward declare type support functions


using _OpenSnapshotStream_Response__ros_msg_type = py_trees_ros_interfaces__srv__OpenSnapshotStream_Response;

static bool _OpenSnapshotStream_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OpenSnapshotStream_Response__ros_msg_type * ros_message = static_cast<const _OpenSnapshotStream_Response__ros_msg_type *>(untyped_ros_message);
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

  return true;
}

static bool _OpenSnapshotStream_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OpenSnapshotStream_Response__ros_msg_type * ros_message = static_cast<_OpenSnapshotStream_Response__ros_msg_type *>(untyped_ros_message);
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

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t get_serialized_size_py_trees_ros_interfaces__srv__OpenSnapshotStream_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OpenSnapshotStream_Response__ros_msg_type * ros_message = static_cast<const _OpenSnapshotStream_Response__ros_msg_type *>(untyped_ros_message);
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

  return current_alignment - initial_alignment;
}

static uint32_t _OpenSnapshotStream_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_py_trees_ros_interfaces__srv__OpenSnapshotStream_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t max_serialized_size_py_trees_ros_interfaces__srv__OpenSnapshotStream_Response(
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

  return current_alignment - initial_alignment;
}

static size_t _OpenSnapshotStream_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_py_trees_ros_interfaces__srv__OpenSnapshotStream_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OpenSnapshotStream_Response = {
  "py_trees_ros_interfaces::srv",
  "OpenSnapshotStream_Response",
  _OpenSnapshotStream_Response__cdr_serialize,
  _OpenSnapshotStream_Response__cdr_deserialize,
  _OpenSnapshotStream_Response__get_serialized_size,
  _OpenSnapshotStream_Response__max_serialized_size
};

static rosidl_message_type_support_t _OpenSnapshotStream_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OpenSnapshotStream_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, OpenSnapshotStream_Response)() {
  return &_OpenSnapshotStream_Response__type_support;
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
#include "py_trees_ros_interfaces/srv/open_snapshot_stream.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t OpenSnapshotStream__callbacks = {
  "py_trees_ros_interfaces::srv",
  "OpenSnapshotStream",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, OpenSnapshotStream_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, OpenSnapshotStream_Response)(),
};

static rosidl_service_type_support_t OpenSnapshotStream__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &OpenSnapshotStream__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, OpenSnapshotStream)() {
  return &OpenSnapshotStream__handle;
}

#if defined(__cplusplus)
}
#endif
