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
include CMakeFiles/47_DEQueueLinkedList.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/47_DEQueueLinkedList.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/47_DEQueueLinkedList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/47_DEQueueLinkedList.dir/flags.make

CMakeFiles/47_DEQueueLinkedList.dir/47_DEQueueLinkedList.c.o: CMakeFiles/47_DEQueueLinkedList.dir/flags.make
CMakeFiles/47_DEQueueLinkedList.dir/47_DEQueueLinkedList.c.o: ../47_DEQueueLinkedList.c
CMakeFiles/47_DEQueueLinkedList.dir/47_DEQueueLinkedList.c.o: CMakeFiles/47_DEQueueLinkedList.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/47_DEQueueLinkedList.dir/47_DEQueueLinkedList.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/47_DEQueueLinkedList.dir/47_DEQueueLinkedList.c.o -MF CMakeFiles/47_DEQueueLinkedList.dir/47_DEQueueLinkedList.c.o.d -o CMakeFiles/47_DEQueueLinkedList.dir/47_DEQueueLinkedList.c.o -c /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/47_DEQueueLinkedList.c

CMakeFiles/47_DEQueueLinkedList.dir/47_DEQueueLinkedList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/47_DEQueueLinkedList.dir/47_DEQueueLinkedList.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/47_DEQueueLinkedList.c > CMakeFiles/47_DEQueueLinkedList.dir/47_DEQueueLinkedList.c.i

CMakeFiles/47_DEQueueLinkedList.dir/47_DEQueueLinkedList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/47_DEQueueLinkedList.dir/47_DEQueueLinkedList.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/47_DEQueueLinkedList.c -o CMakeFiles/47_DEQueueLinkedList.dir/47_DEQueueLinkedList.c.s

# Object files for target 47_DEQueueLinkedList
47_DEQueueLinkedList_OBJECTS = \
"CMakeFiles/47_DEQueueLinkedList.dir/47_DEQueueLinkedList.c.o"

# External object files for target 47_DEQueueLinkedList
47_DEQueueLinkedList_EXTERNAL_OBJECTS =

47_DEQueueLinkedList: CMakeFiles/47_DEQueueLinkedList.dir/47_DEQueueLinkedList.c.o
47_DEQueueLinkedList: CMakeFiles/47_DEQueueLinkedList.dir/build.make
47_DEQueueLinkedList: CMakeFiles/47_DEQueueLinkedList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 47_DEQueueLinkedList"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/47_DEQueueLinkedList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/47_DEQueueLinkedList.dir/build: 47_DEQueueLinkedList
.PHONY : CMakeFiles/47_DEQueueLinkedList.dir/build

CMakeFiles/47_DEQueueLinkedList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/47_DEQueueLinkedList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/47_DEQueueLinkedList.dir/clean

CMakeFiles/47_DEQueueLinkedList.dir/depend:
	cd /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build/CMakeFiles/47_DEQueueLinkedList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/47_DEQueueLinkedList.dir/depend
