// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:msg/Lanemarkings.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__LANEMARKINGS__BUILDER_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__LANEMARKINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/msg/detail/lanemarkings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace msg
{

namespace builder
{

class Init_Lanemarkings_lanemarkings_data
{
public:
  Init_Lanemarkings_lanemarkings_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_messages::msg::Lanemarkings lanemarkings_data(::custom_messages::msg::Lanemarkings::_lanemarkings_data_type arg)
  {
    msg_.lanemarkings_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::msg::Lanemarkings msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::msg::Lanemarkings>()
{
  return custom_messages::msg::builder::Init_Lanemarkings_lanemarkings_data();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__LANEMARKINGS__BUILDER_HPP_
