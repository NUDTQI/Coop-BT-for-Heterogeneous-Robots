// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from py_trees_ros_interfaces:msg/KeyValue.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/msg/detail/key_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `key`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

bool
py_trees_ros_interfaces__msg__KeyValue__init(py_trees_ros_interfaces__msg__KeyValue * msg)
{
  if (!msg) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__init(&msg->key)) {
    py_trees_ros_interfaces__msg__KeyValue__fini(msg);
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__init(&msg->value)) {
    py_trees_ros_interfaces__msg__KeyValue__fini(msg);
    return false;
  }
  return true;
}

void
py_trees_ros_interfaces__msg__KeyValue__fini(py_trees_ros_interfaces__msg__KeyValue * msg)
{
  if (!msg) {
    return;
  }
  // key
  rosidl_runtime_c__String__fini(&msg->key);
  // value
  rosidl_runtime_c__String__fini(&msg->value);
}

bool
py_trees_ros_interfaces__msg__KeyValue__are_equal(const py_trees_ros_interfaces__msg__KeyValue * lhs, const py_trees_ros_interfaces__msg__KeyValue * rhs)
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
  // value
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__msg__KeyValue__copy(
  const py_trees_ros_interfaces__msg__KeyValue * input,
  py_trees_ros_interfaces__msg__KeyValue * output)
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
  // value
  if (!rosidl_runtime_c__String__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  return true;
}

py_trees_ros_interfaces__msg__KeyValue *
py_trees_ros_interfaces__msg__KeyValue__create()
{
  py_trees_ros_interfaces__msg__KeyValue * msg = (py_trees_ros_interfaces__msg__KeyValue *)malloc(sizeof(py_trees_ros_interfaces__msg__KeyValue));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__msg__KeyValue));
  bool success = py_trees_ros_interfaces__msg__KeyValue__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__msg__KeyValue__destroy(py_trees_ros_interfaces__msg__KeyValue * msg)
{
  if (msg) {
    py_trees_ros_interfaces__msg__KeyValue__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__msg__KeyValue__Sequence__init(py_trees_ros_interfaces__msg__KeyValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__msg__KeyValue * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__msg__KeyValue *)calloc(size, sizeof(py_trees_ros_interfaces__msg__KeyValue));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__msg__KeyValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__msg__KeyValue__fini(&data[i - 1]);
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
py_trees_ros_interfaces__msg__KeyValue__Sequence__fini(py_trees_ros_interfaces__msg__KeyValue__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__msg__KeyValue__fini(&array->data[i]);
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

py_trees_ros_interfaces__msg__KeyValue__Sequence *
py_trees_ros_interfaces__msg__KeyValue__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__msg__KeyValue__Sequence * array = (py_trees_ros_interfaces__msg__KeyValue__Sequence *)malloc(sizeof(py_trees_ros_interfaces__msg__KeyValue__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__msg__KeyValue__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__msg__KeyValue__Sequence__destroy(py_trees_ros_interfaces__msg__KeyValue__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__msg__KeyValue__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__msg__KeyValue__Sequence__are_equal(const py_trees_ros_interfaces__msg__KeyValue__Sequence * lhs, const py_trees_ros_interfaces__msg__KeyValue__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__msg__KeyValue__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__msg__KeyValue__Sequence__copy(
  const py_trees_ros_interfaces__msg__KeyValue__Sequence * input,
  py_trees_ros_interfaces__msg__KeyValue__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__msg__KeyValue);
    py_trees_ros_interfaces__msg__KeyValue * data =
      (py_trees_ros_interfaces__msg__KeyValue *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__msg__KeyValue__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__msg__KeyValue__fini(&data[i]);
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
    if (!py_trees_ros_interfaces__msg__KeyValue__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
