# Install script for directory: /home/tsai/eic/EICrecon.src/src/algorithms/calorimetry

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/tsai/eic/EICrecon")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libalgorithms_calorimetry.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libalgorithms_calorimetry.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libalgorithms_calorimetry.so"
         RPATH "/home/tsai/eic/EICrecon/lib:/home/tsai/eic/EICrecon/lib/EICrecon/plugins:/home/tsai/eic/JANA2/lib:/home/tsai/eic/podio/lib:/usr/local/lib/root:/opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/xerces-c-3.2.4-dw2nhv4nc32u3piqwhgg7ds32i2qbahv/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tsai/eic/EICrecon.build/src/algorithms/calorimetry/libalgorithms_calorimetry.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libalgorithms_calorimetry.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libalgorithms_calorimetry.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libalgorithms_calorimetry.so"
         OLD_RPATH "/home/tsai/eic/JANA2/lib:/home/tsai/eic/podio/lib:/usr/local/lib/root:/opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/xerces-c-3.2.4-dw2nhv4nc32u3piqwhgg7ds32i2qbahv/lib:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/tsai/eic/EICrecon/lib:/home/tsai/eic/EICrecon/lib/EICrecon/plugins:/home/tsai/eic/JANA2/lib:/home/tsai/eic/podio/lib:/usr/local/lib/root:/opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/xerces-c-3.2.4-dw2nhv4nc32u3piqwhgg7ds32i2qbahv/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libalgorithms_calorimetry.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/EICrecon/algorithms/calorimetry" TYPE FILE FILES
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/CalorimeterClusterRecoCoG.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/CalorimeterClusterRecoCoGConfig.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/CalorimeterHitDigi.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/CalorimeterHitDigiConfig.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/CalorimeterHitReco.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/CalorimeterHitRecoConfig.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/CalorimeterHitsMerger.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/CalorimeterHitsMergerConfig.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/CalorimeterIslandCluster.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/CalorimeterIslandClusterConfig.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/CalorimeterTruthClustering.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/ClusterTypes.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/EnergyPositionClusterMerger.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/EnergyPositionClusterMergerConfig.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/HEXPLIT.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/HEXPLITConfig.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/ImagingClusterReco.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/ImagingClusterRecoConfig.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/ImagingTopoCluster.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/ImagingTopoClusterConfig.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/calorimetry/TruthEnergyPositionClusterMerger.h"
    )
endif()

