# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build

# Include any dependencies generated for this target.
include CMakeFiles/20_CircularLL.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/20_CircularLL.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/20_CircularLL.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/20_CircularLL.dir/flags.make

CMakeFiles/20_CircularLL.dir/20_CircularLL.c.o: CMakeFiles/20_CircularLL.dir/flags.make
CMakeFiles/20_CircularLL.dir/20_CircularLL.c.o: ../20_CircularLL.c
CMakeFiles/20_CircularLL.dir/20_CircularLL.c.o: CMakeFiles/20_CircularLL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/20_CircularLL.dir/20_CircularLL.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/20_CircularLL.dir/20_CircularLL.c.o -MF CMakeFiles/20_CircularLL.dir/20_CircularLL.c.o.d -o CMakeFiles/20_CircularLL.dir/20_CircularLL.c.o -c /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/20_CircularLL.c

CMakeFiles/20_CircularLL.dir/20_CircularLL.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/20_CircularLL.dir/20_CircularLL.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/20_CircularLL.c > CMakeFiles/20_CircularLL.dir/20_CircularLL.c.i

CMakeFiles/20_CircularLL.dir/20_CircularLL.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/20_CircularLL.dir/20_CircularLL.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/20_CircularLL.c -o CMakeFiles/20_CircularLL.dir/20_CircularLL.c.s

# Object files for target 20_CircularLL
20_CircularLL_OBJECTS = \
"CMakeFiles/20_CircularLL.dir/20_CircularLL.c.o"

# External object files for target 20_CircularLL
20_CircularLL_EXTERNAL_OBJECTS =

20_CircularLL: CMakeFiles/20_CircularLL.dir/20_CircularLL.c.o
20_CircularLL: CMakeFiles/20_CircularLL.dir/build.make
20_CircularLL: CMakeFiles/20_CircularLL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 20_CircularLL"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/20_CircularLL.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/20_CircularLL.dir/build: 20_CircularLL
.PHONY : CMakeFiles/20_CircularLL.dir/build

CMakeFiles/20_CircularLL.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/20_CircularLL.dir/cmake_clean.cmake
.PHONY : CMakeFiles/20_CircularLL.dir/clean

CMakeFiles/20_CircularLL.dir/depend:
	cd /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build/CMakeFiles/20_CircularLL.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/20_CircularLL.dir/depend

