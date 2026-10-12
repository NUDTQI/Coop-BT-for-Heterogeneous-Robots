// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from py_trees_ros_interfaces:msg/Statistics.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/msg/detail/statistics__rosidl_typesupport_fastrtps_cpp.hpp"
#include "py_trees_ros_interfaces/msg/detail/statistics__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace py_trees_ros_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
cdr_serialize(
  const py_trees_ros_interfaces::msg::Statistics & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: count
  cdr << ros_message.count;
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: tick_duration
  cdr << ros_message.tick_duration;
  // Member: tick_duration_average
  cdr << ros_message.tick_duration_average;
  // Member: tick_duration_variance
  cdr << ros_message.tick_duration_variance;
  // Member: tick_interval
  cdr << ros_message.tick_interval;
  // Member: tick_interval_average
  cdr << ros_message.tick_interval_average;
  // Member: tick_interval_variance
  cdr << ros_message.tick_interval_variance;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  py_trees_ros_interfaces::msg::Statistics & ros_message)
{
  // Member: count
  cdr >> ros_message.count;

  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: tick_duration
  cdr >> ros_message.tick_duration;

  // Member: tick_duration_average
  cdr >> ros_message.tick_duration_average;

  // Member: tick_duration_variance
  cdr >> ros_message.tick_duration_variance;

  // Member: tick_interval
  cdr >> ros_message.tick_interval;

  // Member: tick_interval_average
  cdr >> ros_message.tick_interval_average;

  // Member: tick_interval_variance
  cdr >> ros_message.tick_interval_variance;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
get_serialized_size(
  const py_trees_ros_interfaces::msg::Statistics & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: count
  {
    size_t item_size = sizeof(ros_message.count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);
  // Member: tick_duration
  {
    size_t item_size = sizeof(ros_message.tick_duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tick_duration_average
  {
    size_t item_size = sizeof(ros_message.tick_duration_average);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tick_duration_variance
  {
    size_t item_size = sizeof(ros_message.tick_duration_variance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tick_interval
  {
    size_t item_size = sizeof(ros_message.tick_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tick_interval_average
  {
    size_t item_size = sizeof(ros_message.tick_interval_average);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tick_interval_variance
  {
    size_t item_size = sizeof(ros_message.tick_interval_variance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_py_trees_ros_interfaces
max_serialized_size_Statistics(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  // Member: tick_duration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tick_duration_average
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tick_duration_variance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tick_interval
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tick_interval_average
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tick_interval_variance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Statistics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const py_trees_ros_interfaces::msg::Statistics *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Statistics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<py_trees_ros_interfaces::msg::Statistics *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Statistics__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const py_trees_ros_interfaces::msg::Statistics *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Statistics__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Statistics(full_bounded, 0);
}

static message_type_support_callbacks_t _Statistics__callbacks = {
  "py_trees_ros_interfaces::msg",
  "Statistics",
  _Statistics__cdr_serialize,
  _Statistics__cdr_deserialize,
  _Statistics__get_serialized_size,
  _Statistics__max_serialized_size
};

static rosidl_message_type_support_t _Statistics__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Statistics__callbacks,
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
get_message_type_support_handle<py_trees_ros_interfaces::msg::Statistics>()
{
  return &py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::_Statistics__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, py_trees_ros_interfaces, msg, Statistics)() {
  return &py_trees_ros_interfaces::msg::typesupport_fastrtps_cpp::_Statistics__handle;
}

#ifdef __cplusplus
}
#endif
