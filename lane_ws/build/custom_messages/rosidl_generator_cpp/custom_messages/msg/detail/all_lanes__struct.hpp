// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_messages:msg/AllLanes.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__ALL_LANES__STRUCT_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__ALL_LANES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'lanes'
#include "custom_messages/msg/detail/parent_message__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_messages__msg__AllLanes __attribute__((deprecated))
#else
# define DEPRECATED__custom_messages__msg__AllLanes __declspec(deprecated)
#endif

namespace custom_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AllLanes_
{
  using Type = AllLanes_<ContainerAllocator>;

  explicit AllLanes_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AllLanes_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _lanes_type =
    std::vector<custom_messages::msg::ParentMessage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_messages::msg::ParentMessage_<ContainerAllocator>>>;
  _lanes_type lanes;

  // setters for named parameter idiom
  Type & set__lanes(
    const std::vector<custom_messages::msg::ParentMessage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<custom_messages::msg::ParentMessage_<ContainerAllocator>>> & _arg)
  {
    this->lanes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_messages::msg::AllLanes_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_messages::msg::AllLanes_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_messages::msg::AllLanes_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_messages::msg::AllLanes_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::AllLanes_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::AllLanes_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::AllLanes_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::AllLanes_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_messages::msg::AllLanes_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_messages::msg::AllLanes_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_messages__msg__AllLanes
    std::shared_ptr<custom_messages::msg::AllLanes_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_messages__msg__AllLanes
    std::shared_ptr<custom_messages::msg::AllLanes_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AllLanes_ & other) const
  {
    if (this->lanes != other.lanes) {
      return false;
    }
    return true;
  }
  bool operator!=(const AllLanes_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AllLanes_

// alias to use template instance with default allocator
using AllLanes =
  custom_messages::msg::AllLanes_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__ALL_LANES__STRUCT_HPP_
