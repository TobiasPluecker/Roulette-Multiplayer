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
CMAKE_SOURCE_DIR = /home/odin/Schreibtisch/poose2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/odin/Schreibtisch/poose2/build

# Include any dependencies generated for this target.
include CMakeFiles/demo1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/demo1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/demo1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/demo1.dir/flags.make

CMakeFiles/demo1.dir/examples/demo1.cpp.o: CMakeFiles/demo1.dir/flags.make
CMakeFiles/demo1.dir/examples/demo1.cpp.o: ../examples/demo1.cpp
CMakeFiles/demo1.dir/examples/demo1.cpp.o: CMakeFiles/demo1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/Schreibtisch/poose2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/demo1.dir/examples/demo1.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/demo1.dir/examples/demo1.cpp.o -MF CMakeFiles/demo1.dir/examples/demo1.cpp.o.d -o CMakeFiles/demo1.dir/examples/demo1.cpp.o -c /home/odin/Schreibtisch/poose2/examples/demo1.cpp

CMakeFiles/demo1.dir/examples/demo1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo1.dir/examples/demo1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/Schreibtisch/poose2/examples/demo1.cpp > CMakeFiles/demo1.dir/examples/demo1.cpp.i

CMakeFiles/demo1.dir/examples/demo1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo1.dir/examples/demo1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/Schreibtisch/poose2/examples/demo1.cpp -o CMakeFiles/demo1.dir/examples/demo1.cpp.s

CMakeFiles/demo1.dir/src/hangman_board.cpp.o: CMakeFiles/demo1.dir/flags.make
CMakeFiles/demo1.dir/src/hangman_board.cpp.o: ../src/hangman_board.cpp
CMakeFiles/demo1.dir/src/hangman_board.cpp.o: CMakeFiles/demo1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/Schreibtisch/poose2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/demo1.dir/src/hangman_board.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/demo1.dir/src/hangman_board.cpp.o -MF CMakeFiles/demo1.dir/src/hangman_board.cpp.o.d -o CMakeFiles/demo1.dir/src/hangman_board.cpp.o -c /home/odin/Schreibtisch/poose2/src/hangman_board.cpp

CMakeFiles/demo1.dir/src/hangman_board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo1.dir/src/hangman_board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/Schreibtisch/poose2/src/hangman_board.cpp > CMakeFiles/demo1.dir/src/hangman_board.cpp.i

CMakeFiles/demo1.dir/src/hangman_board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo1.dir/src/hangman_board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/Schreibtisch/poose2/src/hangman_board.cpp -o CMakeFiles/demo1.dir/src/hangman_board.cpp.s

CMakeFiles/demo1.dir/src/spiel.cpp.o: CMakeFiles/demo1.dir/flags.make
CMakeFiles/demo1.dir/src/spiel.cpp.o: ../src/spiel.cpp
CMakeFiles/demo1.dir/src/spiel.cpp.o: CMakeFiles/demo1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/Schreibtisch/poose2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/demo1.dir/src/spiel.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/demo1.dir/src/spiel.cpp.o -MF CMakeFiles/demo1.dir/src/spiel.cpp.o.d -o CMakeFiles/demo1.dir/src/spiel.cpp.o -c /home/odin/Schreibtisch/poose2/src/spiel.cpp

CMakeFiles/demo1.dir/src/spiel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo1.dir/src/spiel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/Schreibtisch/poose2/src/spiel.cpp > CMakeFiles/demo1.dir/src/spiel.cpp.i

CMakeFiles/demo1.dir/src/spiel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo1.dir/src/spiel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/Schreibtisch/poose2/src/spiel.cpp -o CMakeFiles/demo1.dir/src/spiel.cpp.s

CMakeFiles/demo1.dir/src/spieler.cpp.o: CMakeFiles/demo1.dir/flags.make
CMakeFiles/demo1.dir/src/spieler.cpp.o: ../src/spieler.cpp
CMakeFiles/demo1.dir/src/spieler.cpp.o: CMakeFiles/demo1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/Schreibtisch/poose2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/demo1.dir/src/spieler.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/demo1.dir/src/spieler.cpp.o -MF CMakeFiles/demo1.dir/src/spieler.cpp.o.d -o CMakeFiles/demo1.dir/src/spieler.cpp.o -c /home/odin/Schreibtisch/poose2/src/spieler.cpp

