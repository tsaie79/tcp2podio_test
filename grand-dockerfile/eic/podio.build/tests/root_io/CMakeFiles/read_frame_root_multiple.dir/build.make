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
include tests/root_io/CMakeFiles/read_frame_root_multiple.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/root_io/CMakeFiles/read_frame_root_multiple.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/root_io/CMakeFiles/read_frame_root_multiple.dir/progress.make

# Include the compile flags for this target's objects.
include tests/root_io/CMakeFiles/read_frame_root_multiple.dir/flags.make

tests/root_io/CMakeFiles/read_frame_root_multiple.dir/read_frame_root_multiple.cpp.o: tests/root_io/CMakeFiles/read_frame_root_multiple.dir/flags.make
tests/root_io/CMakeFiles/read_frame_root_multiple.dir/read_frame_root_multiple.cpp.o: /home/tsai/eic/podio.src/tests/root_io/read_frame_root_multiple.cpp
tests/root_io/CMakeFiles/read_frame_root_multiple.dir/read_frame_root_multiple.cpp.o: tests/root_io/CMakeFiles/read_frame_root_multiple.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tsai/eic/podio.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/root_io/CMakeFiles/read_frame_root_multiple.dir/read_frame_root_multiple.cpp.o"
	cd /home/tsai/eic/podio.build/tests/root_io && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/root_io/CMakeFiles/read_frame_root_multiple.dir/read_frame_root_multiple.cpp.o -MF CMakeFiles/read_frame_root_multiple.dir/read_frame_root_multiple.cpp.o.d -o CMakeFiles/read_frame_root_multiple.dir/read_frame_root_multiple.cpp.o -c /home/tsai/eic/podio.src/tests/root_io/read_frame_root_multiple.cpp

tests/root_io/CMakeFiles/read_frame_root_multiple.dir/read_frame_root_multiple.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/read_frame_root_multiple.dir/read_frame_root_multiple.cpp.i"
	cd /home/tsai/eic/podio.build/tests/root_io && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tsai/eic/podio.src/tests/root_io/read_frame_root_multiple.cpp > CMakeFiles/read_frame_root_multiple.dir/read_frame_root_multiple.cpp.i

tests/root_io/CMakeFiles/read_frame_root_multiple.dir/read_frame_root_multiple.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/read_frame_root_multiple.dir/read_frame_root_multiple.cpp.s"
	cd /home/tsai/eic/podio.build/tests/root_io && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tsai/eic/podio.src/tests/root_io/read_frame_root_multiple.cpp -o CMakeFiles/read_frame_root_multiple.dir/read_frame_root_multiple.cpp.s

# Object files for target read_frame_root_multiple
read_frame_root_multiple_OBJECTS = \
"CMakeFiles/read_frame_root_multiple.dir/read_frame_root_multiple.cpp.o"

# External object files for target read_frame_root_multiple
read_frame_root_multiple_EXTERNAL_OBJECTS =

tests/root_io/read_frame_root_multiple: tests/root_io/CMakeFiles/read_frame_root_multiple.dir/read_frame_root_multiple.cpp.o
tests/root_io/read_frame_root_multiple: tests/root_io/CMakeFiles/read_frame_root_multiple.dir/build.make
tests/root_io/read_frame_root_multiple: tests/libTestDataModelDict.so
tests/root_io/read_frame_root_multiple: tests/libExtensionDataModelDict.so
tests/root_io/read_frame_root_multiple: src/libpodioRootIO.so
tests/root_io/read_frame_root_multiple: tests/libExtensionDataModel.so
tests/root_io/read_frame_root_multiple: tests/libTestDataModel.so
tests/root_io/read_frame_root_multiple: src/libpodio.so
tests/root_io/read_frame_root_multiple: /usr/local/lib/root/libTree.so.6.30.02
tests/root_io/read_frame_root_multiple: /usr/local/lib/root/libMathCore.so.6.30.02
tests/root_io/read_frame_root_multiple: /usr/local/lib/root/libImt.so.6.30.02
tests/root_io/read_frame_root_multiple: /usr/local/lib/root/libMultiProc.so.6.30.02
tests/root_io/read_frame_root_multiple: /usr/local/lib/root/libNet.so.6.30.02
tests/root_io/read_frame_root_multiple: /usr/local/lib/root/libRIO.so.6.30.02
tests/root_io/read_frame_root_multiple: /usr/local/lib/root/libThread.so.6.30.02
tests/root_io/read_frame_root_multiple: /usr/local/lib/root/libCore.so.6.30.02
tests/root_io/read_frame_root_multiple: tests/root_io/CMakeFiles/read_frame_root_multiple.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/tsai/eic/podio.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable read_frame_root_multiple"
	cd /home/tsai/eic/podio.build/tests/root_io && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/read_frame_root_multiple.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/root_io/CMakeFiles/read_frame_root_multiple.dir/build: tests/root_io/read_frame_root_multiple
.PHONY : tests/root_io/CMakeFiles/read_frame_root_multiple.dir/build

tests/root_io/CMakeFiles/read_frame_root_multiple.dir/clean:
	cd /home/tsai/eic/podio.build/tests/root_io && $(CMAKE_COMMAND) -P CMakeFiles/read_frame_root_multiple.dir/cmake_clean.cmake
.PHONY : tests/root_io/CMakeFiles/read_frame_root_multiple.dir/clean

tests/root_io/CMakeFiles/read_frame_root_multiple.dir/depend:
	cd /home/tsai/eic/podio.build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tsai/eic/podio.src /home/tsai/eic/podio.src/tests/root_io /home/tsai/eic/podio.build /home/tsai/eic/podio.build/tests/root_io /home/tsai/eic/podio.build/tests/root_io/CMakeFiles/read_frame_root_multiple.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/root_io/CMakeFiles/read_frame_root_multiple.dir/depend

