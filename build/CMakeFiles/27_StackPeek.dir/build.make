# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /home/ruturajsambhus/anaconda3/lib/python3.7/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/ruturajsambhus/anaconda3/lib/python3.7/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ruturajsambhus/Work/Coding_Tutorials/DataStructAlgo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ruturajsambhus/Work/Coding_Tutorials/DataStructAlgo/build

# Include any dependencies generated for this target.
include CMakeFiles/27_StackPeek.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/27_StackPeek.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/27_StackPeek.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/27_StackPeek.dir/flags.make

CMakeFiles/27_StackPeek.dir/27_StackPeek.c.o: CMakeFiles/27_StackPeek.dir/flags.make
CMakeFiles/27_StackPeek.dir/27_StackPeek.c.o: /home/ruturajsambhus/Work/Coding_Tutorials/DataStructAlgo/27_StackPeek.c
CMakeFiles/27_StackPeek.dir/27_StackPeek.c.o: CMakeFiles/27_StackPeek.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruturajsambhus/Work/Coding_Tutorials/DataStructAlgo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/27_StackPeek.dir/27_StackPeek.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/27_StackPeek.dir/27_StackPeek.c.o -MF CMakeFiles/27_StackPeek.dir/27_StackPeek.c.o.d -o CMakeFiles/27_StackPeek.dir/27_StackPeek.c.o -c /home/ruturajsambhus/Work/Coding_Tutorials/DataStructAlgo/27_StackPeek.c

CMakeFiles/27_StackPeek.dir/27_StackPeek.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/27_StackPeek.dir/27_StackPeek.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ruturajsambhus/Work/Coding_Tutorials/DataStructAlgo/27_StackPeek.c > CMakeFiles/27_StackPeek.dir/27_StackPeek.c.i

CMakeFiles/27_StackPeek.dir/27_StackPeek.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/27_StackPeek.dir/27_StackPeek.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ruturajsambhus/Work/Coding_Tutorials/DataStructAlgo/27_StackPeek.c -o CMakeFiles/27_StackPeek.dir/27_StackPeek.c.s

# Object files for target 27_StackPeek
27_StackPeek_OBJECTS = \
"CMakeFiles/27_StackPeek.dir/27_StackPeek.c.o"

# External object files for target 27_StackPeek
27_StackPeek_EXTERNAL_OBJECTS =

27_StackPeek: CMakeFiles/27_StackPeek.dir/27_StackPeek.c.o
27_StackPeek: CMakeFiles/27_StackPeek.dir/build.make
27_StackPeek: CMakeFiles/27_StackPeek.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ruturajsambhus/Work/Coding_Tutorials/DataStructAlgo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 27_StackPeek"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/27_StackPeek.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/27_StackPeek.dir/build: 27_StackPeek
.PHONY : CMakeFiles/27_StackPeek.dir/build

CMakeFiles/27_StackPeek.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/27_StackPeek.dir/cmake_clean.cmake
.PHONY : CMakeFiles/27_StackPeek.dir/clean

CMakeFiles/27_StackPeek.dir/depend:
	cd /home/ruturajsambhus/Work/Coding_Tutorials/DataStructAlgo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ruturajsambhus/Work/Coding_Tutorials/DataStructAlgo /home/ruturajsambhus/Work/Coding_Tutorials/DataStructAlgo /home/ruturajsambhus/Work/Coding_Tutorials/DataStructAlgo/build /home/ruturajsambhus/Work/Coding_Tutorials/DataStructAlgo/build /home/ruturajsambhus/Work/Coding_Tutorials/DataStructAlgo/build/CMakeFiles/27_StackPeek.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/27_StackPeek.dir/depend

