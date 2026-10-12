// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from py_trees_ros_interfaces:msg/ServiceDetails.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/msg/detail/service_details__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `service_name`
// Member `service_type`
#include "rosidl_runtime_c/string_functions.h"

bool
py_trees_ros_interfaces__msg__ServiceDetails__init(py_trees_ros_interfaces__msg__ServiceDetails * msg)
{
  if (!msg) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__init(&msg->service_name)) {
    py_trees_ros_interfaces__msg__ServiceDetails__fini(msg);
    return false;
  }
  // service_type
  if (!rosidl_runtime_c__String__init(&msg->service_type)) {
    py_trees_ros_interfaces__msg__ServiceDetails__fini(msg);
    return false;
  }
  return true;
}

void
py_trees_ros_interfaces__msg__ServiceDetails__fini(py_trees_ros_interfaces__msg__ServiceDetails * msg)
{
  if (!msg) {
    return;
  }
  // service_name
  rosidl_runtime_c__String__fini(&msg->service_name);
  // service_type
  rosidl_runtime_c__String__fini(&msg->service_type);
}

bool
py_trees_ros_interfaces__msg__ServiceDetails__are_equal(const py_trees_ros_interfaces__msg__ServiceDetails * lhs, const py_trees_ros_interfaces__msg__ServiceDetails * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->service_name), &(rhs->service_name)))
  {
    return false;
  }
  // service_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->service_type), &(rhs->service_type)))
  {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__msg__ServiceDetails__copy(
  const py_trees_ros_interfaces__msg__ServiceDetails * input,
  py_trees_ros_interfaces__msg__ServiceDetails * output)
{
  if (!input || !output) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__copy(
      &(input->service_name), &(output->service_name)))
  {
    return false;
  }
  // service_type
  if (!rosidl_runtime_c__String__copy(
      &(input->service_type), &(output->service_type)))
  {
    return false;
  }
  return true;
}

py_trees_ros_interfaces__msg__ServiceDetails *
py_trees_ros_interfaces__msg__ServiceDetails__create()
{
  py_trees_ros_interfaces__msg__ServiceDetails * msg = (py_trees_ros_interfaces__msg__ServiceDetails *)malloc(sizeof(py_trees_ros_interfaces__msg__ServiceDetails));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__msg__ServiceDetails));
  bool success = py_trees_ros_interfaces__msg__ServiceDetails__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__msg__ServiceDetails__destroy(py_trees_ros_interfaces__msg__ServiceDetails * msg)
{
  if (msg) {
    py_trees_ros_interfaces__msg__ServiceDetails__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__msg__ServiceDetails__Sequence__init(py_trees_ros_interfaces__msg__ServiceDetails__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__msg__ServiceDetails * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__msg__ServiceDetails *)calloc(size, sizeof(py_trees_ros_interfaces__msg__ServiceDetails));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__msg__ServiceDetails__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__msg__ServiceDetails__fini(&data[i - 1]);
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
py_trees_ros_interfaces__msg__ServiceDetails__Sequence__fini(py_trees_ros_interfaces__msg__ServiceDetails__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__msg__ServiceDetails__fini(&array->data[i]);
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

py_trees_ros_interfaces__msg__ServiceDetails__Sequence *
py_trees_ros_interfaces__msg__ServiceDetails__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__msg__ServiceDetails__Sequence * array = (py_trees_ros_interfaces__msg__ServiceDetails__Sequence *)malloc(sizeof(py_trees_ros_interfaces__msg__ServiceDetails__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__msg__ServiceDetails__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__msg__ServiceDetails__Sequence__destroy(py_trees_ros_interfaces__msg__ServiceDetails__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__msg__ServiceDetails__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__msg__ServiceDetails__Sequence__are_equal(const py_trees_ros_interfaces__msg__ServiceDetails__Sequence * lhs, const py_trees_ros_interfaces__msg__ServiceDetails__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__msg__ServiceDetails__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__msg__ServiceDetails__Sequence__copy(
  const py_trees_ros_interfaces__msg__ServiceDetails__Sequence * input,
  py_trees_ros_interfaces__msg__ServiceDetails__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__msg__ServiceDetails);
    py_trees_ros_interfaces__msg__ServiceDetails * data =
      (py_trees_ros_interfaces__msg__ServiceDetails *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__msg__ServiceDetails__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__msg__ServiceDetails__fini(&data[i]);
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
    if (!py_trees_ros_interfaces__msg__ServiceDetails__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
