// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:msg/Lanetype.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__LANETYPE__BUILDER_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__LANETYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/msg/detail/lanetype__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace msg
{

namespace builder
{

class Init_Lanetype_lanetype_name
{
public:
  Init_Lanetype_lanetype_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_messages::msg::Lanetype lanetype_name(::custom_messages::msg::Lanetype::_lanetype_name_type arg)
  {
    msg_.lanetype_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::msg::Lanetype msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::msg::Lanetype>()
{
  return custom_messages::msg::builder::Init_Lanetype_lanetype_name();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__LANETYPE__BUILDER_HPP_
