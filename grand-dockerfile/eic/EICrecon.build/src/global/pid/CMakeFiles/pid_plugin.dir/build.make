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
include src/global/pid/CMakeFiles/pid_plugin.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/global/pid/CMakeFiles/pid_plugin.dir/compiler_depend.make

# Include the progress variables for this target.
include src/global/pid/CMakeFiles/pid_plugin.dir/progress.make

# Include the compile flags for this target's objects.
include src/global/pid/CMakeFiles/pid_plugin.dir/flags.make

src/global/pid/CMakeFiles/pid_plugin.dir/IrtCherenkovParticleID_factory.cc.o: src/global/pid/CMakeFiles/pid_plugin.dir/flags.make
src/global/pid/CMakeFiles/pid_plugin.dir/IrtCherenkovParticleID_factory.cc.o: /home/tsai/eic/EICrecon.src/src/global/pid/IrtCherenkovParticleID_factory.cc
src/global/pid/CMakeFiles/pid_plugin.dir/IrtCherenkovParticleID_factory.cc.o: src/global/pid/CMakeFiles/pid_plugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tsai/eic/EICrecon.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/global/pid/CMakeFiles/pid_plugin.dir/IrtCherenkovParticleID_factory.cc.o"
	cd /home/tsai/eic/EICrecon.build/src/global/pid && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/global/pid/CMakeFiles/pid_plugin.dir/IrtCherenkovParticleID_factory.cc.o -MF CMakeFiles/pid_plugin.dir/IrtCherenkovParticleID_factory.cc.o.d -o CMakeFiles/pid_plugin.dir/IrtCherenkovParticleID_factory.cc.o -c /home/tsai/eic/EICrecon.src/src/global/pid/IrtCherenkovParticleID_factory.cc

src/global/pid/CMakeFiles/pid_plugin.dir/IrtCherenkovParticleID_factory.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pid_plugin.dir/IrtCherenkovParticleID_factory.cc.i"
	cd /home/tsai/eic/EICrecon.build/src/global/pid && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tsai/eic/EICrecon.src/src/global/pid/IrtCherenkovParticleID_factory.cc > CMakeFiles/pid_plugin.dir/IrtCherenkovParticleID_factory.cc.i

src/global/pid/CMakeFiles/pid_plugin.dir/IrtCherenkovParticleID_factory.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pid_plugin.dir/IrtCherenkovParticleID_factory.cc.s"
	cd /home/tsai/eic/EICrecon.build/src/global/pid && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tsai/eic/EICrecon.src/src/global/pid/IrtCherenkovParticleID_factory.cc -o CMakeFiles/pid_plugin.dir/IrtCherenkovParticleID_factory.cc.s

src/global/pid/CMakeFiles/pid_plugin.dir/MergeCherenkovParticleID_factory.cc.o: src/global/pid/CMakeFiles/pid_plugin.dir/flags.make
src/global/pid/CMakeFiles/pid_plugin.dir/MergeCherenkovParticleID_factory.cc.o: /home/tsai/eic/EICrecon.src/src/global/pid/MergeCherenkovParticleID_factory.cc
src/global/pid/CMakeFiles/pid_plugin.dir/MergeCherenkovParticleID_factory.cc.o: src/global/pid/CMakeFiles/pid_plugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tsai/eic/EICrecon.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/global/pid/CMakeFiles/pid_plugin.dir/MergeCherenkovParticleID_factory.cc.o"
	cd /home/tsai/eic/EICrecon.build/src/global/pid && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/global/pid/CMakeFiles/pid_plugin.dir/MergeCherenkovParticleID_factory.cc.o -MF CMakeFiles/pid_plugin.dir/MergeCherenkovParticleID_factory.cc.o.d -o CMakeFiles/pid_plugin.dir/MergeCherenkovParticleID_factory.cc.o -c /home/tsai/eic/EICrecon.src/src/global/pid/MergeCherenkovParticleID_factory.cc

src/global/pid/CMakeFiles/pid_plugin.dir/MergeCherenkovParticleID_factory.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pid_plugin.dir/MergeCherenkovParticleID_factory.cc.i"
	cd /home/tsai/eic/EICrecon.build/src/global/pid && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tsai/eic/EICrecon.src/src/global/pid/MergeCherenkovParticleID_factory.cc > CMakeFiles/pid_plugin.dir/MergeCherenkovParticleID_factory.cc.i

