// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:msg/ParentMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__PARENT_MESSAGE__BUILDER_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__PARENT_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/msg/detail/parent_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace msg
{

namespace builder
{

class Init_ParentMessage_lanemarkings_field
{
public:
  explicit Init_ParentMessage_lanemarkings_field(::custom_messages::msg::ParentMessage & msg)
  : msg_(msg)
  {}
  ::custom_messages::msg::ParentMessage lanemarkings_field(::custom_messages::msg::ParentMessage::_lanemarkings_field_type arg)
  {
    msg_.lanemarkings_field = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::msg::ParentMessage msg_;
};

class Init_ParentMessage_lanetype_field
{
public:
  explicit Init_ParentMessage_lanetype_field(::custom_messages::msg::ParentMessage & msg)
  : msg_(msg)
  {}
  Init_ParentMessage_lanemarkings_field lanetype_field(::custom_messages::msg::ParentMessage::_lanetype_field_type arg)
  {
    msg_.lanetype_field = std::move(arg);
    return Init_ParentMessage_lanemarkings_field(msg_);
  }

private:
  ::custom_messages::msg::ParentMessage msg_;
};

class Init_ParentMessage_laneid_field
{
public:
  Init_ParentMessage_laneid_field()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParentMessage_lanetype_field laneid_field(::custom_messages::msg::ParentMessage::_laneid_field_type arg)
  {
    msg_.laneid_field = std::move(arg);
    return Init_ParentMessage_lanetype_field(msg_);
  }

private:
  ::custom_messages::msg::ParentMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::msg::ParentMessage>()
{
  return custom_messages::msg::builder::Init_ParentMessage_laneid_field();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__PARENT_MESSAGE__BUILDER_HPP_
