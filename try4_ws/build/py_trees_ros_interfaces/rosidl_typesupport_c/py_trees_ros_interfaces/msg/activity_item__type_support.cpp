// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from py_trees_ros_interfaces:msg/ActivityItem.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "py_trees_ros_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "py_trees_ros_interfaces/msg/detail/activity_item__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace py_trees_ros_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _ActivityItem_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ActivityItem_type_support_ids_t;

static const _ActivityItem_type_support_ids_t _ActivityItem_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ActivityItem_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ActivityItem_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ActivityItem_type_support_symbol_names_t _ActivityItem_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, py_trees_ros_interfaces, msg, ActivityItem)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, msg, ActivityItem)),
  }
};

typedef struct _ActivityItem_type_support_data_t
{
  void * data[2];
} _ActivityItem_type_support_data_t;

static _ActivityItem_type_support_data_t _ActivityItem_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ActivityItem_message_typesupport_map = {
  2,
  "py_trees_ros_interfaces",
  &_ActivityItem_message_typesupport_ids.typesupport_identifier[0],
  &_ActivityItem_message_typesupport_symbol_names.symbol_name[0],
  &_ActivityItem_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ActivityItem_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ActivityItem_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace py_trees_ros_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_py_trees_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, py_trees_ros_interfaces, msg, ActivityItem)() {
  return &::py_trees_ros_interfaces::msg::rosidl_typesupport_c::ActivityItem_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
