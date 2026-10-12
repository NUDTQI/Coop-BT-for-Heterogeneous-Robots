// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from py_trees_ros_interfaces:msg/Behaviour.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "py_trees_ros_interfaces/msg/detail/behaviour__rosidl_typesupport_introspection_c.h"
#include "py_trees_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "py_trees_ros_interfaces/msg/detail/behaviour__functions.h"
#include "py_trees_ros_interfaces/msg/detail/behaviour__struct.h"


// Include directives for member types
// Member `name`
// Member `class_name`
// Member `additional_detail`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `own_id`
// Member `parent_id`
// Member `tip_id`
// Member `child_ids`
// Member `current_child_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `own_id`
// Member `parent_id`
// Member `tip_id`
// Member `child_ids`
// Member `current_child_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `blackboard_access`
#include "py_trees_ros_interfaces/msg/key_value.h"
// Member `blackboard_access`
#include "py_trees_ros_interfaces/msg/detail/key_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Behaviour__rosidl_typesupport_introspection_c__Behaviour_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  py_trees_ros_interfaces__msg__Behaviour__init(message_memory);
}

void Behaviour__rosidl_typesupport_introspection_c__Behaviour_fini_function(void * message_memory)
{
  py_trees_ros_interfaces__msg__Behaviour__fini(message_memory);
}

size_t Behaviour__rosidl_typesupport_introspection_c__size_function__UUID__child_ids(
  const void * untyped_member)
{
  const unique_identifier_msgs__msg__UUID__Sequence * member =
    (const unique_identifier_msgs__msg__UUID__Sequence *)(untyped_member);
  return member->size;
}

const void * Behaviour__rosidl_typesupport_introspection_c__get_const_function__UUID__child_ids(
  const void * untyped_member, size_t index)
{
  const unique_identifier_msgs__msg__UUID__Sequence * member =
    (const unique_identifier_msgs__msg__UUID__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Behaviour__rosidl_typesupport_introspection_c__get_function__UUID__child_ids(
  void * untyped_member, size_t index)
{
  unique_identifier_msgs__msg__UUID__Sequence * member =
    (unique_identifier_msgs__msg__UUID__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Behaviour__rosidl_typesupport_introspection_c__resize_function__UUID__child_ids(
  void * untyped_member, size_t size)
{
  unique_identifier_msgs__msg__UUID__Sequence * member =
    (unique_identifier_msgs__msg__UUID__Sequence *)(untyped_member);
  unique_identifier_msgs__msg__UUID__Sequence__fini(member);
  return unique_identifier_msgs__msg__UUID__Sequence__init(member, size);
}

size_t Behaviour__rosidl_typesupport_introspection_c__size_function__KeyValue__blackboard_access(
  const void * untyped_member)
{
  const py_trees_ros_interfaces__msg__KeyValue__Sequence * member =
    (const py_trees_ros_interfaces__msg__KeyValue__Sequence *)(untyped_member);
  return member->size;
}

const void * Behaviour__rosidl_typesupport_introspection_c__get_const_function__KeyValue__blackboard_access(
  const void * untyped_member, size_t index)
{
  const py_trees_ros_interfaces__msg__KeyValue__Sequence * member =
    (const py_trees_ros_interfaces__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Behaviour__rosidl_typesupport_introspection_c__get_function__KeyValue__blackboard_access(
  void * untyped_member, size_t index)
{
  py_trees_ros_interfaces__msg__KeyValue__Sequence * member =
    (py_trees_ros_interfaces__msg__KeyValue__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Behaviour__rosidl_typesupport_introspection_c__resize_function__KeyValue__blackboard_access(
  void * untyped_member, size_t size)
{
  py_trees_ros_interfaces__msg__KeyValue__Sequence * member =
    (py_trees_ros_interfaces__msg__KeyValue__Sequence *)(untyped_member);
  py_trees_ros_interfaces__msg__KeyValue__Sequence__fini(member);
  return py_trees_ros_interfaces__msg__KeyValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Behaviour__rosidl_typesupport_introspection_c__Behaviour_message_member_array[14] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__Behaviour, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__Behaviour, class_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "own_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__Behaviour, own_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parent_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__Behaviour, parent_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tip_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__Behaviour, tip_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "child_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__Behaviour, child_ids),  // bytes offset in struct
    NULL,  // default value
    Behaviour__rosidl_typesupport_introspection_c__size_function__UUID__child_ids,  // size() function pointer
    Behaviour__rosidl_typesupport_introspection_c__get_const_function__UUID__child_ids,  // get_const(index) function pointer
    Behaviour__rosidl_typesupport_introspection_c__get_function__UUID__child_ids,  // get(index) function pointer
    Behaviour__rosidl_typesupport_introspection_c__resize_function__UUID__child_ids  // resize(index) function pointer
  },
  {
    "current_child_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__Behaviour, current_child_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__Behaviour, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "additional_detail",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__Behaviour, additional_detail),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blackbox_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__Behaviour, blackbox_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__Behaviour, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__Behaviour, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__Behaviour, is_active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blackboard_access",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(py_trees_ros_interfaces__msg__Behaviour, blackboard_access),  // bytes offset in struct
    NULL,  // default value
    Behaviour__rosidl_typesupport_introspection_c__size_function__KeyValue__blackboard_access,  // size() function pointer
    Behaviour__rosidl_typesupport_introspection_c__get_const_function__KeyValue__blackboard_access,  // get_const(index) function pointer
    Behaviour__rosidl_typesupport_introspection_c__get_function__KeyValue__blackboard_access,  // get(index) function pointer
    Behaviour__rosidl_typesupport_introspection_c__resize_function__KeyValue__blackboard_access  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Behaviour__rosidl_typesupport_introspection_c__Behaviour_message_members = {
  "py_trees_ros_interfaces__msg",  // message namespace
  "Behaviour",  // message name
  14,  // number of fields
  sizeof(py_trees_ros_interfaces__msg__Behaviour),
  Behaviour__rosidl_typesupport_introspection_c__Behaviour_message_member_array,  // message members
  Behaviour__rosidl_typesupport_introspection_c__Behaviour_init_function,  // function to initialize message memory (memory has to be allocated)
  Behaviour__rosidl_typesupport_introspection_c__Behaviour_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Behaviour__rosidl_typesupport_introspection_c__Behaviour_message_type_support_handle = {
  0,
  &Behaviour__rosidl_typesupport_introspection_c__Behaviour_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_py_trees_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, msg, Behaviour)() {
  Behaviour__rosidl_typesupport_introspection_c__Behaviour_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Behaviour__rosidl_typesupport_introspection_c__Behaviour_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Behaviour__rosidl_typesupport_introspection_c__Behaviour_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Behaviour__rosidl_typesupport_introspection_c__Behaviour_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Behaviour__rosidl_typesupport_introspection_c__Behaviour_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Behaviour__rosidl_typesupport_introspection_c__Behaviour_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, py_trees_ros_interfaces, msg, KeyValue)();
  if (!Behaviour__rosidl_typesupport_introspection_c__Behaviour_message_type_support_handle.typesupport_identifier) {
    Behaviour__rosidl_typesupport_introspection_c__Behaviour_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Behaviour__rosidl_typesupport_introspection_c__Behaviour_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
