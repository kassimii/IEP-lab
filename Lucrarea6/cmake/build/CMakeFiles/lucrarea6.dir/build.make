# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/kassimii/IEP/Lucrarea6/cmake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kassimii/IEP/Lucrarea6/cmake/build

# Include any dependencies generated for this target.
include CMakeFiles/lucrarea6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lucrarea6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lucrarea6.dir/flags.make

CMakeFiles/lucrarea6.dir/home/kassimii/IEP/Lucrarea6/lucrarea6.cpp.o: CMakeFiles/lucrarea6.dir/flags.make
CMakeFiles/lucrarea6.dir/home/kassimii/IEP/Lucrarea6/lucrarea6.cpp.o: /home/kassimii/IEP/Lucrarea6/lucrarea6.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kassimii/IEP/Lucrarea6/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lucrarea6.dir/home/kassimii/IEP/Lucrarea6/lucrarea6.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lucrarea6.dir/home/kassimii/IEP/Lucrarea6/lucrarea6.cpp.o -c /home/kassimii/IEP/Lucrarea6/lucrarea6.cpp

CMakeFiles/lucrarea6.dir/home/kassimii/IEP/Lucrarea6/lucrarea6.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lucrarea6.dir/home/kassimii/IEP/Lucrarea6/lucrarea6.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kassimii/IEP/Lucrarea6/lucrarea6.cpp > CMakeFiles/lucrarea6.dir/home/kassimii/IEP/Lucrarea6/lucrarea6.cpp.i

CMakeFiles/lucrarea6.dir/home/kassimii/IEP/Lucrarea6/lucrarea6.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lucrarea6.dir/home/kassimii/IEP/Lucrarea6/lucrarea6.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kassimii/IEP/Lucrarea6/lucrarea6.cpp -o CMakeFiles/lucrarea6.dir/home/kassimii/IEP/Lucrarea6/lucrarea6.cpp.s

# Object files for target lucrarea6
lucrarea6_OBJECTS = \
"CMakeFiles/lucrarea6.dir/home/kassimii/IEP/Lucrarea6/lucrarea6.cpp.o"

# External object files for target lucrarea6
lucrarea6_EXTERNAL_OBJECTS =

lucrarea6: CMakeFiles/lucrarea6.dir/home/kassimii/IEP/Lucrarea6/lucrarea6.cpp.o
lucrarea6: CMakeFiles/lucrarea6.dir/build.make
lucrarea6: CMakeFiles/lucrarea6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kassimii/IEP/Lucrarea6/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lucrarea6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lucrarea6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lucrarea6.dir/build: lucrarea6

.PHONY : CMakeFiles/lucrarea6.dir/build

CMakeFiles/lucrarea6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lucrarea6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lucrarea6.dir/clean

CMakeFiles/lucrarea6.dir/depend:
	cd /home/kassimii/IEP/Lucrarea6/cmake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kassimii/IEP/Lucrarea6/cmake /home/kassimii/IEP/Lucrarea6/cmake /home/kassimii/IEP/Lucrarea6/cmake/build /home/kassimii/IEP/Lucrarea6/cmake/build /home/kassimii/IEP/Lucrarea6/cmake/build/CMakeFiles/lucrarea6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lucrarea6.dir/depend
