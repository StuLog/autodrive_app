// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:msg/Laneid.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__LANEID__BUILDER_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__LANEID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/msg/detail/laneid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace msg
{

namespace builder
{

class Init_Laneid_laneid_data
{
public:
  Init_Laneid_laneid_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_messages::msg::Laneid laneid_data(::custom_messages::msg::Laneid::_laneid_data_type arg)
  {
    msg_.laneid_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::msg::Laneid msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::msg::Laneid>()
{
  return custom_messages::msg::builder::Init_Laneid_laneid_data();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__LANEID__BUILDER_HPP_
