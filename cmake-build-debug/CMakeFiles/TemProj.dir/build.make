# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/e/feng/cpp-primer/TemProj

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/e/feng/cpp-primer/TemProj/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TemProj.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TemProj.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TemProj.dir/flags.make

CMakeFiles/TemProj.dir/main.cpp.o: CMakeFiles/TemProj.dir/flags.make
CMakeFiles/TemProj.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/e/feng/cpp-primer/TemProj/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TemProj.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TemProj.dir/main.cpp.o -c /mnt/e/feng/cpp-primer/TemProj/main.cpp

CMakeFiles/TemProj.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TemProj.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/e/feng/cpp-primer/TemProj/main.cpp > CMakeFiles/TemProj.dir/main.cpp.i

CMakeFiles/TemProj.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TemProj.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/e/feng/cpp-primer/TemProj/main.cpp -o CMakeFiles/TemProj.dir/main.cpp.s

CMakeFiles/TemProj.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/TemProj.dir/main.cpp.o.requires

CMakeFiles/TemProj.dir/main.cpp.o.provides: CMakeFiles/TemProj.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/TemProj.dir/build.make CMakeFiles/TemProj.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/TemProj.dir/main.cpp.o.provides

CMakeFiles/TemProj.dir/main.cpp.o.provides.build: CMakeFiles/TemProj.dir/main.cpp.o


CMakeFiles/TemProj.dir/example.cpp.o: CMakeFiles/TemProj.dir/flags.make
CMakeFiles/TemProj.dir/example.cpp.o: ../example.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/e/feng/cpp-primer/TemProj/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TemProj.dir/example.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TemProj.dir/example.cpp.o -c /mnt/e/feng/cpp-primer/TemProj/example.cpp

CMakeFiles/TemProj.dir/example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TemProj.dir/example.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/e/feng/cpp-primer/TemProj/example.cpp > CMakeFiles/TemProj.dir/example.cpp.i

CMakeFiles/TemProj.dir/example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TemProj.dir/example.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/e/feng/cpp-primer/TemProj/example.cpp -o CMakeFiles/TemProj.dir/example.cpp.s

CMakeFiles/TemProj.dir/example.cpp.o.requires:

.PHONY : CMakeFiles/TemProj.dir/example.cpp.o.requires

CMakeFiles/TemProj.dir/example.cpp.o.provides: CMakeFiles/TemProj.dir/example.cpp.o.requires
	$(MAKE) -f CMakeFiles/TemProj.dir/build.make CMakeFiles/TemProj.dir/example.cpp.o.provides.build
.PHONY : CMakeFiles/TemProj.dir/example.cpp.o.provides

CMakeFiles/TemProj.dir/example.cpp.o.provides.build: CMakeFiles/TemProj.dir/example.cpp.o


# Object files for target TemProj
TemProj_OBJECTS = \
"CMakeFiles/TemProj.dir/main.cpp.o" \
"CMakeFiles/TemProj.dir/example.cpp.o"

# External object files for target TemProj
TemProj_EXTERNAL_OBJECTS =

TemProj: CMakeFiles/TemProj.dir/main.cpp.o
TemProj: CMakeFiles/TemProj.dir/example.cpp.o
TemProj: CMakeFiles/TemProj.dir/build.make
TemProj: CMakeFiles/TemProj.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/e/feng/cpp-primer/TemProj/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable TemProj"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TemProj.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TemProj.dir/build: TemProj

.PHONY : CMakeFiles/TemProj.dir/build

CMakeFiles/TemProj.dir/requires: CMakeFiles/TemProj.dir/main.cpp.o.requires
CMakeFiles/TemProj.dir/requires: CMakeFiles/TemProj.dir/example.cpp.o.requires

.PHONY : CMakeFiles/TemProj.dir/requires

CMakeFiles/TemProj.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TemProj.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TemProj.dir/clean

CMakeFiles/TemProj.dir/depend:
	cd /mnt/e/feng/cpp-primer/TemProj/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/e/feng/cpp-primer/TemProj /mnt/e/feng/cpp-primer/TemProj /mnt/e/feng/cpp-primer/TemProj/cmake-build-debug /mnt/e/feng/cpp-primer/TemProj/cmake-build-debug /mnt/e/feng/cpp-primer/TemProj/cmake-build-debug/CMakeFiles/TemProj.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TemProj.dir/depend

