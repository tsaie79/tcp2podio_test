# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/cmake-3.27.7-pri2k5ipo2u4nthvxsyude622zxoomt3/bin/cmake

# The command to remove a file.
RM = /opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/cmake-3.27.7-pri2k5ipo2u4nthvxsyude622zxoomt3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tsai/eic/JANA2.src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tsai/eic/JANA2.build

# Include any dependencies generated for this target.
include src/plugins/janarate/CMakeFiles/janarate.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/plugins/janarate/CMakeFiles/janarate.dir/compiler_depend.make

# Include the progress variables for this target.
include src/plugins/janarate/CMakeFiles/janarate.dir/progress.make

# Include the compile flags for this target's objects.
include src/plugins/janarate/CMakeFiles/janarate.dir/flags.make

src/plugins/janarate/CMakeFiles/janarate.dir/JEventProcessorJANARATE.cc.o: src/plugins/janarate/CMakeFiles/janarate.dir/flags.make
src/plugins/janarate/CMakeFiles/janarate.dir/JEventProcessorJANARATE.cc.o: /home/tsai/eic/JANA2.src/src/plugins/janarate/JEventProcessorJANARATE.cc
src/plugins/janarate/CMakeFiles/janarate.dir/JEventProcessorJANARATE.cc.o: src/plugins/janarate/CMakeFiles/janarate.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tsai/eic/JANA2.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/plugins/janarate/CMakeFiles/janarate.dir/JEventProcessorJANARATE.cc.o"
	cd /home/tsai/eic/JANA2.build/src/plugins/janarate && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/plugins/janarate/CMakeFiles/janarate.dir/JEventProcessorJANARATE.cc.o -MF CMakeFiles/janarate.dir/JEventProcessorJANARATE.cc.o.d -o CMakeFiles/janarate.dir/JEventProcessorJANARATE.cc.o -c /home/tsai/eic/JANA2.src/src/plugins/janarate/JEventProcessorJANARATE.cc

src/plugins/janarate/CMakeFiles/janarate.dir/JEventProcessorJANARATE.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/janarate.dir/JEventProcessorJANARATE.cc.i"
	cd /home/tsai/eic/JANA2.build/src/plugins/janarate && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tsai/eic/JANA2.src/src/plugins/janarate/JEventProcessorJANARATE.cc > CMakeFiles/janarate.dir/JEventProcessorJANARATE.cc.i

src/plugins/janarate/CMakeFiles/janarate.dir/JEventProcessorJANARATE.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/janarate.dir/JEventProcessorJANARATE.cc.s"
	cd /home/tsai/eic/JANA2.build/src/plugins/janarate && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tsai/eic/JANA2.src/src/plugins/janarate/JEventProcessorJANARATE.cc -o CMakeFiles/janarate.dir/JEventProcessorJANARATE.cc.s

# Object files for target janarate
janarate_OBJECTS = \
"CMakeFiles/janarate.dir/JEventProcessorJANARATE.cc.o"

# External object files for target janarate
janarate_EXTERNAL_OBJECTS = \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/JApplication.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/JFactory.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/JFactorySet.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/JMultifactory.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JArrowPerfSummary.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JArrowProcessingController.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JArrowTopology.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JDebugProcessingController.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JEventProcessorArrow.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JEventSourceArrow.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JEventMapArrow.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JScheduler.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JWorker.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Services/JComponentManager.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Services/JLoggingService.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Services/JParameterManager.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Services/JPluginLoader.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Status/JComponentSummary.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Status/JPerfMetrics.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Utils/JCpuInfo.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Utils/JProcessorMapping.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Utils/JPerfUtils.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Utils/JStringification.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Utils/JAutoActivator.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Utils/JTablePrinter.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Utils/JCallGraphRecorder.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Utils/JInspector.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Calibrations/JCalibration.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Calibrations/JCalibrationFile.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Calibrations/JLargeCalibration.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/CLI/JBenchmarker.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/CLI/JSignalHandler.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/CLI/JMain.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Compatibility/JStreamLog.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Compatibility/JStreamLogBuffer.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Compatibility/JGeometryManager.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Compatibility/JGeometryMYSQL.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Compatibility/JGeometryXML.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Compatibility/md5.c.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Podio/JEventProcessorPodio.cc.o" \
"/home/tsai/eic/JANA2.build/src/libraries/JANA/CMakeFiles/jana2.dir/Podio/JFactoryPodioT.cc.o"

