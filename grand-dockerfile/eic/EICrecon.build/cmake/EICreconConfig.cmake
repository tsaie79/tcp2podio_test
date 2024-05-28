
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was EICreconConfig.cmake.in                            ########

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

# Can't seem to make this work with CMAKE_MODULE_PATH
set(EICrecon_INCLUDE_DIR ${PACKAGE_PREFIX_DIR}/include)

set(EICrecon_CXX_STANDARD 20)

include(CMakeFindDependencyMacro)
find_dependency(Acts 31.2.0 CONFIG EXACT)
find_dependency(ROOT 6.30.02 CONFIG EXACT COMPONENTS Core Tree Hist RIO EG)
find_dependency(JANA 2.1.2 CONFIG EXACT)
find_dependency(EDM4HEP 0.10.3 CONFIG EXACT)
find_dependency(EDM4EIC 5.0.0 CONFIG EXACT)
find_dependency(Eigen3 3.4.0 CONFIG EXACT)
find_dependency(DD4hep 1.28 CONFIG EXACT)
find_dependency(Microsoft.GSL 4.0.0 CONFIG EXACT)
find_dependency(algorithms 1.0.0 CONFIG EXACT)
find_dependency(podio 0.99.0 CONFIG EXACT)
find_dependency(spdlog 1.11.0 CONFIG EXACT)

# Set the output plugin directory based on whether the user has their EICrecon_MY envar set
if( DEFINED ENV{EICrecon_MY} )
    set( USER_PLUGIN_OUTPUT_DIRECTORY $ENV{EICrecon_MY}/plugins )
else()
    set( USER_PLUGIN_OUTPUT_DIRECTORY ${PLUGIN_OUTPUT_DIRECTORY} )
endif()

# include the targets file to create the imported targets for the user
include(${CMAKE_CURRENT_LIST_DIR}/EICreconTargets.cmake)