CMakeFiles/demo1.dir/src/spieler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo1.dir/src/spieler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/Schreibtisch/poose2/src/spieler.cpp > CMakeFiles/demo1.dir/src/spieler.cpp.i

CMakeFiles/demo1.dir/src/spieler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo1.dir/src/spieler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/Schreibtisch/poose2/src/spieler.cpp -o CMakeFiles/demo1.dir/src/spieler.cpp.s

CMakeFiles/demo1.dir/src/spiellogik.cpp.o: CMakeFiles/demo1.dir/flags.make
CMakeFiles/demo1.dir/src/spiellogik.cpp.o: ../src/spiellogik.cpp
CMakeFiles/demo1.dir/src/spiellogik.cpp.o: CMakeFiles/demo1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/Schreibtisch/poose2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/demo1.dir/src/spiellogik.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/demo1.dir/src/spiellogik.cpp.o -MF CMakeFiles/demo1.dir/src/spiellogik.cpp.o.d -o CMakeFiles/demo1.dir/src/spiellogik.cpp.o -c /home/odin/Schreibtisch/poose2/src/spiellogik.cpp

CMakeFiles/demo1.dir/src/spiellogik.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo1.dir/src/spiellogik.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/Schreibtisch/poose2/src/spiellogik.cpp > CMakeFiles/demo1.dir/src/spiellogik.cpp.i

CMakeFiles/demo1.dir/src/spiellogik.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo1.dir/src/spiellogik.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/Schreibtisch/poose2/src/spiellogik.cpp -o CMakeFiles/demo1.dir/src/spiellogik.cpp.s

CMakeFiles/demo1.dir/src/wette.cpp.o: CMakeFiles/demo1.dir/flags.make
CMakeFiles/demo1.dir/src/wette.cpp.o: ../src/wette.cpp
CMakeFiles/demo1.dir/src/wette.cpp.o: CMakeFiles/demo1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/Schreibtisch/poose2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/demo1.dir/src/wette.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/demo1.dir/src/wette.cpp.o -MF CMakeFiles/demo1.dir/src/wette.cpp.o.d -o CMakeFiles/demo1.dir/src/wette.cpp.o -c /home/odin/Schreibtisch/poose2/src/wette.cpp

CMakeFiles/demo1.dir/src/wette.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo1.dir/src/wette.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/Schreibtisch/poose2/src/wette.cpp > CMakeFiles/demo1.dir/src/wette.cpp.i

CMakeFiles/demo1.dir/src/wette.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo1.dir/src/wette.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/Schreibtisch/poose2/src/wette.cpp -o CMakeFiles/demo1.dir/src/wette.cpp.s

# Object files for target demo1
demo1_OBJECTS = \
"CMakeFiles/demo1.dir/examples/demo1.cpp.o" \
"CMakeFiles/demo1.dir/src/hangman_board.cpp.o" \
"CMakeFiles/demo1.dir/src/spiel.cpp.o" \
"CMakeFiles/demo1.dir/src/spieler.cpp.o" \
"CMakeFiles/demo1.dir/src/spiellogik.cpp.o" \
"CMakeFiles/demo1.dir/src/wette.cpp.o"

# External object files for target demo1
demo1_EXTERNAL_OBJECTS =

demo1: CMakeFiles/demo1.dir/examples/demo1.cpp.o
demo1: CMakeFiles/demo1.dir/src/hangman_board.cpp.o
demo1: CMakeFiles/demo1.dir/src/spiel.cpp.o
demo1: CMakeFiles/demo1.dir/src/spieler.cpp.o
demo1: CMakeFiles/demo1.dir/src/spiellogik.cpp.o
demo1: CMakeFiles/demo1.dir/src/wette.cpp.o
demo1: CMakeFiles/demo1.dir/build.make
demo1: CMakeFiles/demo1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/odin/Schreibtisch/poose2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable demo1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/demo1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/demo1.dir/build: demo1
.PHONY : CMakeFiles/demo1.dir/build

CMakeFiles/demo1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/demo1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/demo1.dir/clean

CMakeFiles/demo1.dir/depend:
	cd /home/odin/Schreibtisch/poose2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/odin/Schreibtisch/poose2 /home/odin/Schreibtisch/poose2 /home/odin/Schreibtisch/poose2/build /home/odin/Schreibtisch/poose2/build /home/odin/Schreibtisch/poose2/build/CMakeFiles/demo1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/demo1.dir/depend

