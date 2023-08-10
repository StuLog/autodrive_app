// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:msg/Child2.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__CHILD2__BUILDER_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__CHILD2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/msg/detail/child2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace msg
{

namespace builder
{

class Init_Child2_child2_name
{
public:
  Init_Child2_child2_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_messages::msg::Child2 child2_name(::custom_messages::msg::Child2::_child2_name_type arg)
  {
    msg_.child2_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::msg::Child2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::msg::Child2>()
{
  return custom_messages::msg::builder::Init_Child2_child2_name();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__CHILD2__BUILDER_HPP_
