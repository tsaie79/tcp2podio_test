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
CMAKE_SOURCE_DIR = /home/tsai/eic/EICrecon.src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tsai/eic/EICrecon.build

# Include any dependencies generated for this target.
include src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/compiler_depend.make

# Include the progress variables for this target.
include src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/progress.make

# Include the compile flags for this target's objects.
include src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/flags.make

src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/TofEfficiency_processor.cc.o: src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/flags.make
src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/TofEfficiency_processor.cc.o: /home/tsai/eic/EICrecon.src/src/benchmarks/reconstruction/tof_efficiency/TofEfficiency_processor.cc
src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/TofEfficiency_processor.cc.o: src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tsai/eic/EICrecon.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/TofEfficiency_processor.cc.o"
	cd /home/tsai/eic/EICrecon.build/src/benchmarks/reconstruction/tof_efficiency && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/TofEfficiency_processor.cc.o -MF CMakeFiles/tof_efficiency_plugin.dir/TofEfficiency_processor.cc.o.d -o CMakeFiles/tof_efficiency_plugin.dir/TofEfficiency_processor.cc.o -c /home/tsai/eic/EICrecon.src/src/benchmarks/reconstruction/tof_efficiency/TofEfficiency_processor.cc

src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/TofEfficiency_processor.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tof_efficiency_plugin.dir/TofEfficiency_processor.cc.i"
	cd /home/tsai/eic/EICrecon.build/src/benchmarks/reconstruction/tof_efficiency && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tsai/eic/EICrecon.src/src/benchmarks/reconstruction/tof_efficiency/TofEfficiency_processor.cc > CMakeFiles/tof_efficiency_plugin.dir/TofEfficiency_processor.cc.i

src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/TofEfficiency_processor.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tof_efficiency_plugin.dir/TofEfficiency_processor.cc.s"
	cd /home/tsai/eic/EICrecon.build/src/benchmarks/reconstruction/tof_efficiency && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tsai/eic/EICrecon.src/src/benchmarks/reconstruction/tof_efficiency/TofEfficiency_processor.cc -o CMakeFiles/tof_efficiency_plugin.dir/TofEfficiency_processor.cc.s

src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/tof_efficiency.cc.o: src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/flags.make
src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/tof_efficiency.cc.o: /home/tsai/eic/EICrecon.src/src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.cc
src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/tof_efficiency.cc.o: src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tsai/eic/EICrecon.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/tof_efficiency.cc.o"
	cd /home/tsai/eic/EICrecon.build/src/benchmarks/reconstruction/tof_efficiency && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/tof_efficiency.cc.o -MF CMakeFiles/tof_efficiency_plugin.dir/tof_efficiency.cc.o.d -o CMakeFiles/tof_efficiency_plugin.dir/tof_efficiency.cc.o -c /home/tsai/eic/EICrecon.src/src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.cc

src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/tof_efficiency.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tof_efficiency_plugin.dir/tof_efficiency.cc.i"
	cd /home/tsai/eic/EICrecon.build/src/benchmarks/reconstruction/tof_efficiency && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tsai/eic/EICrecon.src/src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.cc > CMakeFiles/tof_efficiency_plugin.dir/tof_efficiency.cc.i

src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/tof_efficiency.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tof_efficiency_plugin.dir/tof_efficiency.cc.s"
	cd /home/tsai/eic/EICrecon.build/src/benchmarks/reconstruction/tof_efficiency && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tsai/eic/EICrecon.src/src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.cc -o CMakeFiles/tof_efficiency_plugin.dir/tof_efficiency.cc.s

# Object files for target tof_efficiency_plugin
tof_efficiency_plugin_OBJECTS = \
"CMakeFiles/tof_efficiency_plugin.dir/TofEfficiency_processor.cc.o" \
"CMakeFiles/tof_efficiency_plugin.dir/tof_efficiency.cc.o"

# External object files for target tof_efficiency_plugin
tof_efficiency_plugin_EXTERNAL_OBJECTS =

src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/TofEfficiency_processor.cc.o
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/tof_efficiency.cc.o
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/build.make
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /home/tsai/eic/JANA2/lib/libJANA.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /home/tsai/eic/podio/lib/libpodioRootIO.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/libspdlog.so.1.11.0
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/libfmt.so.9.1.0
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/libActsPluginJson.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/libActsPluginDD4hep.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/libActsExamplesFramework.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libEG.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/libedm4eic.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libCore.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libImt.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libRIO.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libNet.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libHist.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libGraf.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libGraf3d.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libGpad.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libROOTDataFrame.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libTree.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libTreePlayer.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libRint.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libPostscript.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libMatrix.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libPhysics.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libMathCore.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libThread.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libMultiProc.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libROOTVecOps.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libCore.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libImt.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libRIO.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libNet.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libHist.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libGraf.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libGraf3d.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libGpad.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libROOTDataFrame.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libTree.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libTreePlayer.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libRint.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libPostscript.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libMatrix.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libPhysics.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libMathCore.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libThread.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libMultiProc.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libROOTVecOps.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/libDDRec.so.1.28
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/libDDCore.so.1.28
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libTree.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/libDDParsers.so.1.28
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libRint.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/xerces-c-3.2.4-dw2nhv4nc32u3piqwhgg7ds32i2qbahv/lib/libxerces-c.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/libActsPluginTGeo.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/libActsCore.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libGeom.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/libedm4hep.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /home/tsai/eic/podio/lib/libpodio.so
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libPhysics.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libGenVector.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libGraf3d.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libGpad.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libGraf.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libHist.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libMatrix.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libMathCore.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libImt.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libMultiProc.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libNet.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libRIO.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libThread.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: /usr/local/lib/root/libCore.so.6.30.02
src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so: src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/tsai/eic/EICrecon.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library tof_efficiency.so"
	cd /home/tsai/eic/EICrecon.build/src/benchmarks/reconstruction/tof_efficiency && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tof_efficiency_plugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/build: src/benchmarks/reconstruction/tof_efficiency/tof_efficiency.so
.PHONY : src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/build

src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/clean:
	cd /home/tsai/eic/EICrecon.build/src/benchmarks/reconstruction/tof_efficiency && $(CMAKE_COMMAND) -P CMakeFiles/tof_efficiency_plugin.dir/cmake_clean.cmake
.PHONY : src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/clean

src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/depend:
	cd /home/tsai/eic/EICrecon.build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tsai/eic/EICrecon.src /home/tsai/eic/EICrecon.src/src/benchmarks/reconstruction/tof_efficiency /home/tsai/eic/EICrecon.build /home/tsai/eic/EICrecon.build/src/benchmarks/reconstruction/tof_efficiency /home/tsai/eic/EICrecon.build/src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/benchmarks/reconstruction/tof_efficiency/CMakeFiles/tof_efficiency_plugin.dir/depend

