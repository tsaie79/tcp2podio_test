#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "EICrecon::algorithms_init_plugin" for configuration "Release"
set_property(TARGET EICrecon::algorithms_init_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::algorithms_init_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/algorithms_init.so"
  IMPORTED_SONAME_RELEASE "algorithms_init.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::algorithms_init_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::algorithms_init_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/algorithms_init.so" )

# Import target "EICrecon::dd4hep_plugin" for configuration "Release"
set_property(TARGET EICrecon::dd4hep_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::dd4hep_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/dd4hep.so"
  IMPORTED_SONAME_RELEASE "dd4hep.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::dd4hep_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::dd4hep_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/dd4hep.so" )

# Import target "EICrecon::acts_plugin" for configuration "Release"
set_property(TARGET EICrecon::acts_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::acts_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/acts.so"
  IMPORTED_SONAME_RELEASE "acts.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::acts_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::acts_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/acts.so" )

# Import target "EICrecon::richgeo_plugin" for configuration "Release"
set_property(TARGET EICrecon::richgeo_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::richgeo_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/richgeo.so"
  IMPORTED_SONAME_RELEASE "richgeo.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::richgeo_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::richgeo_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/richgeo.so" )

# Import target "EICrecon::podio_plugin" for configuration "Release"
set_property(TARGET EICrecon::podio_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::podio_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/podio.so"
  IMPORTED_SONAME_RELEASE "podio.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::podio_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::podio_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/podio.so" )

# Import target "EICrecon::log_plugin" for configuration "Release"
set_property(TARGET EICrecon::log_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::log_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/log.so"
  IMPORTED_SONAME_RELEASE "log.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::log_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::log_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/log.so" )

# Import target "EICrecon::log_library" for configuration "Release"
set_property(TARGET EICrecon::log_library APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::log_library PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/liblog.a"
  )

list(APPEND _cmake_import_check_targets EICrecon::log_library )
list(APPEND _cmake_import_check_files_for_EICrecon::log_library "${_IMPORT_PREFIX}/lib/liblog.a" )

# Import target "EICrecon::rootfile_plugin" for configuration "Release"
set_property(TARGET EICrecon::rootfile_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::rootfile_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/rootfile.so"
  IMPORTED_SONAME_RELEASE "rootfile.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::rootfile_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::rootfile_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/rootfile.so" )

