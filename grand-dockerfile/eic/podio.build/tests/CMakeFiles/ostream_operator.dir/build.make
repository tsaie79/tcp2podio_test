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
include tests/CMakeFiles/ostream_operator.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/ostream_operator.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/ostream_operator.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/ostream_operator.dir/flags.make

tests/CMakeFiles/ostream_operator.dir/ostream_operator.cpp.o: tests/CMakeFiles/ostream_operator.dir/flags.make
tests/CMakeFiles/ostream_operator.dir/ostream_operator.cpp.o: /home/tsai/eic/podio.src/tests/ostream_operator.cpp
tests/CMakeFiles/ostream_operator.dir/ostream_operator.cpp.o: tests/CMakeFiles/ostream_operator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tsai/eic/podio.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/ostream_operator.dir/ostream_operator.cpp.o"
	cd /home/tsai/eic/podio.build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/ostream_operator.dir/ostream_operator.cpp.o -MF CMakeFiles/ostream_operator.dir/ostream_operator.cpp.o.d -o CMakeFiles/ostream_operator.dir/ostream_operator.cpp.o -c /home/tsai/eic/podio.src/tests/ostream_operator.cpp

tests/CMakeFiles/ostream_operator.dir/ostream_operator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ostream_operator.dir/ostream_operator.cpp.i"
	cd /home/tsai/eic/podio.build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tsai/eic/podio.src/tests/ostream_operator.cpp > CMakeFiles/ostream_operator.dir/ostream_operator.cpp.i

tests/CMakeFiles/ostream_operator.dir/ostream_operator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ostream_operator.dir/ostream_operator.cpp.s"
	cd /home/tsai/eic/podio.build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tsai/eic/podio.src/tests/ostream_operator.cpp -o CMakeFiles/ostream_operator.dir/ostream_operator.cpp.s

# Object files for target ostream_operator
ostream_operator_OBJECTS = \
"CMakeFiles/ostream_operator.dir/ostream_operator.cpp.o"

# External object files for target ostream_operator
ostream_operator_EXTERNAL_OBJECTS =

tests/ostream_operator: tests/CMakeFiles/ostream_operator.dir/ostream_operator.cpp.o
tests/ostream_operator: tests/CMakeFiles/ostream_operator.dir/build.make
tests/ostream_operator: tests/libExtensionDataModel.so
tests/ostream_operator: tests/libTestDataModel.so
tests/ostream_operator: src/libpodio.so
tests/ostream_operator: tests/CMakeFiles/ostream_operator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/tsai/eic/podio.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ostream_operator"
	cd /home/tsai/eic/podio.build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ostream_operator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/ostream_operator.dir/build: tests/ostream_operator
.PHONY : tests/CMakeFiles/ostream_operator.dir/build

tests/CMakeFiles/ostream_operator.dir/clean:
	cd /home/tsai/eic/podio.build/tests && $(CMAKE_COMMAND) -P CMakeFiles/ostream_operator.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/ostream_operator.dir/clean

tests/CMakeFiles/ostream_operator.dir/depend:
	cd /home/tsai/eic/podio.build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tsai/eic/podio.src /home/tsai/eic/podio.src/tests /home/tsai/eic/podio.build /home/tsai/eic/podio.build/tests /home/tsai/eic/podio.build/tests/CMakeFiles/ostream_operator.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/CMakeFiles/ostream_operator.dir/depend

