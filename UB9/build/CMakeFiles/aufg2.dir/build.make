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
CMAKE_SOURCE_DIR = /home/odin/AlProBonnRepo/uebungscode_09

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/odin/AlProBonnRepo/uebungscode_09/build

# Include any dependencies generated for this target.
include CMakeFiles/aufg2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/aufg2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/aufg2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/aufg2.dir/flags.make

CMakeFiles/aufg2.dir/examples/aufg2.cpp.o: CMakeFiles/aufg2.dir/flags.make
CMakeFiles/aufg2.dir/examples/aufg2.cpp.o: ../examples/aufg2.cpp
CMakeFiles/aufg2.dir/examples/aufg2.cpp.o: CMakeFiles/aufg2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/AlProBonnRepo/uebungscode_09/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/aufg2.dir/examples/aufg2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/aufg2.dir/examples/aufg2.cpp.o -MF CMakeFiles/aufg2.dir/examples/aufg2.cpp.o.d -o CMakeFiles/aufg2.dir/examples/aufg2.cpp.o -c /home/odin/AlProBonnRepo/uebungscode_09/examples/aufg2.cpp

CMakeFiles/aufg2.dir/examples/aufg2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aufg2.dir/examples/aufg2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/AlProBonnRepo/uebungscode_09/examples/aufg2.cpp > CMakeFiles/aufg2.dir/examples/aufg2.cpp.i

CMakeFiles/aufg2.dir/examples/aufg2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aufg2.dir/examples/aufg2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/AlProBonnRepo/uebungscode_09/examples/aufg2.cpp -o CMakeFiles/aufg2.dir/examples/aufg2.cpp.s

CMakeFiles/aufg2.dir/src/binary_tree.cpp.o: CMakeFiles/aufg2.dir/flags.make
CMakeFiles/aufg2.dir/src/binary_tree.cpp.o: ../src/binary_tree.cpp
CMakeFiles/aufg2.dir/src/binary_tree.cpp.o: CMakeFiles/aufg2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/AlProBonnRepo/uebungscode_09/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/aufg2.dir/src/binary_tree.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/aufg2.dir/src/binary_tree.cpp.o -MF CMakeFiles/aufg2.dir/src/binary_tree.cpp.o.d -o CMakeFiles/aufg2.dir/src/binary_tree.cpp.o -c /home/odin/AlProBonnRepo/uebungscode_09/src/binary_tree.cpp

CMakeFiles/aufg2.dir/src/binary_tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aufg2.dir/src/binary_tree.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/AlProBonnRepo/uebungscode_09/src/binary_tree.cpp > CMakeFiles/aufg2.dir/src/binary_tree.cpp.i

CMakeFiles/aufg2.dir/src/binary_tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aufg2.dir/src/binary_tree.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/AlProBonnRepo/uebungscode_09/src/binary_tree.cpp -o CMakeFiles/aufg2.dir/src/binary_tree.cpp.s

CMakeFiles/aufg2.dir/src/binary_tree_node.cpp.o: CMakeFiles/aufg2.dir/flags.make
CMakeFiles/aufg2.dir/src/binary_tree_node.cpp.o: ../src/binary_tree_node.cpp
CMakeFiles/aufg2.dir/src/binary_tree_node.cpp.o: CMakeFiles/aufg2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/AlProBonnRepo/uebungscode_09/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/aufg2.dir/src/binary_tree_node.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/aufg2.dir/src/binary_tree_node.cpp.o -MF CMakeFiles/aufg2.dir/src/binary_tree_node.cpp.o.d -o CMakeFiles/aufg2.dir/src/binary_tree_node.cpp.o -c /home/odin/AlProBonnRepo/uebungscode_09/src/binary_tree_node.cpp

CMakeFiles/aufg2.dir/src/binary_tree_node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aufg2.dir/src/binary_tree_node.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/AlProBonnRepo/uebungscode_09/src/binary_tree_node.cpp > CMakeFiles/aufg2.dir/src/binary_tree_node.cpp.i

CMakeFiles/aufg2.dir/src/binary_tree_node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aufg2.dir/src/binary_tree_node.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/AlProBonnRepo/uebungscode_09/src/binary_tree_node.cpp -o CMakeFiles/aufg2.dir/src/binary_tree_node.cpp.s

