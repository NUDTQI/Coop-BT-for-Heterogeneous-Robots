// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from py_trees_ros_interfaces:srv/OpenBlackboardStream.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/srv/detail/open_blackboard_stream__rosidl_typesupport_fastrtps_cpp.hpp"
#include "py_trees_ros_interfaces/srv/detail/open_blackboard_stream__struct.hpp"

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

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
cdr_serialize(
  const py_trees_ros_interfaces::srv::OpenBlackboardStream_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: variables
  {
    cdr << ros_message.variables;
  }
  // Member: filter_on_visited_path
  cdr << (ros_message.filter_on_visited_path ? true : false);
  // Member: with_activity_stream
  cdr << (ros_message.with_activity_stream ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  py_trees_ros_interfaces::srv::OpenBlackboardStream_Request & ros_message)
{
  // Member: variables
  {
    cdr >> ros_message.variables;
  }

  // Member: filter_on_visited_path
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.filter_on_visited_path = tmp ? true : false;
  }

  // Member: with_activity_stream
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.with_activity_stream = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
get_serialized_size(
  const py_trees_ros_interfaces::srv::OpenBlackboardStream_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: variables
  {
    size_t array_size = ros_message.variables.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.variables[index].size() + 1);
    }
  }
  // Member: filter_on_visited_path
  {
    size_t item_size = sizeof(ros_message.filter_on_visited_path);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: with_activity_stream
  {
    size_t item_size = sizeof(ros_message.with_activity_stream);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
max_serialized_size_OpenBlackboardStream_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: variables
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

  // Member: filter_on_visited_path
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: with_activity_stream
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _OpenBlackboardStream_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const py_trees_ros_interfaces::srv::OpenBlackboardStream_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OpenBlackboardStream_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<py_trees_ros_interfaces::srv::OpenBlackboardStream_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OpenBlackboardStream_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const py_trees_ros_interfaces::srv::OpenBlackboardStream_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OpenBlackboardStream_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_OpenBlackboardStream_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _OpenBlackboardStream_Request__callbacks = {
  "py_trees_ros_interfaces::srv",
  "OpenBlackboardStream_Request",
  _OpenBlackboardStream_Request__cdr_serialize,
  _OpenBlackboardStream_Request__cdr_deserialize,
  _OpenBlackboardStream_Request__get_serialized_size,
  _OpenBlackboardStream_Request__max_serialized_size
};

static rosidl_message_type_support_t _OpenBlackboardStream_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OpenBlackboardStream_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace py_trees_ros_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_py_trees_ros_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<py_trees_ros_interfaces::srv::OpenBlackboardStream_Request>()
{
  return &py_trees_ros_interfaces::srv::typesupport_fastrtps_cpp::_OpenBlackboardStream_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, py_trees_ros_interfaces, srv, OpenBlackboardStream_Request)() {
  return &py_trees_ros_interfaces::srv::typesupport_fastrtps_cpp::_OpenBlackboardStream_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace py_trees_ros_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
cdr_serialize(
  const py_trees_ros_interfaces::srv::OpenBlackboardStream_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: topic
  cdr << ros_message.topic;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  py_trees_ros_interfaces::srv::OpenBlackboardStream_Response & ros_message)
{
  // Member: topic
  cdr >> ros_message.topic;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
get_serialized_size(
  const py_trees_ros_interfaces::srv::OpenBlackboardStream_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.topic.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
max_serialized_size_OpenBlackboardStream_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: topic
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

static bool _OpenBlackboardStream_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const py_trees_ros_interfaces::srv::OpenBlackboardStream_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OpenBlackboardStream_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<py_trees_ros_interfaces::srv::OpenBlackboardStream_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OpenBlackboardStream_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const py_trees_ros_interfaces::srv::OpenBlackboardStream_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OpenBlackboardStream_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_OpenBlackboardStream_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _OpenBlackboardStream_Response__callbacks = {
  "py_trees_ros_interfaces::srv",
  "OpenBlackboardStream_Response",
  _OpenBlackboardStream_Response__cdr_serialize,
  _OpenBlackboardStream_Response__cdr_deserialize,
  _OpenBlackboardStream_Response__get_serialized_size,
  _OpenBlackboardStream_Response__max_serialized_size
};

static rosidl_message_type_support_t _OpenBlackboardStream_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OpenBlackboardStream_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace py_trees_ros_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_py_trees_ros_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<py_trees_ros_interfaces::srv::OpenBlackboardStream_Response>()
{
  return &py_trees_ros_interfaces::srv::typesupport_fastrtps_cpp::_OpenBlackboardStream_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, py_trees_ros_interfaces, srv, OpenBlackboardStream_Response)() {
  return &py_trees_ros_interfaces::srv::typesupport_fastrtps_cpp::_OpenBlackboardStream_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace py_trees_ros_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _OpenBlackboardStream__callbacks = {
  "py_trees_ros_interfaces::srv",
  "OpenBlackboardStream",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, py_trees_ros_interfaces, srv, OpenBlackboardStream_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, py_trees_ros_interfaces, srv, OpenBlackboardStream_Response)(),
};

static rosidl_service_type_support_t _OpenBlackboardStream__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OpenBlackboardStream__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace py_trees_ros_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_py_trees_ros_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<py_trees_ros_interfaces::srv::OpenBlackboardStream>()
{
  return &py_trees_ros_interfaces::srv::typesupport_fastrtps_cpp::_OpenBlackboardStream__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, py_trees_ros_interfaces, srv, OpenBlackboardStream)() {
  return &py_trees_ros_interfaces::srv::typesupport_fastrtps_cpp::_OpenBlackboardStream__handle;
}

#ifdef __cplusplus
}
#endif
