# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/yongtenggg/Desktop/Poly/Year 2/Year 2 Sem 2/DSA/Practicals/DataStructures-Algo/Week 7 Recursion"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/yongtenggg/Desktop/Poly/Year 2/Year 2 Sem 2/DSA/Practicals/DataStructures-Algo/Week 7 Recursion/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Week_7_Recursion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Week_7_Recursion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Week_7_Recursion.dir/flags.make

CMakeFiles/Week_7_Recursion.dir/main.cpp.o: CMakeFiles/Week_7_Recursion.dir/flags.make
CMakeFiles/Week_7_Recursion.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/yongtenggg/Desktop/Poly/Year 2/Year 2 Sem 2/DSA/Practicals/DataStructures-Algo/Week 7 Recursion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Week_7_Recursion.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Week_7_Recursion.dir/main.cpp.o -c "/Users/yongtenggg/Desktop/Poly/Year 2/Year 2 Sem 2/DSA/Practicals/DataStructures-Algo/Week 7 Recursion/main.cpp"

CMakeFiles/Week_7_Recursion.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Week_7_Recursion.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/yongtenggg/Desktop/Poly/Year 2/Year 2 Sem 2/DSA/Practicals/DataStructures-Algo/Week 7 Recursion/main.cpp" > CMakeFiles/Week_7_Recursion.dir/main.cpp.i

CMakeFiles/Week_7_Recursion.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Week_7_Recursion.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/yongtenggg/Desktop/Poly/Year 2/Year 2 Sem 2/DSA/Practicals/DataStructures-Algo/Week 7 Recursion/main.cpp" -o CMakeFiles/Week_7_Recursion.dir/main.cpp.s

# Object files for target Week_7_Recursion
Week_7_Recursion_OBJECTS = \
"CMakeFiles/Week_7_Recursion.dir/main.cpp.o"

# External object files for target Week_7_Recursion
Week_7_Recursion_EXTERNAL_OBJECTS =

Week_7_Recursion: CMakeFiles/Week_7_Recursion.dir/main.cpp.o
Week_7_Recursion: CMakeFiles/Week_7_Recursion.dir/build.make
Week_7_Recursion: CMakeFiles/Week_7_Recursion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/yongtenggg/Desktop/Poly/Year 2/Year 2 Sem 2/DSA/Practicals/DataStructures-Algo/Week 7 Recursion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Week_7_Recursion"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Week_7_Recursion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Week_7_Recursion.dir/build: Week_7_Recursion

.PHONY : CMakeFiles/Week_7_Recursion.dir/build

CMakeFiles/Week_7_Recursion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Week_7_Recursion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Week_7_Recursion.dir/clean

CMakeFiles/Week_7_Recursion.dir/depend:
	cd "/Users/yongtenggg/Desktop/Poly/Year 2/Year 2 Sem 2/DSA/Practicals/DataStructures-Algo/Week 7 Recursion/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/yongtenggg/Desktop/Poly/Year 2/Year 2 Sem 2/DSA/Practicals/DataStructures-Algo/Week 7 Recursion" "/Users/yongtenggg/Desktop/Poly/Year 2/Year 2 Sem 2/DSA/Practicals/DataStructures-Algo/Week 7 Recursion" "/Users/yongtenggg/Desktop/Poly/Year 2/Year 2 Sem 2/DSA/Practicals/DataStructures-Algo/Week 7 Recursion/cmake-build-debug" "/Users/yongtenggg/Desktop/Poly/Year 2/Year 2 Sem 2/DSA/Practicals/DataStructures-Algo/Week 7 Recursion/cmake-build-debug" "/Users/yongtenggg/Desktop/Poly/Year 2/Year 2 Sem 2/DSA/Practicals/DataStructures-Algo/Week 7 Recursion/cmake-build-debug/CMakeFiles/Week_7_Recursion.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Week_7_Recursion.dir/depend

