// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from py_trees_ros_interfaces:msg/Behaviour.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/msg/detail/behaviour__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


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
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `blackboard_access`
#include "py_trees_ros_interfaces/msg/detail/key_value__functions.h"

bool
py_trees_ros_interfaces__msg__Behaviour__init(py_trees_ros_interfaces__msg__Behaviour * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    py_trees_ros_interfaces__msg__Behaviour__fini(msg);
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    py_trees_ros_interfaces__msg__Behaviour__fini(msg);
    return false;
  }
  // own_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->own_id)) {
    py_trees_ros_interfaces__msg__Behaviour__fini(msg);
    return false;
  }
  // parent_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->parent_id)) {
    py_trees_ros_interfaces__msg__Behaviour__fini(msg);
    return false;
  }
  // tip_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->tip_id)) {
    py_trees_ros_interfaces__msg__Behaviour__fini(msg);
    return false;
  }
  // child_ids
  if (!unique_identifier_msgs__msg__UUID__Sequence__init(&msg->child_ids, 0)) {
    py_trees_ros_interfaces__msg__Behaviour__fini(msg);
    return false;
  }
  // current_child_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->current_child_id)) {
    py_trees_ros_interfaces__msg__Behaviour__fini(msg);
    return false;
  }
  // type
  // additional_detail
  if (!rosidl_runtime_c__String__init(&msg->additional_detail)) {
    py_trees_ros_interfaces__msg__Behaviour__fini(msg);
    return false;
  }
  // blackbox_level
  // status
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    py_trees_ros_interfaces__msg__Behaviour__fini(msg);
    return false;
  }
  // is_active
  // blackboard_access
  if (!py_trees_ros_interfaces__msg__KeyValue__Sequence__init(&msg->blackboard_access, 0)) {
    py_trees_ros_interfaces__msg__Behaviour__fini(msg);
    return false;
  }
  return true;
}

void
py_trees_ros_interfaces__msg__Behaviour__fini(py_trees_ros_interfaces__msg__Behaviour * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
  // own_id
  unique_identifier_msgs__msg__UUID__fini(&msg->own_id);
  // parent_id
  unique_identifier_msgs__msg__UUID__fini(&msg->parent_id);
  // tip_id
  unique_identifier_msgs__msg__UUID__fini(&msg->tip_id);
  // child_ids
  unique_identifier_msgs__msg__UUID__Sequence__fini(&msg->child_ids);
  // current_child_id
  unique_identifier_msgs__msg__UUID__fini(&msg->current_child_id);
  // type
  // additional_detail
  rosidl_runtime_c__String__fini(&msg->additional_detail);
  // blackbox_level
  // status
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // is_active
  // blackboard_access
  py_trees_ros_interfaces__msg__KeyValue__Sequence__fini(&msg->blackboard_access);
}

bool
py_trees_ros_interfaces__msg__Behaviour__are_equal(const py_trees_ros_interfaces__msg__Behaviour * lhs, const py_trees_ros_interfaces__msg__Behaviour * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  // own_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->own_id), &(rhs->own_id)))
  {
    return false;
  }
  // parent_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->parent_id), &(rhs->parent_id)))
  {
    return false;
  }
  // tip_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->tip_id), &(rhs->tip_id)))
  {
    return false;
  }
  // child_ids
  if (!unique_identifier_msgs__msg__UUID__Sequence__are_equal(
      &(lhs->child_ids), &(rhs->child_ids)))
  {
    return false;
  }
  // current_child_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->current_child_id), &(rhs->current_child_id)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // additional_detail
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->additional_detail), &(rhs->additional_detail)))
  {
    return false;
  }
  // blackbox_level
  if (lhs->blackbox_level != rhs->blackbox_level) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // is_active
  if (lhs->is_active != rhs->is_active) {
    return false;
  }
  // blackboard_access
  if (!py_trees_ros_interfaces__msg__KeyValue__Sequence__are_equal(
      &(lhs->blackboard_access), &(rhs->blackboard_access)))
  {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__msg__Behaviour__copy(
  const py_trees_ros_interfaces__msg__Behaviour * input,
  py_trees_ros_interfaces__msg__Behaviour * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  // own_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->own_id), &(output->own_id)))
  {
    return false;
  }
  // parent_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->parent_id), &(output->parent_id)))
  {
    return false;
  }
  // tip_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->tip_id), &(output->tip_id)))
  {
    return false;
  }
  // child_ids
  if (!unique_identifier_msgs__msg__UUID__Sequence__copy(
      &(input->child_ids), &(output->child_ids)))
  {
    return false;
  }
  // current_child_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->current_child_id), &(output->current_child_id)))
  {
    return false;
  }
  // type
  output->type = input->type;
  // additional_detail
  if (!rosidl_runtime_c__String__copy(
      &(input->additional_detail), &(output->additional_detail)))
  {
    return false;
  }
  // blackbox_level
  output->blackbox_level = input->blackbox_level;
  // status
  output->status = input->status;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // is_active
  output->is_active = input->is_active;
  // blackboard_access
  if (!py_trees_ros_interfaces__msg__KeyValue__Sequence__copy(
      &(input->blackboard_access), &(output->blackboard_access)))
  {
    return false;
  }
  return true;
}

py_trees_ros_interfaces__msg__Behaviour *
py_trees_ros_interfaces__msg__Behaviour__create()
{
  py_trees_ros_interfaces__msg__Behaviour * msg = (py_trees_ros_interfaces__msg__Behaviour *)malloc(sizeof(py_trees_ros_interfaces__msg__Behaviour));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__msg__Behaviour));
  bool success = py_trees_ros_interfaces__msg__Behaviour__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__msg__Behaviour__destroy(py_trees_ros_interfaces__msg__Behaviour * msg)
{
  if (msg) {
    py_trees_ros_interfaces__msg__Behaviour__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__msg__Behaviour__Sequence__init(py_trees_ros_interfaces__msg__Behaviour__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__msg__Behaviour * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__msg__Behaviour *)calloc(size, sizeof(py_trees_ros_interfaces__msg__Behaviour));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__msg__Behaviour__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__msg__Behaviour__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
py_trees_ros_interfaces__msg__Behaviour__Sequence__fini(py_trees_ros_interfaces__msg__Behaviour__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__msg__Behaviour__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

py_trees_ros_interfaces__msg__Behaviour__Sequence *
py_trees_ros_interfaces__msg__Behaviour__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__msg__Behaviour__Sequence * array = (py_trees_ros_interfaces__msg__Behaviour__Sequence *)malloc(sizeof(py_trees_ros_interfaces__msg__Behaviour__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__msg__Behaviour__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__msg__Behaviour__Sequence__destroy(py_trees_ros_interfaces__msg__Behaviour__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__msg__Behaviour__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__msg__Behaviour__Sequence__are_equal(const py_trees_ros_interfaces__msg__Behaviour__Sequence * lhs, const py_trees_ros_interfaces__msg__Behaviour__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__msg__Behaviour__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__msg__Behaviour__Sequence__copy(
  const py_trees_ros_interfaces__msg__Behaviour__Sequence * input,
  py_trees_ros_interfaces__msg__Behaviour__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__msg__Behaviour);
    py_trees_ros_interfaces__msg__Behaviour * data =
      (py_trees_ros_interfaces__msg__Behaviour *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__msg__Behaviour__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__msg__Behaviour__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!py_trees_ros_interfaces__msg__Behaviour__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
