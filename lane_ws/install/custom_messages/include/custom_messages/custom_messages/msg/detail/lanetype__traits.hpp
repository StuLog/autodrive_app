// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_messages:msg/Lanetype.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__LANETYPE__TRAITS_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__LANETYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_messages/msg/detail/lanetype__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const Lanetype & msg,
  std::ostream & out)
{
  out << "{";
  // member: lanetype_name
  {
    out << "lanetype_name: ";
    rosidl_generator_traits::value_to_yaml(msg.lanetype_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Lanetype & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lanetype_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanetype_name: ";
    rosidl_generator_traits::value_to_yaml(msg.lanetype_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Lanetype & msg, bool use_flow_style = false)
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
  const custom_messages::msg::Lanetype & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_messages::msg::Lanetype & msg)
{
  return custom_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_messages::msg::Lanetype>()
{
  return "custom_messages::msg::Lanetype";
}

template<>
inline const char * name<custom_messages::msg::Lanetype>()
{
  return "custom_messages/msg/Lanetype";
}

template<>
struct has_fixed_size<custom_messages::msg::Lanetype>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_messages::msg::Lanetype>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_messages::msg::Lanetype>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__LANETYPE__TRAITS_HPP_
