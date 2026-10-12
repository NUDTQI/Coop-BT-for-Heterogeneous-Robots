// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from py_trees_ros_interfaces:srv/OpenSnapshotStream.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/srv/detail/open_snapshot_stream__rosidl_typesupport_fastrtps_cpp.hpp"
#include "py_trees_ros_interfaces/srv/detail/open_snapshot_stream__struct.hpp"

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
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const py_trees_ros_interfaces::msg::SnapshotStreamParameters &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  py_trees_ros_interfaces::msg::SnapshotStreamParameters &);
size_t get_serialized_size(
  const py_trees_ros_interfaces::msg::SnapshotStreamParameters &,
  size_t current_alignment);
size_t
max_serialized_size_SnapshotStreamParameters(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace py_trees_ros_interfaces


namespace py_trees_ros_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
cdr_serialize(
  const py_trees_ros_interfaces::srv::OpenSnapshotStream_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: topic_name
  cdr << ros_message.topic_name;
  // Member: parameters
  py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.parameters,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  py_trees_ros_interfaces::srv::OpenSnapshotStream_Request & ros_message)
{
  // Member: topic_name
  cdr >> ros_message.topic_name;

  // Member: parameters
  py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.parameters);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
get_serialized_size(
  const py_trees_ros_interfaces::srv::OpenSnapshotStream_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: topic_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.topic_name.size() + 1);
  // Member: parameters

  current_alignment +=
    py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.parameters, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
max_serialized_size_OpenSnapshotStream_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: topic_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: parameters
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_SnapshotStreamParameters(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _OpenSnapshotStream_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const py_trees_ros_interfaces::srv::OpenSnapshotStream_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OpenSnapshotStream_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<py_trees_ros_interfaces::srv::OpenSnapshotStream_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OpenSnapshotStream_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const py_trees_ros_interfaces::srv::OpenSnapshotStream_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OpenSnapshotStream_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_OpenSnapshotStream_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _OpenSnapshotStream_Request__callbacks = {
  "py_trees_ros_interfaces::srv",
  "OpenSnapshotStream_Request",
  _OpenSnapshotStream_Request__cdr_serialize,
  _OpenSnapshotStream_Request__cdr_deserialize,
  _OpenSnapshotStream_Request__get_serialized_size,
  _OpenSnapshotStream_Request__max_serialized_size
};

static rosidl_message_type_support_t _OpenSnapshotStream_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OpenSnapshotStream_Request__callbacks,
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
get_message_type_support_handle<py_trees_ros_interfaces::srv::OpenSnapshotStream_Request>()
{
  return &py_trees_ros_interfaces::srv::typesupport_fastrtps_cpp::_OpenSnapshotStream_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, py_trees_ros_interfaces, srv, OpenSnapshotStream_Request)() {
  return &py_trees_ros_interfaces::srv::typesupport_fastrtps_cpp::_OpenSnapshotStream_Request__handle;
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
  const py_trees_ros_interfaces::srv::OpenSnapshotStream_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: topic_name
  cdr << ros_message.topic_name;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  py_trees_ros_interfaces::srv::OpenSnapshotStream_Response & ros_message)
{
  // Member: topic_name
  cdr >> ros_message.topic_name;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
get_serialized_size(
  const py_trees_ros_interfaces::srv::OpenSnapshotStream_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: topic_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.topic_name.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
max_serialized_size_OpenSnapshotStream_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: topic_name
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

static bool _OpenSnapshotStream_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const py_trees_ros_interfaces::srv::OpenSnapshotStream_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OpenSnapshotStream_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<py_trees_ros_interfaces::srv::OpenSnapshotStream_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OpenSnapshotStream_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const py_trees_ros_interfaces::srv::OpenSnapshotStream_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OpenSnapshotStream_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_OpenSnapshotStream_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _OpenSnapshotStream_Response__callbacks = {
  "py_trees_ros_interfaces::srv",
  "OpenSnapshotStream_Response",
  _OpenSnapshotStream_Response__cdr_serialize,
  _OpenSnapshotStream_Response__cdr_deserialize,
  _OpenSnapshotStream_Response__get_serialized_size,
  _OpenSnapshotStream_Response__max_serialized_size
};

static rosidl_message_type_support_t _OpenSnapshotStream_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OpenSnapshotStream_Response__callbacks,
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
get_message_type_support_handle<py_trees_ros_interfaces::srv::OpenSnapshotStream_Response>()
{
  return &py_trees_ros_interfaces::srv::typesupport_fastrtps_cpp::_OpenSnapshotStream_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, py_trees_ros_interfaces, srv, OpenSnapshotStream_Response)() {
  return &py_trees_ros_interfaces::srv::typesupport_fastrtps_cpp::_OpenSnapshotStream_Response__handle;
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

static service_type_support_callbacks_t _OpenSnapshotStream__callbacks = {
  "py_trees_ros_interfaces::srv",
  "OpenSnapshotStream",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, py_trees_ros_interfaces, srv, OpenSnapshotStream_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, py_trees_ros_interfaces, srv, OpenSnapshotStream_Response)(),
};

static rosidl_service_type_support_t _OpenSnapshotStream__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OpenSnapshotStream__callbacks,
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
get_service_type_support_handle<py_trees_ros_interfaces::srv::OpenSnapshotStream>()
{
  return &py_trees_ros_interfaces::srv::typesupport_fastrtps_cpp::_OpenSnapshotStream__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, py_trees_ros_interfaces, srv, OpenSnapshotStream)() {
  return &py_trees_ros_interfaces::srv::typesupport_fastrtps_cpp::_OpenSnapshotStream__handle;
}

#ifdef __cplusplus
}
#endif
