# CMAKE generated file: DO NOT EDIT!
# Generated by "MSYS Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /C/cmake/bin/cmake.exe

# The command to remove a file.
RM = /C/cmake/bin/cmake.exe -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /C/cmake/bin/cmake-gui.exe

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Z/programming/projects/utils

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Z/programming/projects/utils/build-mingw

# Include any dependencies generated for this target.
include CMakeFiles/utils-static.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/utils-static.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/utils-static.dir/flags.make

CMakeFiles/utils-static.dir/src/utils.cpp.obj: CMakeFiles/utils-static.dir/flags.make
CMakeFiles/utils-static.dir/src/utils.cpp.obj: ../src/utils.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Z/programming/projects/utils/build-mingw/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/utils-static.dir/src/utils.cpp.obj"
	/C/MinGW/bin/g++.exe   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/utils-static.dir/src/utils.cpp.obj -c /Z/programming/projects/utils/src/utils.cpp

CMakeFiles/utils-static.dir/src/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils-static.dir/src/utils.cpp.i"
	/C/MinGW/bin/g++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -E /Z/programming/projects/utils/src/utils.cpp > CMakeFiles/utils-static.dir/src/utils.cpp.i

CMakeFiles/utils-static.dir/src/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils-static.dir/src/utils.cpp.s"
	/C/MinGW/bin/g++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -S /Z/programming/projects/utils/src/utils.cpp -o CMakeFiles/utils-static.dir/src/utils.cpp.s

CMakeFiles/utils-static.dir/src/utils.cpp.obj.requires:
.PHONY : CMakeFiles/utils-static.dir/src/utils.cpp.obj.requires

CMakeFiles/utils-static.dir/src/utils.cpp.obj.provides: CMakeFiles/utils-static.dir/src/utils.cpp.obj.requires
	$(MAKE) -f CMakeFiles/utils-static.dir/build.make CMakeFiles/utils-static.dir/src/utils.cpp.obj.provides.build
.PHONY : CMakeFiles/utils-static.dir/src/utils.cpp.obj.provides

CMakeFiles/utils-static.dir/src/utils.cpp.obj.provides.build: CMakeFiles/utils-static.dir/src/utils.cpp.obj
.PHONY : CMakeFiles/utils-static.dir/src/utils.cpp.obj.provides.build

# Object files for target utils-static
utils__static_OBJECTS = \
"CMakeFiles/utils-static.dir/src/utils.cpp.obj"

# External object files for target utils-static
utils__static_EXTERNAL_OBJECTS =

libutils.a: CMakeFiles/utils-static.dir/src/utils.cpp.obj
libutils.a: CMakeFiles/utils-static.dir/build.make
libutils.a: CMakeFiles/utils-static.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libutils.a"
	$(CMAKE_COMMAND) -P CMakeFiles/utils-static.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/utils-static.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/utils-static.dir/build: libutils.a
.PHONY : CMakeFiles/utils-static.dir/build

CMakeFiles/utils-static.dir/requires: CMakeFiles/utils-static.dir/src/utils.cpp.obj.requires
.PHONY : CMakeFiles/utils-static.dir/requires

CMakeFiles/utils-static.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/utils-static.dir/cmake_clean.cmake
.PHONY : CMakeFiles/utils-static.dir/clean

CMakeFiles/utils-static.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MSYS Makefiles" /Z/programming/projects/utils /Z/programming/projects/utils /Z/programming/projects/utils/build-mingw /Z/programming/projects/utils/build-mingw /Z/programming/projects/utils/build-mingw/CMakeFiles/utils-static.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/utils-static.dir/depend
