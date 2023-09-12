// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from full_name_message:msg/Name.idl
// generated code does not contain a copyright notice

#ifndef FULL_NAME_MESSAGE__MSG__DETAIL__NAME__FUNCTIONS_H_
#define FULL_NAME_MESSAGE__MSG__DETAIL__NAME__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "full_name_message/msg/rosidl_generator_c__visibility_control.h"

#include "full_name_message/msg/detail/name__struct.h"

/// Initialize msg/Name message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * full_name_message__msg__Name
 * )) before or use
 * full_name_message__msg__Name__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_full_name_message
bool
full_name_message__msg__Name__init(full_name_message__msg__Name * msg);

/// Finalize msg/Name message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_full_name_message
void
full_name_message__msg__Name__fini(full_name_message__msg__Name * msg);

/// Create msg/Name message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * full_name_message__msg__Name__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_full_name_message
full_name_message__msg__Name *
full_name_message__msg__Name__create();

/// Destroy msg/Name message.
/**
 * It calls
 * full_name_message__msg__Name__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_full_name_message
void
full_name_message__msg__Name__destroy(full_name_message__msg__Name * msg);

/// Check for msg/Name message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_full_name_message
bool
full_name_message__msg__Name__are_equal(const full_name_message__msg__Name * lhs, const full_name_message__msg__Name * rhs);

/// Copy a msg/Name message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_full_name_message
bool
full_name_message__msg__Name__copy(
  const full_name_message__msg__Name * input,
  full_name_message__msg__Name * output);

/// Initialize array of msg/Name messages.
/**
 * It allocates the memory for the number of elements and calls
 * full_name_message__msg__Name__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_full_name_message
bool
full_name_message__msg__Name__Sequence__init(full_name_message__msg__Name__Sequence * array, size_t size);

/// Finalize array of msg/Name messages.
/**
 * It calls
 * full_name_message__msg__Name__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_full_name_message
void
full_name_message__msg__Name__Sequence__fini(full_name_message__msg__Name__Sequence * array);

/// Create array of msg/Name messages.
/**
 * It allocates the memory for the array and calls
 * full_name_message__msg__Name__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_full_name_message
full_name_message__msg__Name__Sequence *
full_name_message__msg__Name__Sequence__create(size_t size);

/// Destroy array of msg/Name messages.
/**
 * It calls
 * full_name_message__msg__Name__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_full_name_message
void
full_name_message__msg__Name__Sequence__destroy(full_name_message__msg__Name__Sequence * array);

/// Check for msg/Name message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_full_name_message
bool
full_name_message__msg__Name__Sequence__are_equal(const full_name_message__msg__Name__Sequence * lhs, const full_name_message__msg__Name__Sequence * rhs);

/// Copy an array of msg/Name messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_full_name_message
bool
full_name_message__msg__Name__Sequence__copy(
  const full_name_message__msg__Name__Sequence * input,
  full_name_message__msg__Name__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FULL_NAME_MESSAGE__MSG__DETAIL__NAME__FUNCTIONS_H_
