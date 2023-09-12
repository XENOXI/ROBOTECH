// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from full_name_message:srv/GetFullName.idl
// generated code does not contain a copyright notice

#ifndef FULL_NAME_MESSAGE__SRV__DETAIL__GET_FULL_NAME__STRUCT_H_
#define FULL_NAME_MESSAGE__SRV__DETAIL__GET_FULL_NAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'last_name'
// Member 'name'
// Member 'first_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetFullName in the package full_name_message.
typedef struct full_name_message__srv__GetFullName_Request
{
  rosidl_runtime_c__String last_name;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String first_name;
} full_name_message__srv__GetFullName_Request;

// Struct for a sequence of full_name_message__srv__GetFullName_Request.
typedef struct full_name_message__srv__GetFullName_Request__Sequence
{
  full_name_message__srv__GetFullName_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} full_name_message__srv__GetFullName_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'full_name'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetFullName in the package full_name_message.
typedef struct full_name_message__srv__GetFullName_Response
{
  rosidl_runtime_c__String full_name;
} full_name_message__srv__GetFullName_Response;

// Struct for a sequence of full_name_message__srv__GetFullName_Response.
typedef struct full_name_message__srv__GetFullName_Response__Sequence
{
  full_name_message__srv__GetFullName_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} full_name_message__srv__GetFullName_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FULL_NAME_MESSAGE__SRV__DETAIL__GET_FULL_NAME__STRUCT_H_
