// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:msg/Child1.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__CHILD1__BUILDER_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__CHILD1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/msg/detail/child1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace msg
{

namespace builder
{

class Init_Child1_child1_data
{
public:
  Init_Child1_child1_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_messages::msg::Child1 child1_data(::custom_messages::msg::Child1::_child1_data_type arg)
  {
    msg_.child1_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::msg::Child1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::msg::Child1>()
{
  return custom_messages::msg::builder::Init_Child1_child1_data();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__CHILD1__BUILDER_HPP_