src/global/pid/CMakeFiles/pid_plugin.dir/MergeCherenkovParticleID_factory.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pid_plugin.dir/MergeCherenkovParticleID_factory.cc.s"
	cd /home/tsai/eic/EICrecon.build/src/global/pid && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tsai/eic/EICrecon.src/src/global/pid/MergeCherenkovParticleID_factory.cc -o CMakeFiles/pid_plugin.dir/MergeCherenkovParticleID_factory.cc.s

src/global/pid/CMakeFiles/pid_plugin.dir/RichTrack_factory.cc.o: src/global/pid/CMakeFiles/pid_plugin.dir/flags.make
src/global/pid/CMakeFiles/pid_plugin.dir/RichTrack_factory.cc.o: /home/tsai/eic/EICrecon.src/src/global/pid/RichTrack_factory.cc
src/global/pid/CMakeFiles/pid_plugin.dir/RichTrack_factory.cc.o: src/global/pid/CMakeFiles/pid_plugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tsai/eic/EICrecon.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/global/pid/CMakeFiles/pid_plugin.dir/RichTrack_factory.cc.o"
	cd /home/tsai/eic/EICrecon.build/src/global/pid && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/global/pid/CMakeFiles/pid_plugin.dir/RichTrack_factory.cc.o -MF CMakeFiles/pid_plugin.dir/RichTrack_factory.cc.o.d -o CMakeFiles/pid_plugin.dir/RichTrack_factory.cc.o -c /home/tsai/eic/EICrecon.src/src/global/pid/RichTrack_factory.cc

src/global/pid/CMakeFiles/pid_plugin.dir/RichTrack_factory.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pid_plugin.dir/RichTrack_factory.cc.i"
	cd /home/tsai/eic/EICrecon.build/src/global/pid && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tsai/eic/EICrecon.src/src/global/pid/RichTrack_factory.cc > CMakeFiles/pid_plugin.dir/RichTrack_factory.cc.i

src/global/pid/CMakeFiles/pid_plugin.dir/RichTrack_factory.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pid_plugin.dir/RichTrack_factory.cc.s"
	cd /home/tsai/eic/EICrecon.build/src/global/pid && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tsai/eic/EICrecon.src/src/global/pid/RichTrack_factory.cc -o CMakeFiles/pid_plugin.dir/RichTrack_factory.cc.s

src/global/pid/CMakeFiles/pid_plugin.dir/pid.cc.o: src/global/pid/CMakeFiles/pid_plugin.dir/flags.make
src/global/pid/CMakeFiles/pid_plugin.dir/pid.cc.o: /home/tsai/eic/EICrecon.src/src/global/pid/pid.cc
src/global/pid/CMakeFiles/pid_plugin.dir/pid.cc.o: src/global/pid/CMakeFiles/pid_plugin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tsai/eic/EICrecon.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/global/pid/CMakeFiles/pid_plugin.dir/pid.cc.o"
	cd /home/tsai/eic/EICrecon.build/src/global/pid && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/global/pid/CMakeFiles/pid_plugin.dir/pid.cc.o -MF CMakeFiles/pid_plugin.dir/pid.cc.o.d -o CMakeFiles/pid_plugin.dir/pid.cc.o -c /home/tsai/eic/EICrecon.src/src/global/pid/pid.cc

src/global/pid/CMakeFiles/pid_plugin.dir/pid.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/pid_plugin.dir/pid.cc.i"
	cd /home/tsai/eic/EICrecon.build/src/global/pid && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tsai/eic/EICrecon.src/src/global/pid/pid.cc > CMakeFiles/pid_plugin.dir/pid.cc.i

src/global/pid/CMakeFiles/pid_plugin.dir/pid.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/pid_plugin.dir/pid.cc.s"
	cd /home/tsai/eic/EICrecon.build/src/global/pid && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tsai/eic/EICrecon.src/src/global/pid/pid.cc -o CMakeFiles/pid_plugin.dir/pid.cc.s

# Object files for target pid_plugin
pid_plugin_OBJECTS = \
"CMakeFiles/pid_plugin.dir/IrtCherenkovParticleID_factory.cc.o" \
"CMakeFiles/pid_plugin.dir/MergeCherenkovParticleID_factory.cc.o" \
"CMakeFiles/pid_plugin.dir/RichTrack_factory.cc.o" \
"CMakeFiles/pid_plugin.dir/pid.cc.o"

