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
include CMakeFiles/roulette_spiel.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/roulette_spiel.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/roulette_spiel.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/roulette_spiel.dir/flags.make

CMakeFiles/roulette_spiel.dir/examples/spiellogik_pybind.cpp.o: CMakeFiles/roulette_spiel.dir/flags.make
CMakeFiles/roulette_spiel.dir/examples/spiellogik_pybind.cpp.o: ../examples/spiellogik_pybind.cpp
CMakeFiles/roulette_spiel.dir/examples/spiellogik_pybind.cpp.o: CMakeFiles/roulette_spiel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/Schreibtisch/poose2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/roulette_spiel.dir/examples/spiellogik_pybind.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/roulette_spiel.dir/examples/spiellogik_pybind.cpp.o -MF CMakeFiles/roulette_spiel.dir/examples/spiellogik_pybind.cpp.o.d -o CMakeFiles/roulette_spiel.dir/examples/spiellogik_pybind.cpp.o -c /home/odin/Schreibtisch/poose2/examples/spiellogik_pybind.cpp

CMakeFiles/roulette_spiel.dir/examples/spiellogik_pybind.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roulette_spiel.dir/examples/spiellogik_pybind.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/Schreibtisch/poose2/examples/spiellogik_pybind.cpp > CMakeFiles/roulette_spiel.dir/examples/spiellogik_pybind.cpp.i

CMakeFiles/roulette_spiel.dir/examples/spiellogik_pybind.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roulette_spiel.dir/examples/spiellogik_pybind.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/Schreibtisch/poose2/examples/spiellogik_pybind.cpp -o CMakeFiles/roulette_spiel.dir/examples/spiellogik_pybind.cpp.s

CMakeFiles/roulette_spiel.dir/src/hangman_board.cpp.o: CMakeFiles/roulette_spiel.dir/flags.make
CMakeFiles/roulette_spiel.dir/src/hangman_board.cpp.o: ../src/hangman_board.cpp
CMakeFiles/roulette_spiel.dir/src/hangman_board.cpp.o: CMakeFiles/roulette_spiel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/Schreibtisch/poose2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/roulette_spiel.dir/src/hangman_board.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/roulette_spiel.dir/src/hangman_board.cpp.o -MF CMakeFiles/roulette_spiel.dir/src/hangman_board.cpp.o.d -o CMakeFiles/roulette_spiel.dir/src/hangman_board.cpp.o -c /home/odin/Schreibtisch/poose2/src/hangman_board.cpp

CMakeFiles/roulette_spiel.dir/src/hangman_board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roulette_spiel.dir/src/hangman_board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/Schreibtisch/poose2/src/hangman_board.cpp > CMakeFiles/roulette_spiel.dir/src/hangman_board.cpp.i

CMakeFiles/roulette_spiel.dir/src/hangman_board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roulette_spiel.dir/src/hangman_board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/Schreibtisch/poose2/src/hangman_board.cpp -o CMakeFiles/roulette_spiel.dir/src/hangman_board.cpp.s

CMakeFiles/roulette_spiel.dir/src/spieler.cpp.o: CMakeFiles/roulette_spiel.dir/flags.make
CMakeFiles/roulette_spiel.dir/src/spieler.cpp.o: ../src/spieler.cpp
CMakeFiles/roulette_spiel.dir/src/spieler.cpp.o: CMakeFiles/roulette_spiel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/Schreibtisch/poose2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/roulette_spiel.dir/src/spieler.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/roulette_spiel.dir/src/spieler.cpp.o -MF CMakeFiles/roulette_spiel.dir/src/spieler.cpp.o.d -o CMakeFiles/roulette_spiel.dir/src/spieler.cpp.o -c /home/odin/Schreibtisch/poose2/src/spieler.cpp

CMakeFiles/roulette_spiel.dir/src/spieler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roulette_spiel.dir/src/spieler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/Schreibtisch/poose2/src/spieler.cpp > CMakeFiles/roulette_spiel.dir/src/spieler.cpp.i

CMakeFiles/roulette_spiel.dir/src/spieler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roulette_spiel.dir/src/spieler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/Schreibtisch/poose2/src/spieler.cpp -o CMakeFiles/roulette_spiel.dir/src/spieler.cpp.s

CMakeFiles/roulette_spiel.dir/src/spiellogik.cpp.o: CMakeFiles/roulette_spiel.dir/flags.make
CMakeFiles/roulette_spiel.dir/src/spiellogik.cpp.o: ../src/spiellogik.cpp
CMakeFiles/roulette_spiel.dir/src/spiellogik.cpp.o: CMakeFiles/roulette_spiel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/Schreibtisch/poose2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/roulette_spiel.dir/src/spiellogik.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/roulette_spiel.dir/src/spiellogik.cpp.o -MF CMakeFiles/roulette_spiel.dir/src/spiellogik.cpp.o.d -o CMakeFiles/roulette_spiel.dir/src/spiellogik.cpp.o -c /home/odin/Schreibtisch/poose2/src/spiellogik.cpp

