# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.10.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.10.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/Futa/Library/Mobile Documents/com~apple~CloudDocs/Program/ClionProjects/learnC++/src/quest"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Futa/Library/Mobile Documents/com~apple~CloudDocs/Program/ClionProjects/learnC++/src/quest"

# Include any dependencies generated for this target.
include CMakeFiles/Q1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Q1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Q1.dir/flags.make

CMakeFiles/Q1.dir/mainQ1.cpp.o: CMakeFiles/Q1.dir/flags.make
CMakeFiles/Q1.dir/mainQ1.cpp.o: mainQ1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Futa/Library/Mobile Documents/com~apple~CloudDocs/Program/ClionProjects/learnC++/src/quest/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Q1.dir/mainQ1.cpp.o"
	g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Q1.dir/mainQ1.cpp.o -c "/Users/Futa/Library/Mobile Documents/com~apple~CloudDocs/Program/ClionProjects/learnC++/src/quest/mainQ1.cpp"

CMakeFiles/Q1.dir/mainQ1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Q1.dir/mainQ1.cpp.i"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/Futa/Library/Mobile Documents/com~apple~CloudDocs/Program/ClionProjects/learnC++/src/quest/mainQ1.cpp" > CMakeFiles/Q1.dir/mainQ1.cpp.i

CMakeFiles/Q1.dir/mainQ1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Q1.dir/mainQ1.cpp.s"
	g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/Futa/Library/Mobile Documents/com~apple~CloudDocs/Program/ClionProjects/learnC++/src/quest/mainQ1.cpp" -o CMakeFiles/Q1.dir/mainQ1.cpp.s

CMakeFiles/Q1.dir/mainQ1.cpp.o.requires:

.PHONY : CMakeFiles/Q1.dir/mainQ1.cpp.o.requires

CMakeFiles/Q1.dir/mainQ1.cpp.o.provides: CMakeFiles/Q1.dir/mainQ1.cpp.o.requires
	$(MAKE) -f CMakeFiles/Q1.dir/build.make CMakeFiles/Q1.dir/mainQ1.cpp.o.provides.build
.PHONY : CMakeFiles/Q1.dir/mainQ1.cpp.o.provides

CMakeFiles/Q1.dir/mainQ1.cpp.o.provides.build: CMakeFiles/Q1.dir/mainQ1.cpp.o


# Object files for target Q1
Q1_OBJECTS = \
"CMakeFiles/Q1.dir/mainQ1.cpp.o"

# External object files for target Q1
Q1_EXTERNAL_OBJECTS =

Q1: CMakeFiles/Q1.dir/mainQ1.cpp.o
Q1: CMakeFiles/Q1.dir/build.make
Q1: CMakeFiles/Q1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Futa/Library/Mobile Documents/com~apple~CloudDocs/Program/ClionProjects/learnC++/src/quest/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Q1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Q1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Q1.dir/build: Q1

.PHONY : CMakeFiles/Q1.dir/build

CMakeFiles/Q1.dir/requires: CMakeFiles/Q1.dir/mainQ1.cpp.o.requires

.PHONY : CMakeFiles/Q1.dir/requires

CMakeFiles/Q1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Q1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Q1.dir/clean

CMakeFiles/Q1.dir/depend:
	cd "/Users/Futa/Library/Mobile Documents/com~apple~CloudDocs/Program/ClionProjects/learnC++/src/quest" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Futa/Library/Mobile Documents/com~apple~CloudDocs/Program/ClionProjects/learnC++/src/quest" "/Users/Futa/Library/Mobile Documents/com~apple~CloudDocs/Program/ClionProjects/learnC++/src/quest" "/Users/Futa/Library/Mobile Documents/com~apple~CloudDocs/Program/ClionProjects/learnC++/src/quest" "/Users/Futa/Library/Mobile Documents/com~apple~CloudDocs/Program/ClionProjects/learnC++/src/quest" "/Users/Futa/Library/Mobile Documents/com~apple~CloudDocs/Program/ClionProjects/learnC++/src/quest/CMakeFiles/Q1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Q1.dir/depend