src/plugins/janarate/janarate.so: src/plugins/janarate/CMakeFiles/janarate.dir/JEventProcessorJANARATE.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/JApplication.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/JFactory.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/JFactorySet.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/JMultifactory.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JArrowPerfSummary.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JArrowProcessingController.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JArrowTopology.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JDebugProcessingController.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JEventProcessorArrow.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JEventSourceArrow.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JEventMapArrow.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JScheduler.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Engine/JWorker.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Services/JComponentManager.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Services/JLoggingService.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Services/JParameterManager.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Services/JPluginLoader.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Status/JComponentSummary.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Status/JPerfMetrics.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Utils/JCpuInfo.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Utils/JProcessorMapping.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Utils/JPerfUtils.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Utils/JStringification.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Utils/JAutoActivator.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Utils/JTablePrinter.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Utils/JCallGraphRecorder.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Utils/JInspector.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Calibrations/JCalibration.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Calibrations/JCalibrationFile.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Calibrations/JLargeCalibration.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/CLI/JBenchmarker.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/CLI/JSignalHandler.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/CLI/JMain.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Compatibility/JStreamLog.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Compatibility/JStreamLogBuffer.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Compatibility/JGeometryManager.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Compatibility/JGeometryMYSQL.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Compatibility/JGeometryXML.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Compatibility/md5.c.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Podio/JEventProcessorPodio.cc.o
src/plugins/janarate/janarate.so: src/libraries/JANA/CMakeFiles/jana2.dir/Podio/JFactoryPodioT.cc.o
src/plugins/janarate/janarate.so: src/plugins/janarate/CMakeFiles/janarate.dir/build.make
src/plugins/janarate/janarate.so: /usr/local/lib/root/libCore.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libImt.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libRIO.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libNet.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libHist.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libGraf.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libGraf3d.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libGpad.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libROOTDataFrame.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libTree.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libTreePlayer.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libRint.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libPostscript.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libMatrix.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libPhysics.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libMathCore.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libThread.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libMultiProc.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libROOTVecOps.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libCore.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libImt.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libRIO.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libNet.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libHist.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libGraf.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libGraf3d.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libGpad.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libROOTDataFrame.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libTree.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libTreePlayer.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libRint.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libPostscript.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libMatrix.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libPhysics.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libMathCore.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libThread.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libMultiProc.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libROOTVecOps.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libCore.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libImt.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libRIO.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libNet.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libHist.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libGraf.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libGraf3d.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libGpad.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libROOTDataFrame.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libTree.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libTreePlayer.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libRint.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libPostscript.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libMatrix.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libPhysics.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libMathCore.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libThread.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libMultiProc.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libROOTVecOps.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libCore.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libImt.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libRIO.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libNet.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libHist.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libGraf.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libGraf3d.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libGpad.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libROOTDataFrame.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libTree.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libTreePlayer.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libRint.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libPostscript.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libMatrix.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libPhysics.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libMathCore.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libThread.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libMultiProc.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libROOTVecOps.so
src/plugins/janarate/janarate.so: /home/tsai/eic/podio/lib/libpodioRootIO.so
src/plugins/janarate/janarate.so: /home/tsai/eic/podio/lib/libpodio.so
src/plugins/janarate/janarate.so: /usr/local/lib/root/libTree.so.6.30.02
src/plugins/janarate/janarate.so: /usr/local/lib/root/libMathCore.so.6.30.02
src/plugins/janarate/janarate.so: /usr/local/lib/root/libImt.so.6.30.02
src/plugins/janarate/janarate.so: /usr/local/lib/root/libMultiProc.so.6.30.02
src/plugins/janarate/janarate.so: /usr/local/lib/root/libNet.so.6.30.02
src/plugins/janarate/janarate.so: /usr/local/lib/root/libRIO.so.6.30.02
src/plugins/janarate/janarate.so: /usr/local/lib/root/libThread.so.6.30.02
src/plugins/janarate/janarate.so: /usr/local/lib/root/libCore.so.6.30.02
src/plugins/janarate/janarate.so: src/plugins/janarate/CMakeFiles/janarate.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/tsai/eic/JANA2.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library janarate.so"
	cd /home/tsai/eic/JANA2.build/src/plugins/janarate && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/janarate.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/plugins/janarate/CMakeFiles/janarate.dir/build: src/plugins/janarate/janarate.so
.PHONY : src/plugins/janarate/CMakeFiles/janarate.dir/build

src/plugins/janarate/CMakeFiles/janarate.dir/clean:
	cd /home/tsai/eic/JANA2.build/src/plugins/janarate && $(CMAKE_COMMAND) -P CMakeFiles/janarate.dir/cmake_clean.cmake
.PHONY : src/plugins/janarate/CMakeFiles/janarate.dir/clean

src/plugins/janarate/CMakeFiles/janarate.dir/depend:
	cd /home/tsai/eic/JANA2.build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tsai/eic/JANA2.src /home/tsai/eic/JANA2.src/src/plugins/janarate /home/tsai/eic/JANA2.build /home/tsai/eic/JANA2.build/src/plugins/janarate /home/tsai/eic/JANA2.build/src/plugins/janarate/CMakeFiles/janarate.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/plugins/janarate/CMakeFiles/janarate.dir/depend

