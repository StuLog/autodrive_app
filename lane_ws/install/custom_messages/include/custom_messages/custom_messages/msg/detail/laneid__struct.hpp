// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_messages:msg/Laneid.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__LANEID__STRUCT_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__LANEID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_messages__msg__Laneid __attribute__((deprecated))
#else
# define DEPRECATED__custom_messages__msg__Laneid __declspec(deprecated)
#endif

namespace custom_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Laneid_
{
  using Type = Laneid_<ContainerAllocator>;

  explicit Laneid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laneid_data = 0l;
    }
  }

  explicit Laneid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laneid_data = 0l;
    }
  }

  // field types and members
  using _laneid_data_type =
    int32_t;
  _laneid_data_type laneid_data;

  // setters for named parameter idiom
  Type & set__laneid_data(
    const int32_t & _arg)
  {
    this->laneid_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_messages::msg::Laneid_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_messages::msg::Laneid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_messages::msg::Laneid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_messages::msg::Laneid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::Laneid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::Laneid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::Laneid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::Laneid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_messages::msg::Laneid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_messages::msg::Laneid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_messages__msg__Laneid
    std::shared_ptr<custom_messages::msg::Laneid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_messages__msg__Laneid
    std::shared_ptr<custom_messages::msg::Laneid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Laneid_ & other) const
  {
    if (this->laneid_data != other.laneid_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Laneid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Laneid_

// alias to use template instance with default allocator
using Laneid =
  custom_messages::msg::Laneid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__LANEID__STRUCT_HPP_