# Import target "EICrecon::algorithms_calorimetry_library" for configuration "Release"
set_property(TARGET EICrecon::algorithms_calorimetry_library APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::algorithms_calorimetry_library PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libalgorithms_calorimetry.so"
  IMPORTED_SONAME_RELEASE "libalgorithms_calorimetry.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::algorithms_calorimetry_library )
list(APPEND _cmake_import_check_files_for_EICrecon::algorithms_calorimetry_library "${_IMPORT_PREFIX}/lib/libalgorithms_calorimetry.so" )

# Import target "EICrecon::algorithms_tracking_library" for configuration "Release"
set_property(TARGET EICrecon::algorithms_tracking_library APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::algorithms_tracking_library PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libalgorithms_tracking.so"
  IMPORTED_SONAME_RELEASE "libalgorithms_tracking.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::algorithms_tracking_library )
list(APPEND _cmake_import_check_files_for_EICrecon::algorithms_tracking_library "${_IMPORT_PREFIX}/lib/libalgorithms_tracking.so" )

# Import target "EICrecon::algorithms_pid_library" for configuration "Release"
set_property(TARGET EICrecon::algorithms_pid_library APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::algorithms_pid_library PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libalgorithms_pid.so"
  IMPORTED_SONAME_RELEASE "libalgorithms_pid.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::algorithms_pid_library )
list(APPEND _cmake_import_check_files_for_EICrecon::algorithms_pid_library "${_IMPORT_PREFIX}/lib/libalgorithms_pid.so" )

# Import target "EICrecon::algorithms_digi_library" for configuration "Release"
set_property(TARGET EICrecon::algorithms_digi_library APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::algorithms_digi_library PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libalgorithms_digi.so"
  IMPORTED_SONAME_RELEASE "libalgorithms_digi.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::algorithms_digi_library )
list(APPEND _cmake_import_check_files_for_EICrecon::algorithms_digi_library "${_IMPORT_PREFIX}/lib/libalgorithms_digi.so" )

# Import target "EICrecon::algorithms_reco_library" for configuration "Release"
set_property(TARGET EICrecon::algorithms_reco_library APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::algorithms_reco_library PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libalgorithms_reco.so"
  IMPORTED_SONAME_RELEASE "libalgorithms_reco.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::algorithms_reco_library )
list(APPEND _cmake_import_check_files_for_EICrecon::algorithms_reco_library "${_IMPORT_PREFIX}/lib/libalgorithms_reco.so" )

# Import target "EICrecon::algorithms_fardetectors_library" for configuration "Release"
set_property(TARGET EICrecon::algorithms_fardetectors_library APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::algorithms_fardetectors_library PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libalgorithms_fardetectors.so"
  IMPORTED_SONAME_RELEASE "libalgorithms_fardetectors.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::algorithms_fardetectors_library )
list(APPEND _cmake_import_check_files_for_EICrecon::algorithms_fardetectors_library "${_IMPORT_PREFIX}/lib/libalgorithms_fardetectors.so" )

# Import target "EICrecon::EcalBarrelScFiCheck_plugin" for configuration "Release"
set_property(TARGET EICrecon::EcalBarrelScFiCheck_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::EcalBarrelScFiCheck_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/EcalBarrelScFiCheck.so"
  IMPORTED_SONAME_RELEASE "EcalBarrelScFiCheck.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::EcalBarrelScFiCheck_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::EcalBarrelScFiCheck_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/EcalBarrelScFiCheck.so" )

# Import target "EICrecon::TRACKINGcheck_plugin" for configuration "Release"
set_property(TARGET EICrecon::TRACKINGcheck_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::TRACKINGcheck_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/TRACKINGcheck.so"
  IMPORTED_SONAME_RELEASE "TRACKINGcheck.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::TRACKINGcheck_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::TRACKINGcheck_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/TRACKINGcheck.so" )

# Import target "EICrecon::tracking_occupancy_plugin" for configuration "Release"
set_property(TARGET EICrecon::tracking_occupancy_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::tracking_occupancy_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/tracking_occupancy.so"
  IMPORTED_SONAME_RELEASE "tracking_occupancy.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::tracking_occupancy_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::tracking_occupancy_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/tracking_occupancy.so" )

# Import target "EICrecon::tracking_efficiency_plugin" for configuration "Release"
set_property(TARGET EICrecon::tracking_efficiency_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::tracking_efficiency_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/tracking_efficiency.so"
  IMPORTED_SONAME_RELEASE "tracking_efficiency.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::tracking_efficiency_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::tracking_efficiency_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/tracking_efficiency.so" )

# Import target "EICrecon::tof_efficiency_plugin" for configuration "Release"
set_property(TARGET EICrecon::tof_efficiency_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::tof_efficiency_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/tof_efficiency.so"
  IMPORTED_SONAME_RELEASE "tof_efficiency.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::tof_efficiency_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::tof_efficiency_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/tof_efficiency.so" )

# Import target "EICrecon::lfhcal_studies_plugin" for configuration "Release"
set_property(TARGET EICrecon::lfhcal_studies_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::lfhcal_studies_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/lfhcal_studies.so"
  IMPORTED_SONAME_RELEASE "lfhcal_studies.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::lfhcal_studies_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::lfhcal_studies_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/lfhcal_studies.so" )

# Import target "EICrecon::femc_studies_plugin" for configuration "Release"
set_property(TARGET EICrecon::femc_studies_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::femc_studies_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/femc_studies.so"
  IMPORTED_SONAME_RELEASE "femc_studies.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::femc_studies_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::femc_studies_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/femc_studies.so" )

# Import target "EICrecon::BEMC_plugin" for configuration "Release"
set_property(TARGET EICrecon::BEMC_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::BEMC_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/BEMC.so"
  IMPORTED_SONAME_RELEASE "BEMC.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::BEMC_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::BEMC_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/BEMC.so" )

# Import target "EICrecon::EEMC_plugin" for configuration "Release"
set_property(TARGET EICrecon::EEMC_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::EEMC_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/EEMC.so"
  IMPORTED_SONAME_RELEASE "EEMC.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::EEMC_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::EEMC_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/EEMC.so" )

# Import target "EICrecon::FEMC_plugin" for configuration "Release"
set_property(TARGET EICrecon::FEMC_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::FEMC_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/FEMC.so"
  IMPORTED_SONAME_RELEASE "FEMC.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::FEMC_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::FEMC_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/FEMC.so" )

# Import target "EICrecon::EHCAL_plugin" for configuration "Release"
set_property(TARGET EICrecon::EHCAL_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::EHCAL_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/EHCAL.so"
  IMPORTED_SONAME_RELEASE "EHCAL.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::EHCAL_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::EHCAL_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/EHCAL.so" )

# Import target "EICrecon::BHCAL_plugin" for configuration "Release"
set_property(TARGET EICrecon::BHCAL_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::BHCAL_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/BHCAL.so"
  IMPORTED_SONAME_RELEASE "BHCAL.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::BHCAL_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::BHCAL_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/BHCAL.so" )

# Import target "EICrecon::FHCAL_plugin" for configuration "Release"
set_property(TARGET EICrecon::FHCAL_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::FHCAL_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/FHCAL.so"
  IMPORTED_SONAME_RELEASE "FHCAL.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::FHCAL_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::FHCAL_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/FHCAL.so" )

# Import target "EICrecon::ZDC_plugin" for configuration "Release"
set_property(TARGET EICrecon::ZDC_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::ZDC_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/ZDC.so"
  IMPORTED_SONAME_RELEASE "ZDC.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::ZDC_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::ZDC_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/ZDC.so" )

# Import target "EICrecon::B0ECAL_plugin" for configuration "Release"
set_property(TARGET EICrecon::B0ECAL_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::B0ECAL_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/B0ECAL.so"
  IMPORTED_SONAME_RELEASE "B0ECAL.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::B0ECAL_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::B0ECAL_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/B0ECAL.so" )

# Import target "EICrecon::BTRK_plugin" for configuration "Release"
set_property(TARGET EICrecon::BTRK_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::BTRK_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/BTRK.so"
  IMPORTED_SONAME_RELEASE "BTRK.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::BTRK_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::BTRK_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/BTRK.so" )

# Import target "EICrecon::BVTX_plugin" for configuration "Release"
set_property(TARGET EICrecon::BVTX_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::BVTX_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/BVTX.so"
  IMPORTED_SONAME_RELEASE "BVTX.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::BVTX_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::BVTX_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/BVTX.so" )

# Import target "EICrecon::ECTRK_plugin" for configuration "Release"
set_property(TARGET EICrecon::ECTRK_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::ECTRK_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/ECTRK.so"
  IMPORTED_SONAME_RELEASE "ECTRK.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::ECTRK_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::ECTRK_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/ECTRK.so" )

# Import target "EICrecon::MPGD_plugin" for configuration "Release"
set_property(TARGET EICrecon::MPGD_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::MPGD_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/MPGD.so"
  IMPORTED_SONAME_RELEASE "MPGD.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::MPGD_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::MPGD_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/MPGD.so" )

# Import target "EICrecon::RPOTS_plugin" for configuration "Release"
set_property(TARGET EICrecon::RPOTS_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::RPOTS_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/RPOTS.so"
  IMPORTED_SONAME_RELEASE "RPOTS.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::RPOTS_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::RPOTS_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/RPOTS.so" )

# Import target "EICrecon::FOFFMTRK_plugin" for configuration "Release"
set_property(TARGET EICrecon::FOFFMTRK_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::FOFFMTRK_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/FOFFMTRK.so"
  IMPORTED_SONAME_RELEASE "FOFFMTRK.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::FOFFMTRK_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::FOFFMTRK_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/FOFFMTRK.so" )

# Import target "EICrecon::ECTOF_plugin" for configuration "Release"
set_property(TARGET EICrecon::ECTOF_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::ECTOF_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/ECTOF.so"
  IMPORTED_SONAME_RELEASE "ECTOF.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::ECTOF_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::ECTOF_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/ECTOF.so" )

# Import target "EICrecon::BTOF_plugin" for configuration "Release"
set_property(TARGET EICrecon::BTOF_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::BTOF_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/BTOF.so"
  IMPORTED_SONAME_RELEASE "BTOF.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::BTOF_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::BTOF_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/BTOF.so" )

# Import target "EICrecon::B0TRK_plugin" for configuration "Release"
set_property(TARGET EICrecon::B0TRK_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::B0TRK_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/B0TRK.so"
  IMPORTED_SONAME_RELEASE "B0TRK.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::B0TRK_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::B0TRK_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/B0TRK.so" )

# Import target "EICrecon::LOWQ2_plugin" for configuration "Release"
set_property(TARGET EICrecon::LOWQ2_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::LOWQ2_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/LOWQ2.so"
  IMPORTED_SONAME_RELEASE "LOWQ2.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::LOWQ2_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::LOWQ2_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/LOWQ2.so" )

# Import target "EICrecon::LUMISPECCAL_plugin" for configuration "Release"
set_property(TARGET EICrecon::LUMISPECCAL_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::LUMISPECCAL_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/LUMISPECCAL.so"
  IMPORTED_SONAME_RELEASE "LUMISPECCAL.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::LUMISPECCAL_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::LUMISPECCAL_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/LUMISPECCAL.so" )

# Import target "EICrecon::DRICH_plugin" for configuration "Release"
set_property(TARGET EICrecon::DRICH_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::DRICH_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/DRICH.so"
  IMPORTED_SONAME_RELEASE "DRICH.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::DRICH_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::DRICH_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/DRICH.so" )

# Import target "EICrecon::DIRC_plugin" for configuration "Release"
set_property(TARGET EICrecon::DIRC_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::DIRC_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/DIRC.so"
  IMPORTED_SONAME_RELEASE "DIRC.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::DIRC_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::DIRC_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/DIRC.so" )

# Import target "EICrecon::tracking_plugin" for configuration "Release"
set_property(TARGET EICrecon::tracking_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::tracking_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/tracking.so"
  IMPORTED_SONAME_RELEASE "tracking.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::tracking_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::tracking_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/tracking.so" )

# Import target "EICrecon::reco_plugin" for configuration "Release"
set_property(TARGET EICrecon::reco_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::reco_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/reco.so"
  IMPORTED_SONAME_RELEASE "reco.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::reco_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::reco_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/reco.so" )

# Import target "EICrecon::reco_library" for configuration "Release"
set_property(TARGET EICrecon::reco_library APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::reco_library PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libreco.so"
  IMPORTED_SONAME_RELEASE "libreco.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::reco_library )
list(APPEND _cmake_import_check_files_for_EICrecon::reco_library "${_IMPORT_PREFIX}/lib/libreco.so" )

# Import target "EICrecon::pid_plugin" for configuration "Release"
set_property(TARGET EICrecon::pid_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::pid_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/pid.so"
  IMPORTED_SONAME_RELEASE "pid.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::pid_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::pid_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/pid.so" )

# Import target "EICrecon::beam_plugin" for configuration "Release"
set_property(TARGET EICrecon::beam_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::beam_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/beam.so"
  IMPORTED_SONAME_RELEASE "beam.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::beam_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::beam_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/beam.so" )

# Import target "EICrecon::reco_test_plugin" for configuration "Release"
set_property(TARGET EICrecon::reco_test_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::reco_test_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/reco_test.so"
  IMPORTED_SONAME_RELEASE "reco_test.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::reco_test_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::reco_test_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/reco_test.so" )

# Import target "EICrecon::tracking_test_plugin" for configuration "Release"
set_property(TARGET EICrecon::tracking_test_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::tracking_test_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/tracking_test.so"
  IMPORTED_SONAME_RELEASE "tracking_test.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::tracking_test_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::tracking_test_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/tracking_test.so" )

# Import target "EICrecon::track_propagation_test_plugin" for configuration "Release"
set_property(TARGET EICrecon::track_propagation_test_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::track_propagation_test_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/track_propagation_test.so"
  IMPORTED_SONAME_RELEASE "track_propagation_test.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::track_propagation_test_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::track_propagation_test_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/track_propagation_test.so" )

# Import target "EICrecon::geometry_navigation_test_plugin" for configuration "Release"
set_property(TARGET EICrecon::geometry_navigation_test_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::geometry_navigation_test_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/geometry_navigation_test.so"
  IMPORTED_SONAME_RELEASE "geometry_navigation_test.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::geometry_navigation_test_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::geometry_navigation_test_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/geometry_navigation_test.so" )

# Import target "EICrecon::dump_flags_plugin" for configuration "Release"
set_property(TARGET EICrecon::dump_flags_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::dump_flags_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/dump_flags.so"
  IMPORTED_SONAME_RELEASE "dump_flags.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::dump_flags_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::dump_flags_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/dump_flags.so" )

# Import target "EICrecon::janatop_plugin" for configuration "Release"
set_property(TARGET EICrecon::janatop_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(EICrecon::janatop_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/EICrecon/plugins/janatop.so"
  IMPORTED_SONAME_RELEASE "janatop.so"
  )

list(APPEND _cmake_import_check_targets EICrecon::janatop_plugin )
list(APPEND _cmake_import_check_files_for_EICrecon::janatop_plugin "${_IMPORT_PREFIX}/lib/EICrecon/plugins/janatop.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
