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

# Utility rule file for G__Hit.

# Include any custom commands dependencies for this target.
include src/plugins/JTestRoot/CMakeFiles/G__Hit.dir/compiler_depend.make

# Include the progress variables for this target.
include src/plugins/JTestRoot/CMakeFiles/G__Hit.dir/progress.make

src/plugins/JTestRoot/CMakeFiles/G__Hit: src/plugins/JTestRoot/G__Hit.cxx
src/plugins/JTestRoot/CMakeFiles/G__Hit: src/plugins/JTestRoot/libHit_rdict.pcm
src/plugins/JTestRoot/CMakeFiles/G__Hit: src/plugins/JTestRoot/libHit.rootmap

src/plugins/JTestRoot/G__Hit.cxx: /home/tsai/eic/JANA2.src/src/plugins/JTestRoot/Hit.h
src/plugins/JTestRoot/G__Hit.cxx: /home/tsai/eic/JANA2.src/src/plugins/JTestRoot/Hit.h
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/tsai/eic/JANA2.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__Hit.cxx, libHit_rdict.pcm, libHit.rootmap"
	cd /home/tsai/eic/JANA2.build/src/plugins/JTestRoot && /opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/cmake-3.27.7-pri2k5ipo2u4nthvxsyude622zxoomt3/bin/cmake -E env LD_LIBRARY_PATH=/usr/local/lib/root:/home/tsai/eic/podio/lib:/opt/detector/epic-nightly/lib:/usr/local/lib64:/usr/local/lib /usr/local/bin/rootcling -v2 -f G__Hit.cxx -s /home/tsai/eic/JANA2.build/src/plugins/JTestRoot/libHit.so -rml libHit.so -rmf /home/tsai/eic/JANA2.build/src/plugins/JTestRoot/libHit.rootmap -DJANA2_HAVE_ROOT -DJANA2_HAVE_PODIO -compilerI/usr/local/include/eigen3 -compilerI/usr/include/c++/12 -compilerI/usr/include/x86_64-linux-gnu/c++/12 -compilerI/usr/include/c++/12/backward -compilerI/usr/lib/gcc/x86_64-linux-gnu/12/include -compilerI/usr/local/include -compilerI/usr/include/x86_64-linux-gnu -compilerI/usr/include -compilerI/usr/local/include/eigen3 -compilerI/usr/local/include -compilerI/usr/lib/gcc/x86_64-linux-gnu/12/include -compilerI/usr/include/x86_64-linux-gnu -compilerI/usr/include -I/usr/local/include/root -I/home/tsai/eic/podio/include -I/home/tsai/eic/JANA2.src/src/libraries -I/home/tsai/eic/JANA2.src/src/plugins/JTestRoot Hit.h

src/plugins/JTestRoot/libHit_rdict.pcm: src/plugins/JTestRoot/G__Hit.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate src/plugins/JTestRoot/libHit_rdict.pcm

src/plugins/JTestRoot/libHit.rootmap: src/plugins/JTestRoot/G__Hit.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate src/plugins/JTestRoot/libHit.rootmap

G__Hit: src/plugins/JTestRoot/CMakeFiles/G__Hit
G__Hit: src/plugins/JTestRoot/G__Hit.cxx
G__Hit: src/plugins/JTestRoot/libHit.rootmap
G__Hit: src/plugins/JTestRoot/libHit_rdict.pcm
G__Hit: src/plugins/JTestRoot/CMakeFiles/G__Hit.dir/build.make
.PHONY : G__Hit

# Rule to build all files generated by this target.
src/plugins/JTestRoot/CMakeFiles/G__Hit.dir/build: G__Hit
.PHONY : src/plugins/JTestRoot/CMakeFiles/G__Hit.dir/build

src/plugins/JTestRoot/CMakeFiles/G__Hit.dir/clean:
	cd /home/tsai/eic/JANA2.build/src/plugins/JTestRoot && $(CMAKE_COMMAND) -P CMakeFiles/G__Hit.dir/cmake_clean.cmake
.PHONY : src/plugins/JTestRoot/CMakeFiles/G__Hit.dir/clean

src/plugins/JTestRoot/CMakeFiles/G__Hit.dir/depend:
	cd /home/tsai/eic/JANA2.build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tsai/eic/JANA2.src /home/tsai/eic/JANA2.src/src/plugins/JTestRoot /home/tsai/eic/JANA2.build /home/tsai/eic/JANA2.build/src/plugins/JTestRoot /home/tsai/eic/JANA2.build/src/plugins/JTestRoot/CMakeFiles/G__Hit.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/plugins/JTestRoot/CMakeFiles/G__Hit.dir/depend

