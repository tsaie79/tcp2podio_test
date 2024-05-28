#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "JANA::jana2_static_lib" for configuration ""
set_property(TARGET JANA::jana2_static_lib APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(JANA::jana2_static_lib PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C;CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libJANA.a"
  )

list(APPEND _cmake_import_check_targets JANA::jana2_static_lib )
list(APPEND _cmake_import_check_files_for_JANA::jana2_static_lib "${_IMPORT_PREFIX}/lib/libJANA.a" )

# Import target "JANA::jana2_shared_lib" for configuration ""
set_property(TARGET JANA::jana2_shared_lib APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(JANA::jana2_shared_lib PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libJANA.so"
  IMPORTED_SONAME_NOCONFIG "libJANA.so"
  )

list(APPEND _cmake_import_check_targets JANA::jana2_shared_lib )
list(APPEND _cmake_import_check_files_for_JANA::jana2_shared_lib "${_IMPORT_PREFIX}/lib/libJANA.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
