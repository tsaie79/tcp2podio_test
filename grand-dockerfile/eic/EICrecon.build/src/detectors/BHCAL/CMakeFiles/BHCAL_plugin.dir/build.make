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
include src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/compiler_depend.make

# Include the progress variables for this target.
include src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/progress.make

# Include the compile flags for this target's objects.
include src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/flags.make

src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/BHCAL.cc.o: src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/flags.make
src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/BHCAL.cc.o: /home/tsai/eic/EICrecon.src/src/detectors/BHCAL/BHCAL.cc
src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/BHCAL.cc.o: src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tsai/eic/EICrecon.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/BHCAL.cc.o"
	cd /home/tsai/eic/EICrecon.build/src/detectors/BHCAL && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/BHCAL.cc.o -MF CMakeFiles/BHCAL_plugin.dir/BHCAL.cc.o.d -o CMakeFiles/BHCAL_plugin.dir/BHCAL.cc.o -c /home/tsai/eic/EICrecon.src/src/detectors/BHCAL/BHCAL.cc

src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/BHCAL.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/BHCAL_plugin.dir/BHCAL.cc.i"
	cd /home/tsai/eic/EICrecon.build/src/detectors/BHCAL && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tsai/eic/EICrecon.src/src/detectors/BHCAL/BHCAL.cc > CMakeFiles/BHCAL_plugin.dir/BHCAL.cc.i

src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/BHCAL.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/BHCAL_plugin.dir/BHCAL.cc.s"
	cd /home/tsai/eic/EICrecon.build/src/detectors/BHCAL && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tsai/eic/EICrecon.src/src/detectors/BHCAL/BHCAL.cc -o CMakeFiles/BHCAL_plugin.dir/BHCAL.cc.s

# Object files for target BHCAL_plugin
BHCAL_plugin_OBJECTS = \
"CMakeFiles/BHCAL_plugin.dir/BHCAL.cc.o"

# External object files for target BHCAL_plugin
BHCAL_plugin_EXTERNAL_OBJECTS =

src/detectors/BHCAL/BHCAL.so: src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/BHCAL.cc.o
src/detectors/BHCAL/BHCAL.so: src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/build.make
src/detectors/BHCAL/BHCAL.so: src/algorithms/calorimetry/libalgorithms_calorimetry.so
src/detectors/BHCAL/BHCAL.so: /home/tsai/eic/JANA2/lib/libJANA.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libCore.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libImt.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libRIO.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libNet.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libHist.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libGraf.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libGraf3d.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libGpad.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libROOTDataFrame.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libTree.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libTreePlayer.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libRint.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libPostscript.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libMatrix.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libPhysics.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libMathCore.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libThread.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libMultiProc.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libROOTVecOps.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libCore.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libImt.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libRIO.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libNet.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libHist.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libGraf.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libGraf3d.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libGpad.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libROOTDataFrame.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libTree.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libTreePlayer.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libRint.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libPostscript.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libMatrix.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libPhysics.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libMathCore.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libThread.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libMultiProc.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libROOTVecOps.so
src/detectors/BHCAL/BHCAL.so: /home/tsai/eic/podio/lib/libpodioRootIO.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/libspdlog.so.1.11.0
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/libalgocore.so.1.0.0
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/libfmt.so.9.1.0
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/libedm4eic.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/libedm4hep.so
src/detectors/BHCAL/BHCAL.so: /home/tsai/eic/podio/lib/libpodio.so
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/libDDRec.so.1.28
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/libDDCore.so.1.28
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libTree.so.6.30.02
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/libDDParsers.so.1.28
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libRint.so.6.30.02
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libPhysics.so.6.30.02
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libGeom.so.6.30.02
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libHist.so.6.30.02
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libMatrix.so.6.30.02
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libGenVector.so.6.30.02
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libMathCore.so.6.30.02
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libImt.so.6.30.02
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libMultiProc.so.6.30.02
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libNet.so.6.30.02
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libRIO.so.6.30.02
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libThread.so.6.30.02
src/detectors/BHCAL/BHCAL.so: /usr/local/lib/root/libCore.so.6.30.02
src/detectors/BHCAL/BHCAL.so: /opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/xerces-c-3.2.4-dw2nhv4nc32u3piqwhgg7ds32i2qbahv/lib/libxerces-c.so
src/detectors/BHCAL/BHCAL.so: src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/tsai/eic/EICrecon.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library BHCAL.so"
	cd /home/tsai/eic/EICrecon.build/src/detectors/BHCAL && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BHCAL_plugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/build: src/detectors/BHCAL/BHCAL.so
.PHONY : src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/build

src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/clean:
	cd /home/tsai/eic/EICrecon.build/src/detectors/BHCAL && $(CMAKE_COMMAND) -P CMakeFiles/BHCAL_plugin.dir/cmake_clean.cmake
.PHONY : src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/clean

src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/depend:
	cd /home/tsai/eic/EICrecon.build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tsai/eic/EICrecon.src /home/tsai/eic/EICrecon.src/src/detectors/BHCAL /home/tsai/eic/EICrecon.build /home/tsai/eic/EICrecon.build/src/detectors/BHCAL /home/tsai/eic/EICrecon.build/src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/detectors/BHCAL/CMakeFiles/BHCAL_plugin.dir/depend

