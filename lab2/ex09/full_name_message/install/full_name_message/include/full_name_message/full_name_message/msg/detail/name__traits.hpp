// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from full_name_message:msg/Name.idl
// generated code does not contain a copyright notice

#ifndef FULL_NAME_MESSAGE__MSG__DETAIL__NAME__TRAITS_HPP_
#define FULL_NAME_MESSAGE__MSG__DETAIL__NAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "full_name_message/msg/detail/name__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace full_name_message
{

namespace msg
{

inline void to_flow_style_yaml(
  const Name & msg,
  std::ostream & out)
{
  out << "{";
  // member: last_name
  {
    out << "last_name: ";
    rosidl_generator_traits::value_to_yaml(msg.last_name, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: first_name
  {
    out << "first_name: ";
    rosidl_generator_traits::value_to_yaml(msg.first_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Name & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: last_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_name: ";
    rosidl_generator_traits::value_to_yaml(msg.last_name, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: first_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "first_name: ";
    rosidl_generator_traits::value_to_yaml(msg.first_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Name & msg, bool use_flow_style = false)
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

}  // namespace full_name_message

namespace rosidl_generator_traits
{

[[deprecated("use full_name_message::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const full_name_message::msg::Name & msg,
  std::ostream & out, size_t indentation = 0)
{
  full_name_message::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use full_name_message::msg::to_yaml() instead")]]
inline std::string to_yaml(const full_name_message::msg::Name & msg)
{
  return full_name_message::msg::to_yaml(msg);
}

template<>
inline const char * data_type<full_name_message::msg::Name>()
{
  return "full_name_message::msg::Name";
}

template<>
inline const char * name<full_name_message::msg::Name>()
{
  return "full_name_message/msg/Name";
}

template<>
struct has_fixed_size<full_name_message::msg::Name>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<full_name_message::msg::Name>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<full_name_message::msg::Name>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FULL_NAME_MESSAGE__MSG__DETAIL__NAME__TRAITS_HPP_
