#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "podio::podio" for configuration "RelWithDebInfo"
set_property(TARGET podio::podio APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(podio::podio PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libpodio.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libpodio.so"
  )

list(APPEND _cmake_import_check_targets podio::podio )
list(APPEND _cmake_import_check_files_for_podio::podio "${_IMPORT_PREFIX}/lib/libpodio.so" )

# Import target "podio::podioDict" for configuration "RelWithDebInfo"
set_property(TARGET podio::podioDict APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(podio::podioDict PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libpodioDict.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libpodioDict.so"
  )

list(APPEND _cmake_import_check_targets podio::podioDict )
list(APPEND _cmake_import_check_files_for_podio::podioDict "${_IMPORT_PREFIX}/lib/libpodioDict.so" )

# Import target "podio::podioRootIO" for configuration "RelWithDebInfo"
set_property(TARGET podio::podioRootIO APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(podio::podioRootIO PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libpodioRootIO.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libpodioRootIO.so"
  )

list(APPEND _cmake_import_check_targets podio::podioRootIO )
list(APPEND _cmake_import_check_files_for_podio::podioRootIO "${_IMPORT_PREFIX}/lib/libpodioRootIO.so" )

# Import target "podio::podioRootIODict" for configuration "RelWithDebInfo"
set_property(TARGET podio::podioRootIODict APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(podio::podioRootIODict PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libpodioRootIODict.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libpodioRootIODict.so"
  )

list(APPEND _cmake_import_check_targets podio::podioRootIODict )
list(APPEND _cmake_import_check_files_for_podio::podioRootIODict "${_IMPORT_PREFIX}/lib/libpodioRootIODict.so" )

# Import target "podio::podio_test_hashes" for configuration "RelWithDebInfo"
set_property(TARGET podio::podio_test_hashes APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(podio::podio_test_hashes PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/podio_test_hashes"
  )

list(APPEND _cmake_import_check_targets podio::podio_test_hashes )
list(APPEND _cmake_import_check_files_for_podio::podio_test_hashes "${_IMPORT_PREFIX}/bin/podio_test_hashes" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
