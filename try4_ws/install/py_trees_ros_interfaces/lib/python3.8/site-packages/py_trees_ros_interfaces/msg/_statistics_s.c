// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from py_trees_ros_interfaces:msg/Statistics.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "py_trees_ros_interfaces/msg/detail/statistics__struct.h"
#include "py_trees_ros_interfaces/msg/detail/statistics__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool py_trees_ros_interfaces__msg__statistics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("py_trees_ros_interfaces.msg._statistics.Statistics", full_classname_dest, 50) == 0);
  }
  py_trees_ros_interfaces__msg__Statistics * ros_message = _ros_message;
  {  // count
    PyObject * field = PyObject_GetAttrString(_pymsg, "count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->count = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tick_duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "tick_duration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tick_duration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tick_duration_average
    PyObject * field = PyObject_GetAttrString(_pymsg, "tick_duration_average");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tick_duration_average = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tick_duration_variance
    PyObject * field = PyObject_GetAttrString(_pymsg, "tick_duration_variance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tick_duration_variance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tick_interval
    PyObject * field = PyObject_GetAttrString(_pymsg, "tick_interval");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tick_interval = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tick_interval_average
    PyObject * field = PyObject_GetAttrString(_pymsg, "tick_interval_average");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tick_interval_average = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tick_interval_variance
    PyObject * field = PyObject_GetAttrString(_pymsg, "tick_interval_variance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tick_interval_variance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * py_trees_ros_interfaces__msg__statistics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Statistics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("py_trees_ros_interfaces.msg._statistics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Statistics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  py_trees_ros_interfaces__msg__Statistics * ros_message = (py_trees_ros_interfaces__msg__Statistics *)raw_ros_message;
  {  // count
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tick_duration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tick_duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tick_duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tick_duration_average
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tick_duration_average);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tick_duration_average", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tick_duration_variance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tick_duration_variance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tick_duration_variance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tick_interval
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tick_interval);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tick_interval", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tick_interval_average
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tick_interval_average);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tick_interval_average", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tick_interval_variance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tick_interval_variance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tick_interval_variance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
