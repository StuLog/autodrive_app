// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_messages:msg/AllLanes.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__ALL_LANES__TRAITS_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__ALL_LANES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_messages/msg/detail/all_lanes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'lanes'
#include "custom_messages/msg/detail/parent_message__traits.hpp"

namespace custom_messages
{

namespace msg
{

inline void to_flow_style_yaml(
  const AllLanes & msg,
  std::ostream & out)
{
  out << "{";
  // member: lanes
  {
    if (msg.lanes.size() == 0) {
      out << "lanes: []";
    } else {
      out << "lanes: [";
      size_t pending_items = msg.lanes.size();
      for (auto item : msg.lanes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AllLanes & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lanes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lanes.size() == 0) {
      out << "lanes: []\n";
    } else {
      out << "lanes:\n";
      for (auto item : msg.lanes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AllLanes & msg, bool use_flow_style = false)
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
  const custom_messages::msg::AllLanes & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_messages::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_messages::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_messages::msg::AllLanes & msg)
{
  return custom_messages::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_messages::msg::AllLanes>()
{
  return "custom_messages::msg::AllLanes";
}

template<>
inline const char * name<custom_messages::msg::AllLanes>()
{
  return "custom_messages/msg/AllLanes";
}

template<>
struct has_fixed_size<custom_messages::msg::AllLanes>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_messages::msg::AllLanes>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_messages::msg::AllLanes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__ALL_LANES__TRAITS_HPP_
