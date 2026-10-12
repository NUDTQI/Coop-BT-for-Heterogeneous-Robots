# generated from rosidl_generator_py/resource/_idl.py.em
# with input from py_trees_ros_interfaces:srv/StatusReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StatusReport_Request(type):
    """Metaclass of message 'StatusReport_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('py_trees_ros_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'py_trees_ros_interfaces.srv.StatusReport_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__status_report__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__status_report__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__status_report__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__status_report__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__status_report__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StatusReport_Request(metaclass=Metaclass_StatusReport_Request):
    """Message class 'StatusReport_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_StatusReport_Response(type):
    """Metaclass of message 'StatusReport_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('py_trees_ros_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'py_trees_ros_interfaces.srv.StatusReport_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__status_report__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__status_report__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__status_report__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__status_report__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__status_report__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class StatusReport_Response(metaclass=Metaclass_StatusReport_Response):
    """Message class 'StatusReport_Response'."""

    __slots__ = [
        '_report',
    ]

    _fields_and_field_types = {
        'report': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.report = kwargs.get('report', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.report != other.report:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def report(self):
        """Message field 'report'."""
        return self._report

    @report.setter
    def report(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'report' field must be of type 'str'"
        self._report = value


class Metaclass_StatusReport(type):
    """Metaclass of service 'StatusReport'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('py_trees_ros_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'py_trees_ros_interfaces.srv.StatusReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__status_report

            from py_trees_ros_interfaces.srv import _status_report
            if _status_report.Metaclass_StatusReport_Request._TYPE_SUPPORT is None:
                _status_report.Metaclass_StatusReport_Request.__import_type_support__()
            if _status_report.Metaclass_StatusReport_Response._TYPE_SUPPORT is None:
                _status_report.Metaclass_StatusReport_Response.__import_type_support__()


class StatusReport(metaclass=Metaclass_StatusReport):
    from py_trees_ros_interfaces.srv._status_report import StatusReport_Request as Request
    from py_trees_ros_interfaces.srv._status_report import StatusReport_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