CMakeFiles/roulette_spiel.dir/src/spiellogik.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roulette_spiel.dir/src/spiellogik.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/Schreibtisch/poose2/src/spiellogik.cpp > CMakeFiles/roulette_spiel.dir/src/spiellogik.cpp.i

CMakeFiles/roulette_spiel.dir/src/spiellogik.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roulette_spiel.dir/src/spiellogik.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/Schreibtisch/poose2/src/spiellogik.cpp -o CMakeFiles/roulette_spiel.dir/src/spiellogik.cpp.s

CMakeFiles/roulette_spiel.dir/src/wette.cpp.o: CMakeFiles/roulette_spiel.dir/flags.make
CMakeFiles/roulette_spiel.dir/src/wette.cpp.o: ../src/wette.cpp
CMakeFiles/roulette_spiel.dir/src/wette.cpp.o: CMakeFiles/roulette_spiel.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/odin/Schreibtisch/poose2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/roulette_spiel.dir/src/wette.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/roulette_spiel.dir/src/wette.cpp.o -MF CMakeFiles/roulette_spiel.dir/src/wette.cpp.o.d -o CMakeFiles/roulette_spiel.dir/src/wette.cpp.o -c /home/odin/Schreibtisch/poose2/src/wette.cpp

CMakeFiles/roulette_spiel.dir/src/wette.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/roulette_spiel.dir/src/wette.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/odin/Schreibtisch/poose2/src/wette.cpp > CMakeFiles/roulette_spiel.dir/src/wette.cpp.i

CMakeFiles/roulette_spiel.dir/src/wette.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/roulette_spiel.dir/src/wette.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/odin/Schreibtisch/poose2/src/wette.cpp -o CMakeFiles/roulette_spiel.dir/src/wette.cpp.s

# Object files for target roulette_spiel
roulette_spiel_OBJECTS = \
"CMakeFiles/roulette_spiel.dir/examples/spiellogik_pybind.cpp.o" \
"CMakeFiles/roulette_spiel.dir/src/hangman_board.cpp.o" \
"CMakeFiles/roulette_spiel.dir/src/spieler.cpp.o" \
"CMakeFiles/roulette_spiel.dir/src/spiellogik.cpp.o" \
"CMakeFiles/roulette_spiel.dir/src/wette.cpp.o"

# External object files for target roulette_spiel
roulette_spiel_EXTERNAL_OBJECTS =

roulette_spiel.cpython-310-x86_64-linux-gnu.so: CMakeFiles/roulette_spiel.dir/examples/spiellogik_pybind.cpp.o
roulette_spiel.cpython-310-x86_64-linux-gnu.so: CMakeFiles/roulette_spiel.dir/src/hangman_board.cpp.o
roulette_spiel.cpython-310-x86_64-linux-gnu.so: CMakeFiles/roulette_spiel.dir/src/spieler.cpp.o
roulette_spiel.cpython-310-x86_64-linux-gnu.so: CMakeFiles/roulette_spiel.dir/src/spiellogik.cpp.o
roulette_spiel.cpython-310-x86_64-linux-gnu.so: CMakeFiles/roulette_spiel.dir/src/wette.cpp.o
roulette_spiel.cpython-310-x86_64-linux-gnu.so: CMakeFiles/roulette_spiel.dir/build.make
roulette_spiel.cpython-310-x86_64-linux-gnu.so: CMakeFiles/roulette_spiel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/odin/Schreibtisch/poose2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared module roulette_spiel.cpython-310-x86_64-linux-gnu.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/roulette_spiel.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/roulette_spiel.dir/build: roulette_spiel.cpython-310-x86_64-linux-gnu.so
.PHONY : CMakeFiles/roulette_spiel.dir/build

CMakeFiles/roulette_spiel.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/roulette_spiel.dir/cmake_clean.cmake
.PHONY : CMakeFiles/roulette_spiel.dir/clean

CMakeFiles/roulette_spiel.dir/depend:
	cd /home/odin/Schreibtisch/poose2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/odin/Schreibtisch/poose2 /home/odin/Schreibtisch/poose2 /home/odin/Schreibtisch/poose2/build /home/odin/Schreibtisch/poose2/build /home/odin/Schreibtisch/poose2/build/CMakeFiles/roulette_spiel.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/roulette_spiel.dir/depend

