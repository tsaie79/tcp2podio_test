# Install script for directory: /home/tsai/eic/JANA2.src/src/libraries/JANA

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/tsai/eic/JANA2")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/tsai/eic/JANA2.build/src/libraries/JANA/CLI/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/tsai/eic/JANA2.build/src/libraries/JANA/libJANA.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libJANA.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libJANA.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libJANA.so"
         RPATH "/home/tsai/eic/JANA2/lib:/usr/local/lib/root:/home/tsai/eic/podio/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/tsai/eic/JANA2.build/src/libraries/JANA/libJANA.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libJANA.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libJANA.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libJANA.so"
         OLD_RPATH "/usr/local/lib/root:/home/tsai/eic/podio/lib:::::::::::::::::::::::::"
         NEW_RPATH "/home/tsai/eic/JANA2/lib:/usr/local/lib/root:/home/tsai/eic/podio/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libJANA.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/JANA/JANATargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/JANA/JANATargets.cmake"
         "/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/Export/8eb54cd4a3f5c704689f49c92f506e22/JANATargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/JANA/JANATargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/JANA/JANATargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/JANA" TYPE FILE FILES "/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/Export/8eb54cd4a3f5c704689f49c92f506e22/JANATargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/JANA" TYPE FILE FILES "/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/Export/8eb54cd4a3f5c704689f49c92f506e22/JANATargets-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/JANA" TYPE FILE FILES "/home/tsai/eic/JANA2.build/src/libraries/JANA/JANAConfig.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/JANA" TYPE FILE FILES "/home/tsai/eic/JANA2.build/src/libraries/JANA/JANAConfigVersion.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/JANA" TYPE FILE FILES
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JApplication.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JBlockedEventSource.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JCsvWriter.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JEvent.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JEventProcessor.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JEventProcessorSequential.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JEventProcessorSequentialRoot.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JEventSource.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JEventSourceGenerator.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JEventSourceGeneratorT.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JEventUnfolder.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JException.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JFactory.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JFactoryGenerator.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JFactorySet.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JFactoryT.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JLogger.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JMultifactory.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JObject.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/JSourceFactoryGenerator.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/JANA/Engine" TYPE FILE FILES
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JArrow.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JArrowMetrics.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JArrowPerfSummary.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JArrowProcessingController.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JArrowTopology.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JBlockDisentanglerArrow.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JBlockSourceArrow.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JDebugProcessingController.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JEventMapArrow.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JEventProcessorArrow.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JEventSourceArrow.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JFoldArrow.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JJunctionArrow.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JMailbox.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JPipelineArrow.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JPool.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JScheduler.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JSubeventArrow.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JTopologyBuilder.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JUnfoldArrow.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JWorker.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Engine/JWorkerMetrics.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/JANA/Services" TYPE FILE FILES
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Services/JComponentManager.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Services/JEventGroupTracker.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Services/JGlobalRootLock.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Services/JLoggingService.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Services/JParameterManager.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Services/JPluginLoader.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Services/JProcessingController.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Services/JServiceLocator.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/JANA/Status" TYPE FILE FILES
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Status/JComponentSummary.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Status/JPerfMetrics.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Status/JPerfSummary.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Status/JStatusSummary.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/JANA/Streaming" TYPE FILE FILES
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Streaming/JDiscreteJoin.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Streaming/JEventBuilder.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Streaming/JMergeWindow.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Streaming/JMessage.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Streaming/JSessionWindow.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Streaming/JStreamingEventSource.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Streaming/JTransport.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Streaming/JTrigger.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Streaming/JTrivialWindow.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Streaming/JWindow.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/JANA/Utils" TYPE FILE FILES
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Utils/JAny.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Utils/JAutoActivator.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Utils/JBacktrace.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Utils/JCallGraphEntryMaker.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Utils/JCallGraphRecorder.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Utils/JCpuInfo.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Utils/JEventKey.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Utils/JEventLevel.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Utils/JEventPool.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Utils/JInspector.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Utils/JPerfUtils.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Utils/JProcessorMapping.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Utils/JResettable.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Utils/JResourcePool.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Utils/JStringification.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Utils/JTablePrinter.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Utils/JTypeInfo.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/JANA/Calibrations" TYPE FILE FILES
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Calibrations/JCalibration.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Calibrations/JCalibrationCCDB.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Calibrations/JCalibrationFile.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Calibrations/JCalibrationGenerator.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Calibrations/JCalibrationGeneratorCCDB.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Calibrations/JCalibrationManager.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Calibrations/JLargeCalibration.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/JANA/CLI" TYPE FILE FILES
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/CLI/JBenchmarker.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/CLI/JMain.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/CLI/JSignalHandler.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/CLI/JVersion.h.in"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/JANA/Compatibility" TYPE FILE FILES
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Compatibility/JGeometry.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Compatibility/JGeometryMYSQL.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Compatibility/JGeometryManager.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Compatibility/JGeometryXML.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Compatibility/JGetObjectsFactory.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Compatibility/JLockService.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Compatibility/JStatusBits.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Compatibility/JStreamLog.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Compatibility/JStreamLogBuffer.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Compatibility/cint.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Compatibility/jerror.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Compatibility/md5.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/JANA/Omni" TYPE FILE FILES
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Omni/JComponent.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Omni/JHasInputs.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Omni/JHasOutputs.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Omni/JHasRunCallbacks.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Omni/JOmniFactory.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Omni/JOmniFactoryGeneratorT.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/JANA/Podio" TYPE FILE FILES
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Podio/JEventProcessorPodio.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Podio/JEventSourcePodio.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Podio/JFactoryPodioT.h"
    "/home/tsai/eic/JANA2.src/src/libraries/JANA/Podio/JPodioTypeHelpers.h"
    )
endif()

