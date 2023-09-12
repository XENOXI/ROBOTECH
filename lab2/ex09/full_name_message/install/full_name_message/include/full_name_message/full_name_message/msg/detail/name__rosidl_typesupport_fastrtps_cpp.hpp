// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from full_name_message:msg/Name.idl
// generated code does not contain a copyright notice

#ifndef FULL_NAME_MESSAGE__MSG__DETAIL__NAME__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FULL_NAME_MESSAGE__MSG__DETAIL__NAME__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "full_name_message/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "full_name_message/msg/detail/name__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace full_name_message
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_full_name_message
cdr_serialize(
  const full_name_message::msg::Name & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_full_name_message
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  full_name_message::msg::Name & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_full_name_message
get_serialized_size(
  const full_name_message::msg::Name & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_full_name_message
max_serialized_size_Name(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace full_name_message

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_full_name_message
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, full_name_message, msg, Name)();

#ifdef __cplusplus
}
#endif

#endif  // FULL_NAME_MESSAGE__MSG__DETAIL__NAME__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