CMakeFiles/aufg2.dir/src/doubly_linked_list.cpp.o: CMakeFiles/aufg2.dir/flags.make
CMakeFiles/aufg2.dir/src/doubly_linked_list.cpp.o: ../src/doubly_linked_list.cpp
CMakeFiles/aufg2.dir/src/doubly_linked_list.cpp.o: CMakeFiles/aufg2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/AlProBonnRepo/uebungscode_09/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/aufg2.dir/src/doubly_linked_list.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/aufg2.dir/src/doubly_linked_list.cpp.o -MF CMakeFiles/aufg2.dir/src/doubly_linked_list.cpp.o.d -o CMakeFiles/aufg2.dir/src/doubly_linked_list.cpp.o -c /home/odin/AlProBonnRepo/uebungscode_09/src/doubly_linked_list.cpp

CMakeFiles/aufg2.dir/src/doubly_linked_list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aufg2.dir/src/doubly_linked_list.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/AlProBonnRepo/uebungscode_09/src/doubly_linked_list.cpp > CMakeFiles/aufg2.dir/src/doubly_linked_list.cpp.i

CMakeFiles/aufg2.dir/src/doubly_linked_list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aufg2.dir/src/doubly_linked_list.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/AlProBonnRepo/uebungscode_09/src/doubly_linked_list.cpp -o CMakeFiles/aufg2.dir/src/doubly_linked_list.cpp.s

CMakeFiles/aufg2.dir/src/doubly_linked_list_node.cpp.o: CMakeFiles/aufg2.dir/flags.make
CMakeFiles/aufg2.dir/src/doubly_linked_list_node.cpp.o: ../src/doubly_linked_list_node.cpp
CMakeFiles/aufg2.dir/src/doubly_linked_list_node.cpp.o: CMakeFiles/aufg2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/AlProBonnRepo/uebungscode_09/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/aufg2.dir/src/doubly_linked_list_node.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/aufg2.dir/src/doubly_linked_list_node.cpp.o -MF CMakeFiles/aufg2.dir/src/doubly_linked_list_node.cpp.o.d -o CMakeFiles/aufg2.dir/src/doubly_linked_list_node.cpp.o -c /home/odin/AlProBonnRepo/uebungscode_09/src/doubly_linked_list_node.cpp

CMakeFiles/aufg2.dir/src/doubly_linked_list_node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aufg2.dir/src/doubly_linked_list_node.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/AlProBonnRepo/uebungscode_09/src/doubly_linked_list_node.cpp > CMakeFiles/aufg2.dir/src/doubly_linked_list_node.cpp.i

CMakeFiles/aufg2.dir/src/doubly_linked_list_node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aufg2.dir/src/doubly_linked_list_node.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/AlProBonnRepo/uebungscode_09/src/doubly_linked_list_node.cpp -o CMakeFiles/aufg2.dir/src/doubly_linked_list_node.cpp.s

# Object files for target aufg2
aufg2_OBJECTS = \
"CMakeFiles/aufg2.dir/examples/aufg2.cpp.o" \
"CMakeFiles/aufg2.dir/src/binary_tree.cpp.o" \
"CMakeFiles/aufg2.dir/src/binary_tree_node.cpp.o" \
"CMakeFiles/aufg2.dir/src/doubly_linked_list.cpp.o" \
"CMakeFiles/aufg2.dir/src/doubly_linked_list_node.cpp.o"

# External object files for target aufg2
aufg2_EXTERNAL_OBJECTS =

aufg2: CMakeFiles/aufg2.dir/examples/aufg2.cpp.o
aufg2: CMakeFiles/aufg2.dir/src/binary_tree.cpp.o
aufg2: CMakeFiles/aufg2.dir/src/binary_tree_node.cpp.o
aufg2: CMakeFiles/aufg2.dir/src/doubly_linked_list.cpp.o
aufg2: CMakeFiles/aufg2.dir/src/doubly_linked_list_node.cpp.o
aufg2: CMakeFiles/aufg2.dir/build.make
aufg2: CMakeFiles/aufg2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/odin/AlProBonnRepo/uebungscode_09/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable aufg2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/aufg2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/aufg2.dir/build: aufg2
.PHONY : CMakeFiles/aufg2.dir/build

CMakeFiles/aufg2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/aufg2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/aufg2.dir/clean

CMakeFiles/aufg2.dir/depend:
	cd /home/odin/AlProBonnRepo/uebungscode_09/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/odin/AlProBonnRepo/uebungscode_09 /home/odin/AlProBonnRepo/uebungscode_09 /home/odin/AlProBonnRepo/uebungscode_09/build /home/odin/AlProBonnRepo/uebungscode_09/build /home/odin/AlProBonnRepo/uebungscode_09/build/CMakeFiles/aufg2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/aufg2.dir/depend

