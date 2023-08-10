// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_messages:msg/ParentMessage.idl
// generated code does not contain a copyright notice
#include "custom_messages/msg/detail/parent_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_messages/msg/detail/parent_message__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace custom_messages
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const custom_messages::msg::Laneid &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  custom_messages::msg::Laneid &);
size_t get_serialized_size(
  const custom_messages::msg::Laneid &,
  size_t current_alignment);
size_t
max_serialized_size_Laneid(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace custom_messages

namespace custom_messages
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const custom_messages::msg::Lanetype &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  custom_messages::msg::Lanetype &);
size_t get_serialized_size(
  const custom_messages::msg::Lanetype &,
  size_t current_alignment);
size_t
max_serialized_size_Lanetype(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace custom_messages

namespace custom_messages
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const custom_messages::msg::Lanemarkings &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  custom_messages::msg::Lanemarkings &);
size_t get_serialized_size(
  const custom_messages::msg::Lanemarkings &,
  size_t current_alignment);
size_t
max_serialized_size_Lanemarkings(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace custom_messages


namespace custom_messages
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_messages
cdr_serialize(
  const custom_messages::msg::ParentMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: laneid_field
  custom_messages::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.laneid_field,
    cdr);
  // Member: lanetype_field
  custom_messages::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.lanetype_field,
    cdr);
  // Member: lanemarkings_field
  custom_messages::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.lanemarkings_field,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_messages
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_messages::msg::ParentMessage & ros_message)
{
  // Member: laneid_field
  custom_messages::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.laneid_field);

  // Member: lanetype_field
  custom_messages::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.lanetype_field);

  // Member: lanemarkings_field
  custom_messages::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.lanemarkings_field);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_messages
get_serialized_size(
  const custom_messages::msg::ParentMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: laneid_field

  current_alignment +=
    custom_messages::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.laneid_field, current_alignment);
  // Member: lanetype_field

  current_alignment +=
    custom_messages::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.lanetype_field, current_alignment);
  // Member: lanemarkings_field

  current_alignment +=
    custom_messages::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.lanemarkings_field, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_messages
max_serialized_size_ParentMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: laneid_field
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        custom_messages::msg::typesupport_fastrtps_cpp::max_serialized_size_Laneid(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: lanetype_field
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        custom_messages::msg::typesupport_fastrtps_cpp::max_serialized_size_Lanetype(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: lanemarkings_field
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        custom_messages::msg::typesupport_fastrtps_cpp::max_serialized_size_Lanemarkings(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ParentMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_messages::msg::ParentMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ParentMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_messages::msg::ParentMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ParentMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_messages::msg::ParentMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ParentMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ParentMessage(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ParentMessage__callbacks = {
  "custom_messages::msg",
  "ParentMessage",
  _ParentMessage__cdr_serialize,
  _ParentMessage__cdr_deserialize,
  _ParentMessage__get_serialized_size,
  _ParentMessage__max_serialized_size
};

static rosidl_message_type_support_t _ParentMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ParentMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace custom_messages

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_messages
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_messages::msg::ParentMessage>()
{
  return &custom_messages::msg::typesupport_fastrtps_cpp::_ParentMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_messages, msg, ParentMessage)() {
  return &custom_messages::msg::typesupport_fastrtps_cpp::_ParentMessage__handle;
}

#ifdef __cplusplus
}
#endif
