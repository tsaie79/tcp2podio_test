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

# Utility rule file for podioDict-dictgen.

# Include any custom commands dependencies for this target.
include src/CMakeFiles/podioDict-dictgen.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/podioDict-dictgen.dir/progress.make

src/CMakeFiles/podioDict-dictgen: src/podioDict.cxx

src/podioDict.cxx: /home/tsai/eic/podio.src/include/podio/CollectionBase.h
src/podioDict.cxx: /home/tsai/eic/podio.src/include/podio/CollectionIDTable.h
src/podioDict.cxx: /home/tsai/eic/podio.src/include/podio/ICollectionProvider.h
src/podioDict.cxx: /home/tsai/eic/podio.src/include/podio/ObjectID.h
src/podioDict.cxx: /home/tsai/eic/podio.src/include/podio/UserDataCollection.h
src/podioDict.cxx: /home/tsai/eic/podio.src/include/podio/podioVersion.h
src/podioDict.cxx: /home/tsai/eic/podio.src/include/podio/DatamodelRegistry.h
src/podioDict.cxx: /home/tsai/eic/podio.src/include/podio/utilities/DatamodelRegistryIOHelpers.h
src/podioDict.cxx: /home/tsai/eic/podio.src/include/podio/GenericParameters.h
src/podioDict.cxx: /home/tsai/eic/podio.src/src/selection.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/tsai/eic/podio.build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating podioDict.cxx, podioDictDict.rootmap"
	cd /home/tsai/eic/podio.build/src && /usr/local/bin/genreflex /home/tsai/eic/podio.src/include/podio/CollectionBase.h /home/tsai/eic/podio.src/include/podio/CollectionIDTable.h /home/tsai/eic/podio.src/include/podio/ICollectionProvider.h /home/tsai/eic/podio.src/include/podio/ObjectID.h /home/tsai/eic/podio.src/include/podio/UserDataCollection.h /home/tsai/eic/podio.src/include/podio/podioVersion.h /home/tsai/eic/podio.src/include/podio/DatamodelRegistry.h /home/tsai/eic/podio.src/include/podio/utilities/DatamodelRegistryIOHelpers.h /home/tsai/eic/podio.src/include/podio/GenericParameters.h -o podioDict.cxx --rootmap=podioDictDict.rootmap --rootmap-lib=libpodioDictDict --select=/home/tsai/eic/podio.src/src/selection.xml --gccxmlpath=/bin --library libpodioDict.so -I/home/tsai/eic/podio.src/src -I/home/tsai/eic/podio.src/include -I/home/tsai/eic/podio.src/include -I/usr/local/include/root -I/usr/local/include/root -I/usr/local/include/root -I/usr/local/include/root -I/usr/local/include/root -I/usr/local/include/root -I/usr/local/include/root -I/usr/local/include/root

src/podioDictDict.rootmap: src/podioDict.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate src/podioDictDict.rootmap

podioDict-dictgen: src/CMakeFiles/podioDict-dictgen
podioDict-dictgen: src/podioDict.cxx
podioDict-dictgen: src/podioDictDict.rootmap
podioDict-dictgen: src/CMakeFiles/podioDict-dictgen.dir/build.make
.PHONY : podioDict-dictgen

# Rule to build all files generated by this target.
src/CMakeFiles/podioDict-dictgen.dir/build: podioDict-dictgen
.PHONY : src/CMakeFiles/podioDict-dictgen.dir/build

src/CMakeFiles/podioDict-dictgen.dir/clean:
	cd /home/tsai/eic/podio.build/src && $(CMAKE_COMMAND) -P CMakeFiles/podioDict-dictgen.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/podioDict-dictgen.dir/clean

src/CMakeFiles/podioDict-dictgen.dir/depend:
	cd /home/tsai/eic/podio.build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tsai/eic/podio.src /home/tsai/eic/podio.src/src /home/tsai/eic/podio.build /home/tsai/eic/podio.build/src /home/tsai/eic/podio.build/src/CMakeFiles/podioDict-dictgen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/CMakeFiles/podioDict-dictgen.dir/depend

