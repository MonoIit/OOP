# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/monolit/Downloads/laba4/Laba4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/monolit/Downloads/laba4/Laba4/build/Desktop-Debug

# Utility rule file for Laba4_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/Laba4_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Laba4_autogen.dir/progress.make

CMakeFiles/Laba4_autogen: Laba4_autogen/timestamp

Laba4_autogen/timestamp: /usr/lib/qt6/libexec/moc
Laba4_autogen/timestamp: /usr/lib/qt6/libexec/uic
Laba4_autogen/timestamp: CMakeFiles/Laba4_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/monolit/Downloads/laba4/Laba4/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Laba4"
	/usr/bin/cmake -E cmake_autogen /home/monolit/Downloads/laba4/Laba4/build/Desktop-Debug/CMakeFiles/Laba4_autogen.dir/AutogenInfo.json Debug
	/usr/bin/cmake -E touch /home/monolit/Downloads/laba4/Laba4/build/Desktop-Debug/Laba4_autogen/timestamp

Laba4_autogen: CMakeFiles/Laba4_autogen
Laba4_autogen: Laba4_autogen/timestamp
Laba4_autogen: CMakeFiles/Laba4_autogen.dir/build.make
.PHONY : Laba4_autogen

# Rule to build all files generated by this target.
CMakeFiles/Laba4_autogen.dir/build: Laba4_autogen
.PHONY : CMakeFiles/Laba4_autogen.dir/build

CMakeFiles/Laba4_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Laba4_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Laba4_autogen.dir/clean

CMakeFiles/Laba4_autogen.dir/depend:
	cd /home/monolit/Downloads/laba4/Laba4/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/monolit/Downloads/laba4/Laba4 /home/monolit/Downloads/laba4/Laba4 /home/monolit/Downloads/laba4/Laba4/build/Desktop-Debug /home/monolit/Downloads/laba4/Laba4/build/Desktop-Debug /home/monolit/Downloads/laba4/Laba4/build/Desktop-Debug/CMakeFiles/Laba4_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Laba4_autogen.dir/depend

