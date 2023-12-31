# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_text_to_cmd_vel_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED text_to_cmd_vel_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(text_to_cmd_vel_FOUND FALSE)
  elseif(NOT text_to_cmd_vel_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(text_to_cmd_vel_FOUND FALSE)
  endif()
  return()
endif()
set(_text_to_cmd_vel_CONFIG_INCLUDED TRUE)

# output package information
if(NOT text_to_cmd_vel_FIND_QUIETLY)
  message(STATUS "Found text_to_cmd_vel: 0.0.0 (${text_to_cmd_vel_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'text_to_cmd_vel' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${text_to_cmd_vel_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(text_to_cmd_vel_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${text_to_cmd_vel_DIR}/${_extra}")
endforeach()
