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
include CMakeFiles/75_SearchIterative.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/75_SearchIterative.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/75_SearchIterative.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/75_SearchIterative.dir/flags.make

CMakeFiles/75_SearchIterative.dir/75_SearchIterative.c.o: CMakeFiles/75_SearchIterative.dir/flags.make
CMakeFiles/75_SearchIterative.dir/75_SearchIterative.c.o: ../75_SearchIterative.c
CMakeFiles/75_SearchIterative.dir/75_SearchIterative.c.o: CMakeFiles/75_SearchIterative.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/75_SearchIterative.dir/75_SearchIterative.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/75_SearchIterative.dir/75_SearchIterative.c.o -MF CMakeFiles/75_SearchIterative.dir/75_SearchIterative.c.o.d -o CMakeFiles/75_SearchIterative.dir/75_SearchIterative.c.o -c /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/75_SearchIterative.c

CMakeFiles/75_SearchIterative.dir/75_SearchIterative.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/75_SearchIterative.dir/75_SearchIterative.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/75_SearchIterative.c > CMakeFiles/75_SearchIterative.dir/75_SearchIterative.c.i

CMakeFiles/75_SearchIterative.dir/75_SearchIterative.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/75_SearchIterative.dir/75_SearchIterative.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/75_SearchIterative.c -o CMakeFiles/75_SearchIterative.dir/75_SearchIterative.c.s

# Object files for target 75_SearchIterative
75_SearchIterative_OBJECTS = \
"CMakeFiles/75_SearchIterative.dir/75_SearchIterative.c.o"

# External object files for target 75_SearchIterative
75_SearchIterative_EXTERNAL_OBJECTS =

75_SearchIterative: CMakeFiles/75_SearchIterative.dir/75_SearchIterative.c.o
75_SearchIterative: CMakeFiles/75_SearchIterative.dir/build.make
75_SearchIterative: CMakeFiles/75_SearchIterative.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 75_SearchIterative"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/75_SearchIterative.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/75_SearchIterative.dir/build: 75_SearchIterative
.PHONY : CMakeFiles/75_SearchIterative.dir/build

CMakeFiles/75_SearchIterative.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/75_SearchIterative.dir/cmake_clean.cmake
.PHONY : CMakeFiles/75_SearchIterative.dir/clean

CMakeFiles/75_SearchIterative.dir/depend:
	cd /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build/CMakeFiles/75_SearchIterative.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/75_SearchIterative.dir/depend

