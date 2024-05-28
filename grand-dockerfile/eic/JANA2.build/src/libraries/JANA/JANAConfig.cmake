
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was JANAConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

find_package(Threads REQUIRED)

include("${CMAKE_CURRENT_LIST_DIR}/JANATargets.cmake")


# Provide user with shared libraries by default if JANA was built with them. 
# Otherwise, provide them with the static version. They can always specify themselves
# using the JANA::jana2_shared_lib and JANA::jana2_static_lib targets explicitly.
# n.b. this would be cleaner if we could use an ALIAS, but that would require cmake
# 3.18 or greater and we want to support legacy versions at this point.
set(BUILD_SHARED_LIBS ON)
if (${BUILD_SHARED_LIBS})
    get_target_property(JANA_INCLUDE_DIRS JANA::jana2_shared_lib INTERFACE_INCLUDE_DIRECTORIES)
    set(JANA_LIBRARIES JANA::jana2_shared_lib)
else()
    get_target_property(JANA_INCLUDE_DIRS JANA::jana2_static_lib INTERFACE_INCLUDE_DIRECTORIES)
    set(JANA_LIBRARIES JANA::jana2_static_lib)
endif()

# There are some issues with the include directories being passed through as a property
# of the imported targets. This shows up as JANA_INCLUDE_DIRS being set to
# "JANA_INCLUDE_DIRS-NOTFOUND". As a workaround, if "NOTFOUND" is included in
# JANA_INCLUDE_DIRS then overwrite it here with what it should have been set to.
if(${JANA_INCLUDE_DIRS} MATCHES "NOTFOUND")
    set(JANA_INCLUDE_DIRS /home/tsai/eic/JANA2/include)
endif()

# Backwards compatibility
set(JANA_INCLUDE_DIR ${JANA_INCLUDE_DIRS})
set(JANA_LIBRARY ${JANA_LIBRARIES}) 
set(JANA_LIB ${JANA_LIBRARIES}) 


