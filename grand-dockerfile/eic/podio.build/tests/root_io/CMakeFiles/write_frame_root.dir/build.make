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
CMAKE_SOURCE_DIR = /home/tsai/eic/podio.src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tsai/eic/podio.build

# Include any dependencies generated for this target.
include tests/root_io/CMakeFiles/write_frame_root.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/root_io/CMakeFiles/write_frame_root.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/root_io/CMakeFiles/write_frame_root.dir/progress.make

# Include the compile flags for this target's objects.
include tests/root_io/CMakeFiles/write_frame_root.dir/flags.make

tests/root_io/CMakeFiles/write_frame_root.dir/write_frame_root.cpp.o: tests/root_io/CMakeFiles/write_frame_root.dir/flags.make
tests/root_io/CMakeFiles/write_frame_root.dir/write_frame_root.cpp.o: /home/tsai/eic/podio.src/tests/root_io/write_frame_root.cpp
tests/root_io/CMakeFiles/write_frame_root.dir/write_frame_root.cpp.o: tests/root_io/CMakeFiles/write_frame_root.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tsai/eic/podio.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/root_io/CMakeFiles/write_frame_root.dir/write_frame_root.cpp.o"
	cd /home/tsai/eic/podio.build/tests/root_io && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/root_io/CMakeFiles/write_frame_root.dir/write_frame_root.cpp.o -MF CMakeFiles/write_frame_root.dir/write_frame_root.cpp.o.d -o CMakeFiles/write_frame_root.dir/write_frame_root.cpp.o -c /home/tsai/eic/podio.src/tests/root_io/write_frame_root.cpp

tests/root_io/CMakeFiles/write_frame_root.dir/write_frame_root.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/write_frame_root.dir/write_frame_root.cpp.i"
	cd /home/tsai/eic/podio.build/tests/root_io && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tsai/eic/podio.src/tests/root_io/write_frame_root.cpp > CMakeFiles/write_frame_root.dir/write_frame_root.cpp.i

tests/root_io/CMakeFiles/write_frame_root.dir/write_frame_root.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/write_frame_root.dir/write_frame_root.cpp.s"
	cd /home/tsai/eic/podio.build/tests/root_io && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tsai/eic/podio.src/tests/root_io/write_frame_root.cpp -o CMakeFiles/write_frame_root.dir/write_frame_root.cpp.s

# Object files for target write_frame_root
write_frame_root_OBJECTS = \
"CMakeFiles/write_frame_root.dir/write_frame_root.cpp.o"

# External object files for target write_frame_root
write_frame_root_EXTERNAL_OBJECTS =

tests/root_io/write_frame_root: tests/root_io/CMakeFiles/write_frame_root.dir/write_frame_root.cpp.o
tests/root_io/write_frame_root: tests/root_io/CMakeFiles/write_frame_root.dir/build.make
tests/root_io/write_frame_root: tests/libTestDataModelDict.so
tests/root_io/write_frame_root: tests/libExtensionDataModelDict.so
tests/root_io/write_frame_root: src/libpodioRootIO.so
tests/root_io/write_frame_root: tests/libExtensionDataModel.so
tests/root_io/write_frame_root: tests/libTestDataModel.so
tests/root_io/write_frame_root: src/libpodio.so
tests/root_io/write_frame_root: /usr/local/lib/root/libTree.so.6.30.02
tests/root_io/write_frame_root: /usr/local/lib/root/libMathCore.so.6.30.02
tests/root_io/write_frame_root: /usr/local/lib/root/libImt.so.6.30.02
tests/root_io/write_frame_root: /usr/local/lib/root/libMultiProc.so.6.30.02
tests/root_io/write_frame_root: /usr/local/lib/root/libNet.so.6.30.02
tests/root_io/write_frame_root: /usr/local/lib/root/libRIO.so.6.30.02
tests/root_io/write_frame_root: /usr/local/lib/root/libThread.so.6.30.02
tests/root_io/write_frame_root: /usr/local/lib/root/libCore.so.6.30.02
tests/root_io/write_frame_root: tests/root_io/CMakeFiles/write_frame_root.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/tsai/eic/podio.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable write_frame_root"
	cd /home/tsai/eic/podio.build/tests/root_io && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/write_frame_root.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/root_io/CMakeFiles/write_frame_root.dir/build: tests/root_io/write_frame_root
.PHONY : tests/root_io/CMakeFiles/write_frame_root.dir/build

tests/root_io/CMakeFiles/write_frame_root.dir/clean:
	cd /home/tsai/eic/podio.build/tests/root_io && $(CMAKE_COMMAND) -P CMakeFiles/write_frame_root.dir/cmake_clean.cmake
.PHONY : tests/root_io/CMakeFiles/write_frame_root.dir/clean

tests/root_io/CMakeFiles/write_frame_root.dir/depend:
	cd /home/tsai/eic/podio.build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tsai/eic/podio.src /home/tsai/eic/podio.src/tests/root_io /home/tsai/eic/podio.build /home/tsai/eic/podio.build/tests/root_io /home/tsai/eic/podio.build/tests/root_io/CMakeFiles/write_frame_root.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/root_io/CMakeFiles/write_frame_root.dir/depend