# External object files for target pid_plugin
pid_plugin_EXTERNAL_OBJECTS =

src/global/pid/pid.so: src/global/pid/CMakeFiles/pid_plugin.dir/IrtCherenkovParticleID_factory.cc.o
src/global/pid/pid.so: src/global/pid/CMakeFiles/pid_plugin.dir/MergeCherenkovParticleID_factory.cc.o
src/global/pid/pid.so: src/global/pid/CMakeFiles/pid_plugin.dir/RichTrack_factory.cc.o
src/global/pid/pid.so: src/global/pid/CMakeFiles/pid_plugin.dir/pid.cc.o
src/global/pid/pid.so: src/global/pid/CMakeFiles/pid_plugin.dir/build.make
src/global/pid/pid.so: /usr/local/lib/libActsExamplesFramework.so
src/global/pid/pid.so: /usr/local/lib/libIRT.so
src/global/pid/pid.so: src/algorithms/tracking/libalgorithms_tracking.so
src/global/pid/pid.so: src/algorithms/pid/libalgorithms_pid.so
src/global/pid/pid.so: /usr/local/lib/libActsPluginJson.so
src/global/pid/pid.so: /usr/local/lib/libActsPluginDD4hep.so
src/global/pid/pid.so: /usr/local/lib/libActsPluginTGeo.so
src/global/pid/pid.so: /usr/local/lib/libActsCore.so
src/global/pid/pid.so: /usr/local/lib/libActsExamplesFramework.so
src/global/pid/pid.so: /home/tsai/eic/JANA2/lib/libJANA.so
src/global/pid/pid.so: /usr/local/lib/root/libCore.so
src/global/pid/pid.so: /usr/local/lib/root/libImt.so
src/global/pid/pid.so: /usr/local/lib/root/libRIO.so
src/global/pid/pid.so: /usr/local/lib/root/libNet.so
src/global/pid/pid.so: /usr/local/lib/root/libHist.so
src/global/pid/pid.so: /usr/local/lib/root/libGraf.so
src/global/pid/pid.so: /usr/local/lib/root/libGraf3d.so
src/global/pid/pid.so: /usr/local/lib/root/libGpad.so
src/global/pid/pid.so: /usr/local/lib/root/libROOTDataFrame.so
src/global/pid/pid.so: /usr/local/lib/root/libTree.so
src/global/pid/pid.so: /usr/local/lib/root/libTreePlayer.so
src/global/pid/pid.so: /usr/local/lib/root/libRint.so
src/global/pid/pid.so: /usr/local/lib/root/libPostscript.so
src/global/pid/pid.so: /usr/local/lib/root/libMatrix.so
src/global/pid/pid.so: /usr/local/lib/root/libPhysics.so
src/global/pid/pid.so: /usr/local/lib/root/libMathCore.so
src/global/pid/pid.so: /usr/local/lib/root/libThread.so
src/global/pid/pid.so: /usr/local/lib/root/libMultiProc.so
src/global/pid/pid.so: /usr/local/lib/root/libROOTVecOps.so
src/global/pid/pid.so: /usr/local/lib/root/libCore.so
src/global/pid/pid.so: /usr/local/lib/root/libImt.so
src/global/pid/pid.so: /usr/local/lib/root/libRIO.so
src/global/pid/pid.so: /usr/local/lib/root/libNet.so
src/global/pid/pid.so: /usr/local/lib/root/libHist.so
src/global/pid/pid.so: /usr/local/lib/root/libGraf.so
src/global/pid/pid.so: /usr/local/lib/root/libGraf3d.so
src/global/pid/pid.so: /usr/local/lib/root/libGpad.so
src/global/pid/pid.so: /usr/local/lib/root/libROOTDataFrame.so
src/global/pid/pid.so: /usr/local/lib/root/libTree.so
src/global/pid/pid.so: /usr/local/lib/root/libTreePlayer.so
src/global/pid/pid.so: /usr/local/lib/root/libRint.so
src/global/pid/pid.so: /usr/local/lib/root/libPostscript.so
src/global/pid/pid.so: /usr/local/lib/root/libMatrix.so
src/global/pid/pid.so: /usr/local/lib/root/libPhysics.so
src/global/pid/pid.so: /usr/local/lib/root/libMathCore.so
src/global/pid/pid.so: /usr/local/lib/root/libThread.so
src/global/pid/pid.so: /usr/local/lib/root/libMultiProc.so
src/global/pid/pid.so: /usr/local/lib/root/libROOTVecOps.so
src/global/pid/pid.so: /home/tsai/eic/podio/lib/libpodioRootIO.so
src/global/pid/pid.so: /usr/local/lib/libspdlog.so.1.11.0
src/global/pid/pid.so: /usr/local/lib/libfmt.so.9.1.0
src/global/pid/pid.so: /usr/local/lib/libDDRec.so.1.28
src/global/pid/pid.so: /usr/local/lib/libDDCore.so.1.28
src/global/pid/pid.so: /usr/local/lib/root/libTree.so.6.30.02
src/global/pid/pid.so: /usr/local/lib/libDDParsers.so.1.28
src/global/pid/pid.so: /usr/local/lib/root/libRint.so.6.30.02
src/global/pid/pid.so: /usr/local/lib/root/libGeom.so.6.30.02
src/global/pid/pid.so: /opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/xerces-c-3.2.4-dw2nhv4nc32u3piqwhgg7ds32i2qbahv/lib/libxerces-c.so
src/global/pid/pid.so: /usr/local/lib/root/libEG.so.6.30.02
src/global/pid/pid.so: /usr/local/lib/root/libGraf3d.so.6.30.02
src/global/pid/pid.so: /usr/local/lib/root/libGpad.so.6.30.02
src/global/pid/pid.so: /usr/local/lib/root/libGraf.so.6.30.02
src/global/pid/pid.so: /usr/local/lib/root/libHist.so.6.30.02
src/global/pid/pid.so: /usr/local/lib/libedm4eic.so
src/global/pid/pid.so: /usr/local/lib/libedm4hep.so
src/global/pid/pid.so: /home/tsai/eic/podio/lib/libpodio.so
src/global/pid/pid.so: /usr/local/lib/libIRT.so
src/global/pid/pid.so: /usr/local/lib/root/libPhysics.so.6.30.02
src/global/pid/pid.so: /usr/local/lib/root/libGenVector.so.6.30.02
src/global/pid/pid.so: /usr/local/lib/root/libMatrix.so.6.30.02
src/global/pid/pid.so: /usr/local/lib/root/libMathCore.so.6.30.02
src/global/pid/pid.so: /usr/local/lib/root/libImt.so.6.30.02
src/global/pid/pid.so: /usr/local/lib/root/libMultiProc.so.6.30.02
src/global/pid/pid.so: /usr/local/lib/root/libNet.so.6.30.02
src/global/pid/pid.so: /usr/local/lib/root/libRIO.so.6.30.02
src/global/pid/pid.so: /usr/local/lib/root/libThread.so.6.30.02
src/global/pid/pid.so: /usr/local/lib/root/libCore.so.6.30.02
src/global/pid/pid.so: src/global/pid/CMakeFiles/pid_plugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/tsai/eic/EICrecon.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared library pid.so"
	cd /home/tsai/eic/EICrecon.build/src/global/pid && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pid_plugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/global/pid/CMakeFiles/pid_plugin.dir/build: src/global/pid/pid.so
.PHONY : src/global/pid/CMakeFiles/pid_plugin.dir/build

src/global/pid/CMakeFiles/pid_plugin.dir/clean:
	cd /home/tsai/eic/EICrecon.build/src/global/pid && $(CMAKE_COMMAND) -P CMakeFiles/pid_plugin.dir/cmake_clean.cmake
.PHONY : src/global/pid/CMakeFiles/pid_plugin.dir/clean

src/global/pid/CMakeFiles/pid_plugin.dir/depend:
	cd /home/tsai/eic/EICrecon.build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tsai/eic/EICrecon.src /home/tsai/eic/EICrecon.src/src/global/pid /home/tsai/eic/EICrecon.build /home/tsai/eic/EICrecon.build/src/global/pid /home/tsai/eic/EICrecon.build/src/global/pid/CMakeFiles/pid_plugin.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/global/pid/CMakeFiles/pid_plugin.dir/depend

