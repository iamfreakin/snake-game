# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\qjaqj\Desktop\vscode\Projects\snake-game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\qjaqj\Desktop\vscode\Projects\snake-game\build

# Include any dependencies generated for this target.
include CMakeFiles/snake-game.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/snake-game.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/snake-game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/snake-game.dir/flags.make

CMakeFiles/snake-game.dir/main.cpp.obj: CMakeFiles/snake-game.dir/flags.make
CMakeFiles/snake-game.dir/main.cpp.obj: C:/Users/qjaqj/Desktop/vscode/Projects/snake-game/main.cpp
CMakeFiles/snake-game.dir/main.cpp.obj: CMakeFiles/snake-game.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\qjaqj\Desktop\vscode\Projects\snake-game\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/snake-game.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snake-game.dir/main.cpp.obj -MF CMakeFiles\snake-game.dir\main.cpp.obj.d -o CMakeFiles\snake-game.dir\main.cpp.obj -c C:\Users\qjaqj\Desktop\vscode\Projects\snake-game\main.cpp

CMakeFiles/snake-game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snake-game.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\qjaqj\Desktop\vscode\Projects\snake-game\main.cpp > CMakeFiles\snake-game.dir\main.cpp.i

CMakeFiles/snake-game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snake-game.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\qjaqj\Desktop\vscode\Projects\snake-game\main.cpp -o CMakeFiles\snake-game.dir\main.cpp.s

# Object files for target snake-game
snake__game_OBJECTS = \
"CMakeFiles/snake-game.dir/main.cpp.obj"

# External object files for target snake-game
snake__game_EXTERNAL_OBJECTS =

snake-game.exe: CMakeFiles/snake-game.dir/main.cpp.obj
snake-game.exe: CMakeFiles/snake-game.dir/build.make
snake-game.exe: CMakeFiles/snake-game.dir/linkLibs.rsp
snake-game.exe: CMakeFiles/snake-game.dir/objects1.rsp
snake-game.exe: CMakeFiles/snake-game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\qjaqj\Desktop\vscode\Projects\snake-game\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable snake-game.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\snake-game.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/snake-game.dir/build: snake-game.exe
.PHONY : CMakeFiles/snake-game.dir/build

CMakeFiles/snake-game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\snake-game.dir\cmake_clean.cmake
.PHONY : CMakeFiles/snake-game.dir/clean

CMakeFiles/snake-game.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\qjaqj\Desktop\vscode\Projects\snake-game C:\Users\qjaqj\Desktop\vscode\Projects\snake-game C:\Users\qjaqj\Desktop\vscode\Projects\snake-game\build C:\Users\qjaqj\Desktop\vscode\Projects\snake-game\build C:\Users\qjaqj\Desktop\vscode\Projects\snake-game\build\CMakeFiles\snake-game.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/snake-game.dir/depend

