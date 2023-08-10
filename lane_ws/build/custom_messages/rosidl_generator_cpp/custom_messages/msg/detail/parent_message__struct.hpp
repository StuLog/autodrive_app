// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_messages:msg/ParentMessage.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__PARENT_MESSAGE__STRUCT_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__PARENT_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'laneid_field'
#include "custom_messages/msg/detail/laneid__struct.hpp"
// Member 'lanetype_field'
#include "custom_messages/msg/detail/lanetype__struct.hpp"
// Member 'lanemarkings_field'
#include "custom_messages/msg/detail/lanemarkings__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_messages__msg__ParentMessage __attribute__((deprecated))
#else
# define DEPRECATED__custom_messages__msg__ParentMessage __declspec(deprecated)
#endif

namespace custom_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParentMessage_
{
  using Type = ParentMessage_<ContainerAllocator>;

  explicit ParentMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : laneid_field(_init),
    lanetype_field(_init),
    lanemarkings_field(_init)
  {
    (void)_init;
  }

  explicit ParentMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : laneid_field(_alloc, _init),
    lanetype_field(_alloc, _init),
    lanemarkings_field(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _laneid_field_type =
    custom_messages::msg::Laneid_<ContainerAllocator>;
  _laneid_field_type laneid_field;
  using _lanetype_field_type =
    custom_messages::msg::Lanetype_<ContainerAllocator>;
  _lanetype_field_type lanetype_field;
  using _lanemarkings_field_type =
    custom_messages::msg::Lanemarkings_<ContainerAllocator>;
  _lanemarkings_field_type lanemarkings_field;

  // setters for named parameter idiom
  Type & set__laneid_field(
    const custom_messages::msg::Laneid_<ContainerAllocator> & _arg)
  {
    this->laneid_field = _arg;
    return *this;
  }
  Type & set__lanetype_field(
    const custom_messages::msg::Lanetype_<ContainerAllocator> & _arg)
  {
    this->lanetype_field = _arg;
    return *this;
  }
  Type & set__lanemarkings_field(
    const custom_messages::msg::Lanemarkings_<ContainerAllocator> & _arg)
  {
    this->lanemarkings_field = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_messages::msg::ParentMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_messages::msg::ParentMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_messages::msg::ParentMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_messages::msg::ParentMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::ParentMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::ParentMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::ParentMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::ParentMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_messages::msg::ParentMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_messages::msg::ParentMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_messages__msg__ParentMessage
    std::shared_ptr<custom_messages::msg::ParentMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_messages__msg__ParentMessage
    std::shared_ptr<custom_messages::msg::ParentMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParentMessage_ & other) const
  {
    if (this->laneid_field != other.laneid_field) {
      return false;
    }
    if (this->lanetype_field != other.lanetype_field) {
      return false;
    }
    if (this->lanemarkings_field != other.lanemarkings_field) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParentMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParentMessage_

// alias to use template instance with default allocator
using ParentMessage =
  custom_messages::msg::ParentMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__PARENT_MESSAGE__STRUCT_HPP_
