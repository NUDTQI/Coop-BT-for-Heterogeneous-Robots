// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from py_trees_ros_interfaces:srv/CloseSnapshotStream.idl
// generated code does not contain a copyright notice
#include "py_trees_ros_interfaces/srv/detail/close_snapshot_stream__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `topic_name`
#include "rosidl_runtime_c/string_functions.h"

bool
py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__init(py_trees_ros_interfaces__srv__CloseSnapshotStream_Request * msg)
{
  if (!msg) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__init(&msg->topic_name)) {
    py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__fini(msg);
    return false;
  }
  return true;
}

void
py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__fini(py_trees_ros_interfaces__srv__CloseSnapshotStream_Request * msg)
{
  if (!msg) {
    return;
  }
  // topic_name
  rosidl_runtime_c__String__fini(&msg->topic_name);
}

bool
py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__are_equal(const py_trees_ros_interfaces__srv__CloseSnapshotStream_Request * lhs, const py_trees_ros_interfaces__srv__CloseSnapshotStream_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->topic_name), &(rhs->topic_name)))
  {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__copy(
  const py_trees_ros_interfaces__srv__CloseSnapshotStream_Request * input,
  py_trees_ros_interfaces__srv__CloseSnapshotStream_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__copy(
      &(input->topic_name), &(output->topic_name)))
  {
    return false;
  }
  return true;
}

py_trees_ros_interfaces__srv__CloseSnapshotStream_Request *
py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__create()
{
  py_trees_ros_interfaces__srv__CloseSnapshotStream_Request * msg = (py_trees_ros_interfaces__srv__CloseSnapshotStream_Request *)malloc(sizeof(py_trees_ros_interfaces__srv__CloseSnapshotStream_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__srv__CloseSnapshotStream_Request));
  bool success = py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__destroy(py_trees_ros_interfaces__srv__CloseSnapshotStream_Request * msg)
{
  if (msg) {
    py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence__init(py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__srv__CloseSnapshotStream_Request * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__srv__CloseSnapshotStream_Request *)calloc(size, sizeof(py_trees_ros_interfaces__srv__CloseSnapshotStream_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__fini(&data[i - 1]);
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
py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence__fini(py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__fini(&array->data[i]);
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

py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence *
py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence * array = (py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence *)malloc(sizeof(py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence__destroy(py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence__are_equal(const py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence * lhs, const py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence__copy(
  const py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence * input,
  py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__srv__CloseSnapshotStream_Request);
    py_trees_ros_interfaces__srv__CloseSnapshotStream_Request * data =
      (py_trees_ros_interfaces__srv__CloseSnapshotStream_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__fini(&data[i]);
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
    if (!py_trees_ros_interfaces__srv__CloseSnapshotStream_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__init(py_trees_ros_interfaces__srv__CloseSnapshotStream_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__fini(py_trees_ros_interfaces__srv__CloseSnapshotStream_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__are_equal(const py_trees_ros_interfaces__srv__CloseSnapshotStream_Response * lhs, const py_trees_ros_interfaces__srv__CloseSnapshotStream_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__copy(
  const py_trees_ros_interfaces__srv__CloseSnapshotStream_Response * input,
  py_trees_ros_interfaces__srv__CloseSnapshotStream_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

py_trees_ros_interfaces__srv__CloseSnapshotStream_Response *
py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__create()
{
  py_trees_ros_interfaces__srv__CloseSnapshotStream_Response * msg = (py_trees_ros_interfaces__srv__CloseSnapshotStream_Response *)malloc(sizeof(py_trees_ros_interfaces__srv__CloseSnapshotStream_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(py_trees_ros_interfaces__srv__CloseSnapshotStream_Response));
  bool success = py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__destroy(py_trees_ros_interfaces__srv__CloseSnapshotStream_Response * msg)
{
  if (msg) {
    py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__fini(msg);
  }
  free(msg);
}


bool
py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence__init(py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  py_trees_ros_interfaces__srv__CloseSnapshotStream_Response * data = NULL;
  if (size) {
    data = (py_trees_ros_interfaces__srv__CloseSnapshotStream_Response *)calloc(size, sizeof(py_trees_ros_interfaces__srv__CloseSnapshotStream_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__fini(&data[i - 1]);
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
py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence__fini(py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__fini(&array->data[i]);
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

py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence *
py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence__create(size_t size)
{
  py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence * array = (py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence *)malloc(sizeof(py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence__destroy(py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence * array)
{
  if (array) {
    py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence__fini(array);
  }
  free(array);
}

bool
py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence__are_equal(const py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence * lhs, const py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence__copy(
  const py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence * input,
  py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(py_trees_ros_interfaces__srv__CloseSnapshotStream_Response);
    py_trees_ros_interfaces__srv__CloseSnapshotStream_Response * data =
      (py_trees_ros_interfaces__srv__CloseSnapshotStream_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__fini(&data[i]);
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
    if (!py_trees_ros_interfaces__srv__CloseSnapshotStream_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
