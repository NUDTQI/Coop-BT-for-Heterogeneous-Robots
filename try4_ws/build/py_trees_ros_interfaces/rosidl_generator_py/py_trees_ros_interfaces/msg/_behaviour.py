# generated from rosidl_generator_py/resource/_idl.py.em
# with input from py_trees_ros_interfaces:msg/Behaviour.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Behaviour(type):
    """Metaclass of message 'Behaviour'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'INVALID': 1,
        'RUNNING': 2,
        'SUCCESS': 3,
        'FAILURE': 4,
        'UNKNOWN_TYPE': 0,
        'BEHAVIOUR': 1,
        'SEQUENCE': 2,
        'SELECTOR': 3,
        'PARALLEL': 4,
        'CHOOSER': 5,
        'DECORATOR': 6,
        'BLACKBOX_LEVEL_DETAIL': 1,
        'BLACKBOX_LEVEL_COMPONENT': 2,
        'BLACKBOX_LEVEL_BIG_PICTURE': 3,
        'BLACKBOX_LEVEL_NOT_A_BLACKBOX': 4,
        'BLACKBOARD_ACCESS_READ': 'r',
        'BLACKBOARD_ACCESS_WRITE': 'w',
        'BLACKBOARD_ACCESS_EXCLUSIVE_WRITE': 'x',
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
                'py_trees_ros_interfaces.msg.Behaviour')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__behaviour
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__behaviour
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__behaviour
            cls._TYPE_SUPPORT = module.type_support_msg__msg__behaviour
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__behaviour

            from py_trees_ros_interfaces.msg import KeyValue
            if KeyValue.__class__._TYPE_SUPPORT is None:
                KeyValue.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INVALID': cls.__constants['INVALID'],
            'RUNNING': cls.__constants['RUNNING'],
            'SUCCESS': cls.__constants['SUCCESS'],
            'FAILURE': cls.__constants['FAILURE'],
            'UNKNOWN_TYPE': cls.__constants['UNKNOWN_TYPE'],
            'BEHAVIOUR': cls.__constants['BEHAVIOUR'],
            'SEQUENCE': cls.__constants['SEQUENCE'],
            'SELECTOR': cls.__constants['SELECTOR'],
            'PARALLEL': cls.__constants['PARALLEL'],
            'CHOOSER': cls.__constants['CHOOSER'],
            'DECORATOR': cls.__constants['DECORATOR'],
            'BLACKBOX_LEVEL_DETAIL': cls.__constants['BLACKBOX_LEVEL_DETAIL'],
            'BLACKBOX_LEVEL_COMPONENT': cls.__constants['BLACKBOX_LEVEL_COMPONENT'],
            'BLACKBOX_LEVEL_BIG_PICTURE': cls.__constants['BLACKBOX_LEVEL_BIG_PICTURE'],
            'BLACKBOX_LEVEL_NOT_A_BLACKBOX': cls.__constants['BLACKBOX_LEVEL_NOT_A_BLACKBOX'],
            'BLACKBOARD_ACCESS_READ': cls.__constants['BLACKBOARD_ACCESS_READ'],
            'BLACKBOARD_ACCESS_WRITE': cls.__constants['BLACKBOARD_ACCESS_WRITE'],
            'BLACKBOARD_ACCESS_EXCLUSIVE_WRITE': cls.__constants['BLACKBOARD_ACCESS_EXCLUSIVE_WRITE'],
        }

    @property
    def INVALID(self):
        """Message constant 'INVALID'."""
        return Metaclass_Behaviour.__constants['INVALID']

    @property
    def RUNNING(self):
        """Message constant 'RUNNING'."""
        return Metaclass_Behaviour.__constants['RUNNING']

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_Behaviour.__constants['SUCCESS']

    @property
    def FAILURE(self):
        """Message constant 'FAILURE'."""
        return Metaclass_Behaviour.__constants['FAILURE']

    @property
    def UNKNOWN_TYPE(self):
        """Message constant 'UNKNOWN_TYPE'."""
        return Metaclass_Behaviour.__constants['UNKNOWN_TYPE']

    @property
    def BEHAVIOUR(self):
        """Message constant 'BEHAVIOUR'."""
        return Metaclass_Behaviour.__constants['BEHAVIOUR']

    @property
    def SEQUENCE(self):
        """Message constant 'SEQUENCE'."""
        return Metaclass_Behaviour.__constants['SEQUENCE']

    @property
    def SELECTOR(self):
        """Message constant 'SELECTOR'."""
        return Metaclass_Behaviour.__constants['SELECTOR']

    @property
    def PARALLEL(self):
        """Message constant 'PARALLEL'."""
        return Metaclass_Behaviour.__constants['PARALLEL']

    @property
    def CHOOSER(self):
        """Message constant 'CHOOSER'."""
        return Metaclass_Behaviour.__constants['CHOOSER']

    @property
    def DECORATOR(self):
        """Message constant 'DECORATOR'."""
        return Metaclass_Behaviour.__constants['DECORATOR']

    @property
    def BLACKBOX_LEVEL_DETAIL(self):
        """Message constant 'BLACKBOX_LEVEL_DETAIL'."""
        return Metaclass_Behaviour.__constants['BLACKBOX_LEVEL_DETAIL']

    @property
    def BLACKBOX_LEVEL_COMPONENT(self):
        """Message constant 'BLACKBOX_LEVEL_COMPONENT'."""
        return Metaclass_Behaviour.__constants['BLACKBOX_LEVEL_COMPONENT']

    @property
    def BLACKBOX_LEVEL_BIG_PICTURE(self):
        """Message constant 'BLACKBOX_LEVEL_BIG_PICTURE'."""
        return Metaclass_Behaviour.__constants['BLACKBOX_LEVEL_BIG_PICTURE']

    @property
    def BLACKBOX_LEVEL_NOT_A_BLACKBOX(self):
        """Message constant 'BLACKBOX_LEVEL_NOT_A_BLACKBOX'."""
        return Metaclass_Behaviour.__constants['BLACKBOX_LEVEL_NOT_A_BLACKBOX']

    @property
    def BLACKBOARD_ACCESS_READ(self):
        """Message constant 'BLACKBOARD_ACCESS_READ'."""
        return Metaclass_Behaviour.__constants['BLACKBOARD_ACCESS_READ']

    @property
    def BLACKBOARD_ACCESS_WRITE(self):
        """Message constant 'BLACKBOARD_ACCESS_WRITE'."""
        return Metaclass_Behaviour.__constants['BLACKBOARD_ACCESS_WRITE']

    @property
    def BLACKBOARD_ACCESS_EXCLUSIVE_WRITE(self):
        """Message constant 'BLACKBOARD_ACCESS_EXCLUSIVE_WRITE'."""
        return Metaclass_Behaviour.__constants['BLACKBOARD_ACCESS_EXCLUSIVE_WRITE']


class Behaviour(metaclass=Metaclass_Behaviour):
    """
    Message class 'Behaviour'.

    Constants:
      INVALID
      RUNNING
      SUCCESS
      FAILURE
      UNKNOWN_TYPE
      BEHAVIOUR
      SEQUENCE
      SELECTOR
      PARALLEL
      CHOOSER
      DECORATOR
      BLACKBOX_LEVEL_DETAIL
      BLACKBOX_LEVEL_COMPONENT
      BLACKBOX_LEVEL_BIG_PICTURE
      BLACKBOX_LEVEL_NOT_A_BLACKBOX
      BLACKBOARD_ACCESS_READ
      BLACKBOARD_ACCESS_WRITE
      BLACKBOARD_ACCESS_EXCLUSIVE_WRITE
    """

    __slots__ = [
        '_name',
        '_class_name',
        '_own_id',
        '_parent_id',
        '_tip_id',
        '_child_ids',
        '_current_child_id',
        '_type',
        '_additional_detail',
        '_blackbox_level',
        '_status',
        '_message',
        '_is_active',
        '_blackboard_access',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'class_name': 'string',
        'own_id': 'unique_identifier_msgs/UUID',
        'parent_id': 'unique_identifier_msgs/UUID',
        'tip_id': 'unique_identifier_msgs/UUID',
        'child_ids': 'sequence<unique_identifier_msgs/UUID>',
        'current_child_id': 'unique_identifier_msgs/UUID',
        'type': 'uint8',
        'additional_detail': 'string',
        'blackbox_level': 'uint8',
        'status': 'uint8',
        'message': 'string',
        'is_active': 'boolean',
        'blackboard_access': 'sequence<py_trees_ros_interfaces/KeyValue>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['py_trees_ros_interfaces', 'msg'], 'KeyValue')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.class_name = kwargs.get('class_name', str())
        from unique_identifier_msgs.msg import UUID
        self.own_id = kwargs.get('own_id', UUID())
        from unique_identifier_msgs.msg import UUID
        self.parent_id = kwargs.get('parent_id', UUID())
        from unique_identifier_msgs.msg import UUID
        self.tip_id = kwargs.get('tip_id', UUID())
        self.child_ids = kwargs.get('child_ids', [])
        from unique_identifier_msgs.msg import UUID
        self.current_child_id = kwargs.get('current_child_id', UUID())
        self.type = kwargs.get('type', int())
        self.additional_detail = kwargs.get('additional_detail', str())
        self.blackbox_level = kwargs.get('blackbox_level', int())
        self.status = kwargs.get('status', int())
        self.message = kwargs.get('message', str())
        self.is_active = kwargs.get('is_active', bool())
        self.blackboard_access = kwargs.get('blackboard_access', [])

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
        if self.name != other.name:
            return False
        if self.class_name != other.class_name:
            return False
        if self.own_id != other.own_id:
            return False
        if self.parent_id != other.parent_id:
            return False
        if self.tip_id != other.tip_id:
            return False
        if self.child_ids != other.child_ids:
            return False
        if self.current_child_id != other.current_child_id:
            return False
        if self.type != other.type:
            return False
        if self.additional_detail != other.additional_detail:
            return False
        if self.blackbox_level != other.blackbox_level:
            return False
        if self.status != other.status:
            return False
        if self.message != other.message:
            return False
        if self.is_active != other.is_active:
            return False
        if self.blackboard_access != other.blackboard_access:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def class_name(self):
        """Message field 'class_name'."""
        return self._class_name

    @class_name.setter
    def class_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'class_name' field must be of type 'str'"
        self._class_name = value

    @property
    def own_id(self):
        """Message field 'own_id'."""
        return self._own_id

    @own_id.setter
    def own_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'own_id' field must be a sub message of type 'UUID'"
        self._own_id = value

    @property
    def parent_id(self):
        """Message field 'parent_id'."""
        return self._parent_id

    @parent_id.setter
    def parent_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'parent_id' field must be a sub message of type 'UUID'"
        self._parent_id = value

    @property
    def tip_id(self):
        """Message field 'tip_id'."""
        return self._tip_id

    @tip_id.setter
    def tip_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'tip_id' field must be a sub message of type 'UUID'"
        self._tip_id = value

    @property
    def child_ids(self):
        """Message field 'child_ids'."""
        return self._child_ids

    @child_ids.setter
    def child_ids(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, UUID) for v in value) and
                 True), \
                "The 'child_ids' field must be a set or sequence and each value of type 'UUID'"
        self._child_ids = value

    @property
    def current_child_id(self):
        """Message field 'current_child_id'."""
        return self._current_child_id

    @current_child_id.setter
    def current_child_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'current_child_id' field must be a sub message of type 'UUID'"
        self._current_child_id = value

    @property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @property
    def additional_detail(self):
        """Message field 'additional_detail'."""
        return self._additional_detail

    @additional_detail.setter
    def additional_detail(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'additional_detail' field must be of type 'str'"
        self._additional_detail = value

    @property
    def blackbox_level(self):
        """Message field 'blackbox_level'."""
        return self._blackbox_level

    @blackbox_level.setter
    def blackbox_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blackbox_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'blackbox_level' field must be an unsigned integer in [0, 255]"
        self._blackbox_level = value

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @property
    def is_active(self):
        """Message field 'is_active'."""
        return self._is_active

    @is_active.setter
    def is_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_active' field must be of type 'bool'"
        self._is_active = value

    @property
    def blackboard_access(self):
        """Message field 'blackboard_access'."""
        return self._blackboard_access

    @blackboard_access.setter
    def blackboard_access(self, value):
        if __debug__:
            from py_trees_ros_interfaces.msg import KeyValue
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, KeyValue) for v in value) and
                 True), \
                "The 'blackboard_access' field must be a set or sequence and each value of type 'KeyValue'"
        self._blackboard_access = value
