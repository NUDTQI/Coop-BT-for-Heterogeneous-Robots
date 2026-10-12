// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from py_trees_ros_interfaces:srv/OpenBlackboardStream.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/srv/detail/open_blackboard_stream__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "py_trees_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "py_trees_ros_interfaces/srv/detail/open_blackboard_stream__struct.h"
#include "py_trees_ros_interfaces/srv/detail/open_blackboard_stream__functions.h"
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

#include "rosidl_runtime_c/string.h"  // variables
#include "rosidl_runtime_c/string_functions.h"  // variables

// forward declare type support functions


using _OpenBlackboardStream_Request__ros_msg_type = py_trees_ros_interfaces__srv__OpenBlackboardStream_Request;

static bool _OpenBlackboardStream_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OpenBlackboardStream_Request__ros_msg_type * ros_message = static_cast<const _OpenBlackboardStream_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: variables
  {
    size_t size = ros_message->variables.size;
    auto array_ptr = ros_message->variables.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: filter_on_visited_path
  {
    cdr << (ros_message->filter_on_visited_path ? true : false);
  }

  // Field name: with_activity_stream
  {
    cdr << (ros_message->with_activity_stream ? true : false);
  }

  return true;
}

static bool _OpenBlackboardStream_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OpenBlackboardStream_Request__ros_msg_type * ros_message = static_cast<_OpenBlackboardStream_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: variables
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->variables.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->variables);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->variables, size)) {
      fprintf(stderr, "failed to create array for field 'variables'");
      return false;
    }
    auto array_ptr = ros_message->variables.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'variables'\n");
        return false;
      }
    }
  }

  // Field name: filter_on_visited_path
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->filter_on_visited_path = tmp ? true : false;
  }

  // Field name: with_activity_stream
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->with_activity_stream = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t get_serialized_size_py_trees_ros_interfaces__srv__OpenBlackboardStream_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OpenBlackboardStream_Request__ros_msg_type * ros_message = static_cast<const _OpenBlackboardStream_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name variables
  {
    size_t array_size = ros_message->variables.size;
    auto array_ptr = ros_message->variables.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name filter_on_visited_path
  {
    size_t item_size = sizeof(ros_message->filter_on_visited_path);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name with_activity_stream
  {
    size_t item_size = sizeof(ros_message->with_activity_stream);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OpenBlackboardStream_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_py_trees_ros_interfaces__srv__OpenBlackboardStream_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t max_serialized_size_py_trees_ros_interfaces__srv__OpenBlackboardStream_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: variables
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: filter_on_visited_path
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: with_activity_stream
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _OpenBlackboardStream_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_py_trees_ros_interfaces__srv__OpenBlackboardStream_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OpenBlackboardStream_Request = {
  "py_trees_ros_interfaces::srv",
  "OpenBlackboardStream_Request",
  _OpenBlackboardStream_Request__cdr_serialize,
  _OpenBlackboardStream_Request__cdr_deserialize,
  _OpenBlackboardStream_Request__get_serialized_size,
  _OpenBlackboardStream_Request__max_serialized_size
};

static rosidl_message_type_support_t _OpenBlackboardStream_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OpenBlackboardStream_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, OpenBlackboardStream_Request)() {
  return &_OpenBlackboardStream_Request__type_support;
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
// #include "py_trees_ros_interfaces/srv/detail/open_blackboard_stream__struct.h"
// already included above
// #include "py_trees_ros_interfaces/srv/detail/open_blackboard_stream__functions.h"
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
// #include "rosidl_runtime_c/string.h"  // topic
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // topic

// forward declare type support functions


using _OpenBlackboardStream_Response__ros_msg_type = py_trees_ros_interfaces__srv__OpenBlackboardStream_Response;

static bool _OpenBlackboardStream_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OpenBlackboardStream_Response__ros_msg_type * ros_message = static_cast<const _OpenBlackboardStream_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: topic
  {
    const rosidl_runtime_c__String * str = &ros_message->topic;
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

static bool _OpenBlackboardStream_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OpenBlackboardStream_Response__ros_msg_type * ros_message = static_cast<_OpenBlackboardStream_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->topic.data) {
      rosidl_runtime_c__String__init(&ros_message->topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'topic'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t get_serialized_size_py_trees_ros_interfaces__srv__OpenBlackboardStream_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OpenBlackboardStream_Response__ros_msg_type * ros_message = static_cast<const _OpenBlackboardStream_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->topic.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _OpenBlackboardStream_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_py_trees_ros_interfaces__srv__OpenBlackboardStream_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t max_serialized_size_py_trees_ros_interfaces__srv__OpenBlackboardStream_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: topic
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

static size_t _OpenBlackboardStream_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_py_trees_ros_interfaces__srv__OpenBlackboardStream_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OpenBlackboardStream_Response = {
  "py_trees_ros_interfaces::srv",
  "OpenBlackboardStream_Response",
  _OpenBlackboardStream_Response__cdr_serialize,
  _OpenBlackboardStream_Response__cdr_deserialize,
  _OpenBlackboardStream_Response__get_serialized_size,
  _OpenBlackboardStream_Response__max_serialized_size
};

static rosidl_message_type_support_t _OpenBlackboardStream_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OpenBlackboardStream_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, OpenBlackboardStream_Response)() {
  return &_OpenBlackboardStream_Response__type_support;
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
#include "py_trees_ros_interfaces/srv/open_blackboard_stream.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t OpenBlackboardStream__callbacks = {
  "py_trees_ros_interfaces::srv",
  "OpenBlackboardStream",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, OpenBlackboardStream_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, OpenBlackboardStream_Response)(),
};

static rosidl_service_type_support_t OpenBlackboardStream__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &OpenBlackboardStream__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, OpenBlackboardStream)() {
  return &OpenBlackboardStream__handle;
}

#if defined(__cplusplus)
}
#endif
