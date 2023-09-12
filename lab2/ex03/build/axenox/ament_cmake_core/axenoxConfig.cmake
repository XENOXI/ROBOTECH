# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_axenox_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED axenox_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(axenox_FOUND FALSE)
  elseif(NOT axenox_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(axenox_FOUND FALSE)
  endif()
  return()
endif()
set(_axenox_CONFIG_INCLUDED TRUE)

# output package information
if(NOT axenox_FIND_QUIETLY)
  message(STATUS "Found axenox: 0.0.0 (${axenox_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'axenox' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${axenox_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(axenox_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${axenox_DIR}/${_extra}")
endforeach()
