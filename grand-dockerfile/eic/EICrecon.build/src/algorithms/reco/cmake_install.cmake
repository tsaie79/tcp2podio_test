# Install script for directory: /home/tsai/eic/EICrecon.src/src/algorithms/reco

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libalgorithms_reco.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libalgorithms_reco.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libalgorithms_reco.so"
         RPATH "/home/tsai/eic/EICrecon/lib:/home/tsai/eic/EICrecon/lib/EICrecon/plugins:/home/tsai/eic/JANA2/lib:/usr/local/lib/root:/home/tsai/eic/podio/lib:/opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/xerces-c-3.2.4-dw2nhv4nc32u3piqwhgg7ds32i2qbahv/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tsai/eic/EICrecon.build/src/algorithms/reco/libalgorithms_reco.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libalgorithms_reco.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libalgorithms_reco.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libalgorithms_reco.so"
         OLD_RPATH "\$ORIGIN/../digi:\$ORIGIN/../tracking:/home/tsai/eic/JANA2/lib:/usr/local/lib/root:/home/tsai/eic/podio/lib:/opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/xerces-c-3.2.4-dw2nhv4nc32u3piqwhgg7ds32i2qbahv/lib:::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/tsai/eic/EICrecon/lib:/home/tsai/eic/EICrecon/lib/EICrecon/plugins:/home/tsai/eic/JANA2/lib:/usr/local/lib/root:/home/tsai/eic/podio/lib:/opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/xerces-c-3.2.4-dw2nhv4nc32u3piqwhgg7ds32i2qbahv/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libalgorithms_reco.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/EICrecon/algorithms/reco" TYPE FILE FILES
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/Beam.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/Boost.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/ChargedMCParticleSelector.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/ChargedReconstructedParticleSelector.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/ElectronReconstruction.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/ElectronReconstructionConfig.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/InclusiveKinematicsDA.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/InclusiveKinematicsElectron.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/InclusiveKinematicsJB.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/InclusiveKinematicsSigma.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/InclusiveKinematicsTruth.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/InclusiveKinematicseSigma.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/JetReconstruction.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/JetReconstructionConfig.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/MC2SmearedParticle.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/MatchClusters.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/ScatteredElectronsEMinusPz.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/ScatteredElectronsEMinusPzConfig.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/ScatteredElectronsTruth.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/TransformBreitFrame.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/EICrecon/algorithms/reco" TYPE FILE FILES
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/Beam.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/Boost.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/ChargedMCParticleSelector.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/ChargedReconstructedParticleSelector.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/ElectronReconstruction.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/ElectronReconstructionConfig.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/InclusiveKinematicsDA.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/InclusiveKinematicsElectron.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/InclusiveKinematicsJB.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/InclusiveKinematicsSigma.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/InclusiveKinematicsTruth.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/InclusiveKinematicseSigma.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/JetReconstruction.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/JetReconstructionConfig.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/MC2SmearedParticle.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/MatchClusters.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/ScatteredElectronsEMinusPz.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/ScatteredElectronsEMinusPzConfig.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/ScatteredElectronsTruth.h"
    "/home/tsai/eic/EICrecon.src/src/algorithms/reco/TransformBreitFrame.h"
    )
endif()

