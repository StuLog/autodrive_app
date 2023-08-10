// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_messages:msg/ParentMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__PARENT_MESSAGE__TRAITS_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__PARENT_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_messages/msg/detail/parent_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'laneid_field'
#include "custom_messages/msg/detail/laneid__traits.hpp"
// Member 'lanetype_field'
#include "custom_messages/msg/detail/lanetype__traits.hpp"
// Member 'lanemarkings_field'
#include "custom_messages/msg/detail/lanemarkings__traits.hpp"

namespace custom_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParentMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: laneid_field
  {
    out << "laneid_field: ";
    to_flow_style_yaml(msg.laneid_field, out);
    out << ", ";
  }

  // member: lanetype_field
  {
    out << "lanetype_field: ";
    to_flow_style_yaml(msg.lanetype_field, out);
    out << ", ";
  }

  // member: lanemarkings_field
  {
    out << "lanemarkings_field: ";
    to_flow_style_yaml(msg.lanemarkings_field, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParentMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: laneid_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laneid_field:\n";
    to_block_style_yaml(msg.laneid_field, out, indentation + 2);
  }

  // member: lanetype_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanetype_field:\n";
    to_block_style_yaml(msg.lanetype_field, out, indentation + 2);
  }

  // member: lanemarkings_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanemarkings_field:\n";
    to_block_style_yaml(msg.lanemarkings_field, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParentMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_messages

namespace rosidl_generator_traits
{

[[deprecated("use custom_messages::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_messages::msg::ParentMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_messages::msg::ParentMessage & msg)
{
  return custom_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_messages::msg::ParentMessage>()
{
  return "custom_messages::msg::ParentMessage";
}

template<>
inline const char * name<custom_messages::msg::ParentMessage>()
{
  return "custom_messages/msg/ParentMessage";
}

template<>
struct has_fixed_size<custom_messages::msg::ParentMessage>
  : std::integral_constant<bool, has_fixed_size<custom_messages::msg::Laneid>::value && has_fixed_size<custom_messages::msg::Lanemarkings>::value && has_fixed_size<custom_messages::msg::Lanetype>::value> {};

template<>
struct has_bounded_size<custom_messages::msg::ParentMessage>
  : std::integral_constant<bool, has_bounded_size<custom_messages::msg::Laneid>::value && has_bounded_size<custom_messages::msg::Lanemarkings>::value && has_bounded_size<custom_messages::msg::Lanetype>::value> {};

template<>
struct is_message<custom_messages::msg::ParentMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__PARENT_MESSAGE__TRAITS_HPP_
