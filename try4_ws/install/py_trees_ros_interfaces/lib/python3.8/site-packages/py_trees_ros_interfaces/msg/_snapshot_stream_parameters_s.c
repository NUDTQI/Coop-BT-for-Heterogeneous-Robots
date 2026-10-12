// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from py_trees_ros_interfaces:msg/SnapshotStreamParameters.idl
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
#include "py_trees_ros_interfaces/msg/detail/snapshot_stream_parameters__struct.h"
#include "py_trees_ros_interfaces/msg/detail/snapshot_stream_parameters__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool py_trees_ros_interfaces__msg__snapshot_stream_parameters__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[81];
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
    assert(strncmp("py_trees_ros_interfaces.msg._snapshot_stream_parameters.SnapshotStreamParameters", full_classname_dest, 80) == 0);
  }
  py_trees_ros_interfaces__msg__SnapshotStreamParameters * ros_message = _ros_message;
  {  // snapshot_period
    PyObject * field = PyObject_GetAttrString(_pymsg, "snapshot_period");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->snapshot_period = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // blackboard_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "blackboard_data");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->blackboard_data = (Py_True == field);
    Py_DECREF(field);
  }
  {  // blackboard_activity
    PyObject * field = PyObject_GetAttrString(_pymsg, "blackboard_activity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->blackboard_activity = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * py_trees_ros_interfaces__msg__snapshot_stream_parameters__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SnapshotStreamParameters */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("py_trees_ros_interfaces.msg._snapshot_stream_parameters");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SnapshotStreamParameters");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  py_trees_ros_interfaces__msg__SnapshotStreamParameters * ros_message = (py_trees_ros_interfaces__msg__SnapshotStreamParameters *)raw_ros_message;
  {  // snapshot_period
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->snapshot_period);
    {
      int rc = PyObject_SetAttrString(_pymessage, "snapshot_period", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blackboard_data
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->blackboard_data ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blackboard_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blackboard_activity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->blackboard_activity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blackboard_activity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
