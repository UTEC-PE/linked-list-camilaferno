# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/camilafernandez/Desktop/ADE/linked-list-camilaferno

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/camilafernandez/Desktop/ADE/linked-list-camilaferno/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/linked_list_camilaferno.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/linked_list_camilaferno.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/linked_list_camilaferno.dir/flags.make

CMakeFiles/linked_list_camilaferno.dir/main.cpp.o: CMakeFiles/linked_list_camilaferno.dir/flags.make
CMakeFiles/linked_list_camilaferno.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/camilafernandez/Desktop/ADE/linked-list-camilaferno/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/linked_list_camilaferno.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/linked_list_camilaferno.dir/main.cpp.o -c /Users/camilafernandez/Desktop/ADE/linked-list-camilaferno/main.cpp

CMakeFiles/linked_list_camilaferno.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linked_list_camilaferno.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/camilafernandez/Desktop/ADE/linked-list-camilaferno/main.cpp > CMakeFiles/linked_list_camilaferno.dir/main.cpp.i

CMakeFiles/linked_list_camilaferno.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linked_list_camilaferno.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/camilafernandez/Desktop/ADE/linked-list-camilaferno/main.cpp -o CMakeFiles/linked_list_camilaferno.dir/main.cpp.s

CMakeFiles/linked_list_camilaferno.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/linked_list_camilaferno.dir/main.cpp.o.requires

CMakeFiles/linked_list_camilaferno.dir/main.cpp.o.provides: CMakeFiles/linked_list_camilaferno.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/linked_list_camilaferno.dir/build.make CMakeFiles/linked_list_camilaferno.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/linked_list_camilaferno.dir/main.cpp.o.provides

CMakeFiles/linked_list_camilaferno.dir/main.cpp.o.provides.build: CMakeFiles/linked_list_camilaferno.dir/main.cpp.o


# Object files for target linked_list_camilaferno
linked_list_camilaferno_OBJECTS = \
"CMakeFiles/linked_list_camilaferno.dir/main.cpp.o"

# External object files for target linked_list_camilaferno
linked_list_camilaferno_EXTERNAL_OBJECTS =

linked_list_camilaferno: CMakeFiles/linked_list_camilaferno.dir/main.cpp.o
linked_list_camilaferno: CMakeFiles/linked_list_camilaferno.dir/build.make
linked_list_camilaferno: CMakeFiles/linked_list_camilaferno.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/camilafernandez/Desktop/ADE/linked-list-camilaferno/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable linked_list_camilaferno"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/linked_list_camilaferno.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/linked_list_camilaferno.dir/build: linked_list_camilaferno

.PHONY : CMakeFiles/linked_list_camilaferno.dir/build

CMakeFiles/linked_list_camilaferno.dir/requires: CMakeFiles/linked_list_camilaferno.dir/main.cpp.o.requires

.PHONY : CMakeFiles/linked_list_camilaferno.dir/requires

CMakeFiles/linked_list_camilaferno.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/linked_list_camilaferno.dir/cmake_clean.cmake
.PHONY : CMakeFiles/linked_list_camilaferno.dir/clean

CMakeFiles/linked_list_camilaferno.dir/depend:
	cd /Users/camilafernandez/Desktop/ADE/linked-list-camilaferno/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/camilafernandez/Desktop/ADE/linked-list-camilaferno /Users/camilafernandez/Desktop/ADE/linked-list-camilaferno /Users/camilafernandez/Desktop/ADE/linked-list-camilaferno/cmake-build-debug /Users/camilafernandez/Desktop/ADE/linked-list-camilaferno/cmake-build-debug /Users/camilafernandez/Desktop/ADE/linked-list-camilaferno/cmake-build-debug/CMakeFiles/linked_list_camilaferno.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/linked_list_camilaferno.dir/depend

