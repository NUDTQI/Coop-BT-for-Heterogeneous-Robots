// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from py_trees_ros_interfaces:msg/PublisherDetails.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/msg/detail/publisher_details__rosidl_typesupport_fastrtps_cpp.hpp"
#include "py_trees_ros_interfaces/msg/detail/publisher_details__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
cdr_serialize(
  const py_trees_ros_interfaces::msg::PublisherDetails & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: topic_name
  cdr << ros_message.topic_name;
  // Member: message_type
  cdr << ros_message.message_type;
  // Member: latched
  cdr << (ros_message.latched ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  py_trees_ros_interfaces::msg::PublisherDetails & ros_message)
{
  // Member: topic_name
  cdr >> ros_message.topic_name;

  // Member: message_type
  cdr >> ros_message.message_type;

  // Member: latched
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.latched = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
get_serialized_size(
  const py_trees_ros_interfaces::msg::PublisherDetails & ros_message,
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
  // Member: message_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message_type.size() + 1);
  // Member: latched
  {
    size_t item_size = sizeof(ros_message.latched);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
max_serialized_size_PublisherDetails(
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

  // Member: message_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: latched
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _PublisherDetails__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const py_trees_ros_interfaces::msg::PublisherDetails *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PublisherDetails__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<py_trees_ros_interfaces::msg::PublisherDetails *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PublisherDetails__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const py_trees_ros_interfaces::msg::PublisherDetails *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PublisherDetails__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PublisherDetails(full_bounded, 0);
}

static message_type_support_callbacks_t _PublisherDetails__callbacks = {
  "py_trees_ros_interfaces::msg",
  "PublisherDetails",
  _PublisherDetails__cdr_serialize,
  _PublisherDetails__cdr_deserialize,
  _PublisherDetails__get_serialized_size,
  _PublisherDetails__max_serialized_size
};

static rosidl_message_type_support_t _PublisherDetails__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PublisherDetails__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace py_trees_ros_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_py_trees_ros_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<py_trees_ros_interfaces::msg::PublisherDetails>()
{
  return &py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::_PublisherDetails__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, py_trees_ros_interfaces, msg, PublisherDetails)() {
  return &py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::_PublisherDetails__handle;
}

#ifdef __cplusplus
}
#endif
