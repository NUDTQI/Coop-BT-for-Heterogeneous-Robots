// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from py_trees_ros_interfaces:msg/Statistics.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/msg/detail/statistics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
py_trees_ros_interfaces__msg__Statistics__init(py_trees_ros_interfaces__msg__Statistics * msg)
{
  if (!msg) {
    return false;
  }
  // count
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    py_trees_ros_interfaces__msg__Statistics__fini(msg);
    return false;
  }
  // tick_duration
  // tick_duration_average
  // tick_duration_variance
  // tick_interval
  // tick_interval_average
  // tick_interval_variance
  return true;
}

void
py_trees_ros_interfaces__msg__Statistics__fini(py_trees_ros_interfaces__msg__Statistics * msg)
{
  if (!msg) {
    return;
  }
  // count
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // tick_duration
  // tick_duration_average
  // tick_duration_variance
  // tick_interval
  // tick_interval_average
  // tick_interval_variance
}

bool
py_trees_ros_interfaces__msg__Statistics__are_equal(const py_trees_ros_interfaces__msg__Statistics * lhs, const py_trees_ros_interfaces__msg__Statistics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // tick_duration
  if (lhs->tick_duration != rhs->tick_duration) {
    return false;
  }
  // tick_duration_average
  if (lhs->tick_duration_average != rhs->tick_duration_average) {
    return false;
  }
  // tick_duration_variance
  if (lhs->tick_duration_variance != rhs->tick_duration_variance) {
    return false;
  }
  // tick_interval
  if (lhs->tick_interval != rhs->tick_interval) {
    return false;
  }
  // tick_interval_average
  if (lhs->tick_interval_average != rhs->tick_interval_average) {
    return false;
  }
  // tick_interval_variance
  if (lhs->tick_interval_variance != rhs->tick_interval_variance) {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__msg__Statistics__copy(
  const py_trees_ros_interfaces__msg__Statistics * input,
  py_trees_ros_interfaces__msg__Statistics * output)
{
  if (!input || !output) {
    return false;
  }
  // count
  output->count = input->count;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // tick_duration
  output->tick_duration = input->tick_duration;
  // tick_duration_average
  output->tick_duration_average = input->tick_duration_average;
  // tick_duration_variance
  output->tick_duration_variance = input->tick_duration_variance;
  // tick_interval
  output->tick_interval = input->tick_interval;
  // tick_interval_average
  output->tick_interval_average = input->tick_interval_average;
  // tick_interval_variance
  output->tick_interval_variance = input->tick_interval_variance;
  return true;
}

py_trees_ros_interfaces__msg__Statistics *
py_trees_ros_interfaces__msg__Statistics__create()
{
  py_trees_ros_interfaces__msg__Statistics * msg = (py_trees_ros_interfaces__msg__Statistics *)malloc(sizeof(py_trees_ros_interfaces__msg__Statistics));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__msg__Statistics));
  bool success = py_trees_ros_interfaces__msg__Statistics__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__msg__Statistics__destroy(py_trees_ros_interfaces__msg__Statistics * msg)
{
  if (msg) {
    py_trees_ros_interfaces__msg__Statistics__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__msg__Statistics__Sequence__init(py_trees_ros_interfaces__msg__Statistics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__msg__Statistics * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__msg__Statistics *)calloc(size, sizeof(py_trees_ros_interfaces__msg__Statistics));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__msg__Statistics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__msg__Statistics__fini(&data[i - 1]);
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
py_trees_ros_interfaces__msg__Statistics__Sequence__fini(py_trees_ros_interfaces__msg__Statistics__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__msg__Statistics__fini(&array->data[i]);
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

py_trees_ros_interfaces__msg__Statistics__Sequence *
py_trees_ros_interfaces__msg__Statistics__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__msg__Statistics__Sequence * array = (py_trees_ros_interfaces__msg__Statistics__Sequence *)malloc(sizeof(py_trees_ros_interfaces__msg__Statistics__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__msg__Statistics__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__msg__Statistics__Sequence__destroy(py_trees_ros_interfaces__msg__Statistics__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__msg__Statistics__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__msg__Statistics__Sequence__are_equal(const py_trees_ros_interfaces__msg__Statistics__Sequence * lhs, const py_trees_ros_interfaces__msg__Statistics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__msg__Statistics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__msg__Statistics__Sequence__copy(
  const py_trees_ros_interfaces__msg__Statistics__Sequence * input,
  py_trees_ros_interfaces__msg__Statistics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__msg__Statistics);
    py_trees_ros_interfaces__msg__Statistics * data =
      (py_trees_ros_interfaces__msg__Statistics *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__msg__Statistics__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__msg__Statistics__fini(&data[i]);
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
    if (!py_trees_ros_interfaces__msg__Statistics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
