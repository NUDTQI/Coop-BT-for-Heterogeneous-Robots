// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from py_trees_ros_interfaces:msg/ActivityItem.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/msg/detail/activity_item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `key`
// Member `client_name`
// Member `activity_type`
// Member `previous_value`
// Member `current_value`
#include "rosidl_runtime_c/string_functions.h"

bool
py_trees_ros_interfaces__msg__ActivityItem__init(py_trees_ros_interfaces__msg__ActivityItem * msg)
{
  if (!msg) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__init(&msg->key)) {
    py_trees_ros_interfaces__msg__ActivityItem__fini(msg);
    return false;
  }
  // client_name
  if (!rosidl_runtime_c__String__init(&msg->client_name)) {
    py_trees_ros_interfaces__msg__ActivityItem__fini(msg);
    return false;
  }
  // activity_type
  if (!rosidl_runtime_c__String__init(&msg->activity_type)) {
    py_trees_ros_interfaces__msg__ActivityItem__fini(msg);
    return false;
  }
  // previous_value
  if (!rosidl_runtime_c__String__init(&msg->previous_value)) {
    py_trees_ros_interfaces__msg__ActivityItem__fini(msg);
    return false;
  }
  // current_value
  if (!rosidl_runtime_c__String__init(&msg->current_value)) {
    py_trees_ros_interfaces__msg__ActivityItem__fini(msg);
    return false;
  }
  return true;
}

void
py_trees_ros_interfaces__msg__ActivityItem__fini(py_trees_ros_interfaces__msg__ActivityItem * msg)
{
  if (!msg) {
    return;
  }
  // key
  rosidl_runtime_c__String__fini(&msg->key);
  // client_name
  rosidl_runtime_c__String__fini(&msg->client_name);
  // activity_type
  rosidl_runtime_c__String__fini(&msg->activity_type);
  // previous_value
  rosidl_runtime_c__String__fini(&msg->previous_value);
  // current_value
  rosidl_runtime_c__String__fini(&msg->current_value);
}

bool
py_trees_ros_interfaces__msg__ActivityItem__are_equal(const py_trees_ros_interfaces__msg__ActivityItem * lhs, const py_trees_ros_interfaces__msg__ActivityItem * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->key), &(rhs->key)))
  {
    return false;
  }
  // client_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->client_name), &(rhs->client_name)))
  {
    return false;
  }
  // activity_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->activity_type), &(rhs->activity_type)))
  {
    return false;
  }
  // previous_value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->previous_value), &(rhs->previous_value)))
  {
    return false;
  }
  // current_value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_value), &(rhs->current_value)))
  {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__msg__ActivityItem__copy(
  const py_trees_ros_interfaces__msg__ActivityItem * input,
  py_trees_ros_interfaces__msg__ActivityItem * output)
{
  if (!input || !output) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__copy(
      &(input->key), &(output->key)))
  {
    return false;
  }
  // client_name
  if (!rosidl_runtime_c__String__copy(
      &(input->client_name), &(output->client_name)))
  {
    return false;
  }
  // activity_type
  if (!rosidl_runtime_c__String__copy(
      &(input->activity_type), &(output->activity_type)))
  {
    return false;
  }
  // previous_value
  if (!rosidl_runtime_c__String__copy(
      &(input->previous_value), &(output->previous_value)))
  {
    return false;
  }
  // current_value
  if (!rosidl_runtime_c__String__copy(
      &(input->current_value), &(output->current_value)))
  {
    return false;
  }
  return true;
}

py_trees_ros_interfaces__msg__ActivityItem *
py_trees_ros_interfaces__msg__ActivityItem__create()
{
  py_trees_ros_interfaces__msg__ActivityItem * msg = (py_trees_ros_interfaces__msg__ActivityItem *)malloc(sizeof(py_trees_ros_interfaces__msg__ActivityItem));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__msg__ActivityItem));
  bool success = py_trees_ros_interfaces__msg__ActivityItem__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__msg__ActivityItem__destroy(py_trees_ros_interfaces__msg__ActivityItem * msg)
{
  if (msg) {
    py_trees_ros_interfaces__msg__ActivityItem__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__msg__ActivityItem__Sequence__init(py_trees_ros_interfaces__msg__ActivityItem__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__msg__ActivityItem * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__msg__ActivityItem *)calloc(size, sizeof(py_trees_ros_interfaces__msg__ActivityItem));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__msg__ActivityItem__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__msg__ActivityItem__fini(&data[i - 1]);
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
py_trees_ros_interfaces__msg__ActivityItem__Sequence__fini(py_trees_ros_interfaces__msg__ActivityItem__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__msg__ActivityItem__fini(&array->data[i]);
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

py_trees_ros_interfaces__msg__ActivityItem__Sequence *
py_trees_ros_interfaces__msg__ActivityItem__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__msg__ActivityItem__Sequence * array = (py_trees_ros_interfaces__msg__ActivityItem__Sequence *)malloc(sizeof(py_trees_ros_interfaces__msg__ActivityItem__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__msg__ActivityItem__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__msg__ActivityItem__Sequence__destroy(py_trees_ros_interfaces__msg__ActivityItem__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__msg__ActivityItem__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__msg__ActivityItem__Sequence__are_equal(const py_trees_ros_interfaces__msg__ActivityItem__Sequence * lhs, const py_trees_ros_interfaces__msg__ActivityItem__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__msg__ActivityItem__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__msg__ActivityItem__Sequence__copy(
  const py_trees_ros_interfaces__msg__ActivityItem__Sequence * input,
  py_trees_ros_interfaces__msg__ActivityItem__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__msg__ActivityItem);
    py_trees_ros_interfaces__msg__ActivityItem * data =
      (py_trees_ros_interfaces__msg__ActivityItem *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__msg__ActivityItem__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__msg__ActivityItem__fini(&data[i]);
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
    if (!py_trees_ros_interfaces__msg__ActivityItem__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
