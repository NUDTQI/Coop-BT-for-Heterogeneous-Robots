// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from py_trees_ros_interfaces:action/MoveBase.idl
// generated code does not contain a copyright notice

#ifndef PY_TREES_ROS_INTERFACES__ACTION__DETAIL__MOVE_BASE__BUILDER_HPP_
#define PY_TREES_ROS_INTERFACES__ACTION__DETAIL__MOVE_BASE__BUILDER_HPP_

#include "py_trees_ros_interfaces/action/detail/move_base__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace py_trees_ros_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveBase_Goal_target_pose
{
public:
  Init_MoveBase_Goal_target_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::py_trees_ros_interfaces::action::MoveBase_Goal target_pose(::py_trees_ros_interfaces::action::MoveBase_Goal::_target_pose_type arg)
  {
    msg_.target_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::action::MoveBase_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::action::MoveBase_Goal>()
{
  return py_trees_ros_interfaces::action::builder::Init_MoveBase_Goal_target_pose();
}

}  // namespace py_trees_ros_interfaces


namespace py_trees_ros_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveBase_Result_message
{
public:
  Init_MoveBase_Result_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::py_trees_ros_interfaces::action::MoveBase_Result message(::py_trees_ros_interfaces::action::MoveBase_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::action::MoveBase_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::action::MoveBase_Result>()
{
  return py_trees_ros_interfaces::action::builder::Init_MoveBase_Result_message();
}

}  // namespace py_trees_ros_interfaces


namespace py_trees_ros_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveBase_Feedback_base_position
{
public:
  Init_MoveBase_Feedback_base_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::py_trees_ros_interfaces::action::MoveBase_Feedback base_position(::py_trees_ros_interfaces::action::MoveBase_Feedback::_base_position_type arg)
  {
    msg_.base_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::action::MoveBase_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::action::MoveBase_Feedback>()
{
  return py_trees_ros_interfaces::action::builder::Init_MoveBase_Feedback_base_position();
}

}  // namespace py_trees_ros_interfaces


namespace py_trees_ros_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveBase_SendGoal_Request_goal
{
public:
  explicit Init_MoveBase_SendGoal_Request_goal(::py_trees_ros_interfaces::action::MoveBase_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::py_trees_ros_interfaces::action::MoveBase_SendGoal_Request goal(::py_trees_ros_interfaces::action::MoveBase_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::action::MoveBase_SendGoal_Request msg_;
};

class Init_MoveBase_SendGoal_Request_goal_id
{
public:
  Init_MoveBase_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveBase_SendGoal_Request_goal goal_id(::py_trees_ros_interfaces::action::MoveBase_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveBase_SendGoal_Request_goal(msg_);
  }

private:
  ::py_trees_ros_interfaces::action::MoveBase_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::action::MoveBase_SendGoal_Request>()
{
  return py_trees_ros_interfaces::action::builder::Init_MoveBase_SendGoal_Request_goal_id();
}

}  // namespace py_trees_ros_interfaces


namespace py_trees_ros_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveBase_SendGoal_Response_stamp
{
public:
  explicit Init_MoveBase_SendGoal_Response_stamp(::py_trees_ros_interfaces::action::MoveBase_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::py_trees_ros_interfaces::action::MoveBase_SendGoal_Response stamp(::py_trees_ros_interfaces::action::MoveBase_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::action::MoveBase_SendGoal_Response msg_;
};

class Init_MoveBase_SendGoal_Response_accepted
{
public:
  Init_MoveBase_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveBase_SendGoal_Response_stamp accepted(::py_trees_ros_interfaces::action::MoveBase_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveBase_SendGoal_Response_stamp(msg_);
  }

private:
  ::py_trees_ros_interfaces::action::MoveBase_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::action::MoveBase_SendGoal_Response>()
{
  return py_trees_ros_interfaces::action::builder::Init_MoveBase_SendGoal_Response_accepted();
}

}  // namespace py_trees_ros_interfaces


namespace py_trees_ros_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveBase_GetResult_Request_goal_id
{
public:
  Init_MoveBase_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::py_trees_ros_interfaces::action::MoveBase_GetResult_Request goal_id(::py_trees_ros_interfaces::action::MoveBase_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::action::MoveBase_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::action::MoveBase_GetResult_Request>()
{
  return py_trees_ros_interfaces::action::builder::Init_MoveBase_GetResult_Request_goal_id();
}

}  // namespace py_trees_ros_interfaces


namespace py_trees_ros_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveBase_GetResult_Response_result
{
public:
  explicit Init_MoveBase_GetResult_Response_result(::py_trees_ros_interfaces::action::MoveBase_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::py_trees_ros_interfaces::action::MoveBase_GetResult_Response result(::py_trees_ros_interfaces::action::MoveBase_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::action::MoveBase_GetResult_Response msg_;
};

class Init_MoveBase_GetResult_Response_status
{
public:
  Init_MoveBase_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveBase_GetResult_Response_result status(::py_trees_ros_interfaces::action::MoveBase_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveBase_GetResult_Response_result(msg_);
  }

private:
  ::py_trees_ros_interfaces::action::MoveBase_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::action::MoveBase_GetResult_Response>()
{
  return py_trees_ros_interfaces::action::builder::Init_MoveBase_GetResult_Response_status();
}

}  // namespace py_trees_ros_interfaces


namespace py_trees_ros_interfaces
{

namespace action
{

namespace builder
{

class Init_MoveBase_FeedbackMessage_feedback
{
public:
  explicit Init_MoveBase_FeedbackMessage_feedback(::py_trees_ros_interfaces::action::MoveBase_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::py_trees_ros_interfaces::action::MoveBase_FeedbackMessage feedback(::py_trees_ros_interfaces::action::MoveBase_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::py_trees_ros_interfaces::action::MoveBase_FeedbackMessage msg_;
};

class Init_MoveBase_FeedbackMessage_goal_id
{
public:
  Init_MoveBase_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveBase_FeedbackMessage_feedback goal_id(::py_trees_ros_interfaces::action::MoveBase_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveBase_FeedbackMessage_feedback(msg_);
  }

private:
  ::py_trees_ros_interfaces::action::MoveBase_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::py_trees_ros_interfaces::action::MoveBase_FeedbackMessage>()
{
  return py_trees_ros_interfaces::action::builder::Init_MoveBase_FeedbackMessage_goal_id();
}

}  // namespace py_trees_ros_interfaces

#endif  // PY_TREES_ROS_INTERFACES__ACTION__DETAIL__MOVE_BASE__BUILDER_HPP_
