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
include CMakeFiles/18_LinkedListDeletion.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/18_LinkedListDeletion.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/18_LinkedListDeletion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/18_LinkedListDeletion.dir/flags.make

CMakeFiles/18_LinkedListDeletion.dir/18_LinkedListDeletion.c.o: CMakeFiles/18_LinkedListDeletion.dir/flags.make
CMakeFiles/18_LinkedListDeletion.dir/18_LinkedListDeletion.c.o: ../18_LinkedListDeletion.c
CMakeFiles/18_LinkedListDeletion.dir/18_LinkedListDeletion.c.o: CMakeFiles/18_LinkedListDeletion.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/18_LinkedListDeletion.dir/18_LinkedListDeletion.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/18_LinkedListDeletion.dir/18_LinkedListDeletion.c.o -MF CMakeFiles/18_LinkedListDeletion.dir/18_LinkedListDeletion.c.o.d -o CMakeFiles/18_LinkedListDeletion.dir/18_LinkedListDeletion.c.o -c /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/18_LinkedListDeletion.c

CMakeFiles/18_LinkedListDeletion.dir/18_LinkedListDeletion.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/18_LinkedListDeletion.dir/18_LinkedListDeletion.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/18_LinkedListDeletion.c > CMakeFiles/18_LinkedListDeletion.dir/18_LinkedListDeletion.c.i

CMakeFiles/18_LinkedListDeletion.dir/18_LinkedListDeletion.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/18_LinkedListDeletion.dir/18_LinkedListDeletion.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/18_LinkedListDeletion.c -o CMakeFiles/18_LinkedListDeletion.dir/18_LinkedListDeletion.c.s

# Object files for target 18_LinkedListDeletion
18_LinkedListDeletion_OBJECTS = \
"CMakeFiles/18_LinkedListDeletion.dir/18_LinkedListDeletion.c.o"

# External object files for target 18_LinkedListDeletion
18_LinkedListDeletion_EXTERNAL_OBJECTS =

18_LinkedListDeletion: CMakeFiles/18_LinkedListDeletion.dir/18_LinkedListDeletion.c.o
18_LinkedListDeletion: CMakeFiles/18_LinkedListDeletion.dir/build.make
18_LinkedListDeletion: CMakeFiles/18_LinkedListDeletion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 18_LinkedListDeletion"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/18_LinkedListDeletion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/18_LinkedListDeletion.dir/build: 18_LinkedListDeletion
.PHONY : CMakeFiles/18_LinkedListDeletion.dir/build

CMakeFiles/18_LinkedListDeletion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/18_LinkedListDeletion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/18_LinkedListDeletion.dir/clean

CMakeFiles/18_LinkedListDeletion.dir/depend:
	cd /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build /home/trec/WorkRaj/Coding_Tutorials/DataStructAlgo/build/CMakeFiles/18_LinkedListDeletion.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/18_LinkedListDeletion.dir/depend

