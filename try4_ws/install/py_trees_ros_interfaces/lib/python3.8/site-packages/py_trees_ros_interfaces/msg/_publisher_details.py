# generated from rosidl_generator_py/resource/_idl.py.em
# with input from py_trees_ros_interfaces:msg/PublisherDetails.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PublisherDetails(type):
    """Metaclass of message 'PublisherDetails'."""

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
                'py_trees_ros_interfaces.msg.PublisherDetails')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__publisher_details
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__publisher_details
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__publisher_details
            cls._TYPE_SUPPORT = module.type_support_msg__msg__publisher_details
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__publisher_details

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PublisherDetails(metaclass=Metaclass_PublisherDetails):
    """Message class 'PublisherDetails'."""

    __slots__ = [
        '_topic_name',
        '_message_type',
        '_latched',
    ]

    _fields_and_field_types = {
        'topic_name': 'string',
        'message_type': 'string',
        'latched': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.topic_name = kwargs.get('topic_name', str())
        self.message_type = kwargs.get('message_type', str())
        self.latched = kwargs.get('latched', bool())

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
        if self.topic_name != other.topic_name:
            return False
        if self.message_type != other.message_type:
            return False
        if self.latched != other.latched:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def topic_name(self):
        """Message field 'topic_name'."""
        return self._topic_name

    @topic_name.setter
    def topic_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'topic_name' field must be of type 'str'"
        self._topic_name = value

    @property
    def message_type(self):
        """Message field 'message_type'."""
        return self._message_type

    @message_type.setter
    def message_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message_type' field must be of type 'str'"
        self._message_type = value

    @property
    def latched(self):
        """Message field 'latched'."""
        return self._latched

    @latched.setter
    def latched(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'latched' field must be of type 'bool'"
        self._latched = value
