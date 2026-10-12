// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from py_trees_ros_interfaces:srv/IntrospectSubscribers.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/srv/detail/introspect_subscribers__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "py_trees_ros_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "py_trees_ros_interfaces/srv/detail/introspect_subscribers__struct.h"
#include "py_trees_ros_interfaces/srv/detail/introspect_subscribers__functions.h"
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


using _IntrospectSubscribers_Request__ros_msg_type = py_trees_ros_interfaces__srv__IntrospectSubscribers_Request;

static bool _IntrospectSubscribers_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IntrospectSubscribers_Request__ros_msg_type * ros_message = static_cast<const _IntrospectSubscribers_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _IntrospectSubscribers_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IntrospectSubscribers_Request__ros_msg_type * ros_message = static_cast<_IntrospectSubscribers_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t get_serialized_size_py_trees_ros_interfaces__srv__IntrospectSubscribers_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IntrospectSubscribers_Request__ros_msg_type * ros_message = static_cast<const _IntrospectSubscribers_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _IntrospectSubscribers_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_py_trees_ros_interfaces__srv__IntrospectSubscribers_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t max_serialized_size_py_trees_ros_interfaces__srv__IntrospectSubscribers_Request(
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

static size_t _IntrospectSubscribers_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_py_trees_ros_interfaces__srv__IntrospectSubscribers_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_IntrospectSubscribers_Request = {
  "py_trees_ros_interfaces::srv",
  "IntrospectSubscribers_Request",
  _IntrospectSubscribers_Request__cdr_serialize,
  _IntrospectSubscribers_Request__cdr_deserialize,
  _IntrospectSubscribers_Request__get_serialized_size,
  _IntrospectSubscribers_Request__max_serialized_size
};

static rosidl_message_type_support_t _IntrospectSubscribers_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IntrospectSubscribers_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, IntrospectSubscribers_Request)() {
  return &_IntrospectSubscribers_Request__type_support;
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
// #include "py_trees_ros_interfaces/srv/detail/introspect_subscribers__struct.h"
// already included above
// #include "py_trees_ros_interfaces/srv/detail/introspect_subscribers__functions.h"
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

#include "py_trees_ros_interfaces/msg/detail/subscriber_details__functions.h"  // subscriber_details

// forward declare type support functions
size_t get_serialized_size_py_trees_ros_interfaces__msg__SubscriberDetails(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_py_trees_ros_interfaces__msg__SubscriberDetails(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, SubscriberDetails)();


using _IntrospectSubscribers_Response__ros_msg_type = py_trees_ros_interfaces__srv__IntrospectSubscribers_Response;

static bool _IntrospectSubscribers_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IntrospectSubscribers_Response__ros_msg_type * ros_message = static_cast<const _IntrospectSubscribers_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: subscriber_details
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, SubscriberDetails
      )()->data);
    size_t size = ros_message->subscriber_details.size;
    auto array_ptr = ros_message->subscriber_details.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _IntrospectSubscribers_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IntrospectSubscribers_Response__ros_msg_type * ros_message = static_cast<_IntrospectSubscribers_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: subscriber_details
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, SubscriberDetails
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->subscriber_details.data) {
      py_trees_ros_interfaces__msg__SubscriberDetails__Sequence__fini(&ros_message->subscriber_details);
    }
    if (!py_trees_ros_interfaces__msg__SubscriberDetails__Sequence__init(&ros_message->subscriber_details, size)) {
      fprintf(stderr, "failed to create array for field 'subscriber_details'");
      return false;
    }
    auto array_ptr = ros_message->subscriber_details.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t get_serialized_size_py_trees_ros_interfaces__srv__IntrospectSubscribers_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IntrospectSubscribers_Response__ros_msg_type * ros_message = static_cast<const _IntrospectSubscribers_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name subscriber_details
  {
    size_t array_size = ros_message->subscriber_details.size;
    auto array_ptr = ros_message->subscriber_details.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_py_trees_ros_interfaces__msg__SubscriberDetails(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IntrospectSubscribers_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_py_trees_ros_interfaces__srv__IntrospectSubscribers_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_py_trees_ros_interfaces
size_t max_serialized_size_py_trees_ros_interfaces__srv__IntrospectSubscribers_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: subscriber_details
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_py_trees_ros_interfaces__msg__SubscriberDetails(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _IntrospectSubscribers_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_py_trees_ros_interfaces__srv__IntrospectSubscribers_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_IntrospectSubscribers_Response = {
  "py_trees_ros_interfaces::srv",
  "IntrospectSubscribers_Response",
  _IntrospectSubscribers_Response__cdr_serialize,
  _IntrospectSubscribers_Response__cdr_deserialize,
  _IntrospectSubscribers_Response__get_serialized_size,
  _IntrospectSubscribers_Response__max_serialized_size
};

static rosidl_message_type_support_t _IntrospectSubscribers_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IntrospectSubscribers_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, IntrospectSubscribers_Response)() {
  return &_IntrospectSubscribers_Response__type_support;
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
#include "py_trees_ros_interfaces/srv/introspect_subscribers.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t IntrospectSubscribers__callbacks = {
  "py_trees_ros_interfaces::srv",
  "IntrospectSubscribers",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, IntrospectSubscribers_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, IntrospectSubscribers_Response)(),
};

static rosidl_service_type_support_t IntrospectSubscribers__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &IntrospectSubscribers__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, srv, IntrospectSubscribers)() {
  return &IntrospectSubscribers__handle;
}

#if defined(__cplusplus)
}
#endif
