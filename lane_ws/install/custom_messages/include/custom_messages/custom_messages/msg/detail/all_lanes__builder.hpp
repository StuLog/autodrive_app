// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:msg/AllLanes.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__ALL_LANES__BUILDER_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__ALL_LANES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/msg/detail/all_lanes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace msg
{

namespace builder
{

class Init_AllLanes_lanes
{
public:
  Init_AllLanes_lanes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_messages::msg::AllLanes lanes(::custom_messages::msg::AllLanes::_lanes_type arg)
  {
    msg_.lanes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::msg::AllLanes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::msg::AllLanes>()
{
  return custom_messages::msg::builder::Init_AllLanes_lanes();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__ALL_LANES__BUILDER_HPP_
