# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /snap/cmake/203/bin/cmake

# The command to remove a file.
RM = /snap/cmake/203/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adrian/Desktop/Studia/SemV/AAL/AAL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adrian/Desktop/Studia/SemV/AAL/AAL

# Include any dependencies generated for this target.
include CMakeFiles/AAL.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AAL.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AAL.dir/flags.make

CMakeFiles/AAL.dir/src/main.cpp.o: CMakeFiles/AAL.dir/flags.make
CMakeFiles/AAL.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adrian/Desktop/Studia/SemV/AAL/AAL/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AAL.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AAL.dir/src/main.cpp.o -c /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/main.cpp

CMakeFiles/AAL.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AAL.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/main.cpp > CMakeFiles/AAL.dir/src/main.cpp.i

CMakeFiles/AAL.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AAL.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/main.cpp -o CMakeFiles/AAL.dir/src/main.cpp.s

CMakeFiles/AAL.dir/src/data_structures/Graph.cpp.o: CMakeFiles/AAL.dir/flags.make
CMakeFiles/AAL.dir/src/data_structures/Graph.cpp.o: src/data_structures/Graph.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adrian/Desktop/Studia/SemV/AAL/AAL/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/AAL.dir/src/data_structures/Graph.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AAL.dir/src/data_structures/Graph.cpp.o -c /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/data_structures/Graph.cpp

CMakeFiles/AAL.dir/src/data_structures/Graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AAL.dir/src/data_structures/Graph.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/data_structures/Graph.cpp > CMakeFiles/AAL.dir/src/data_structures/Graph.cpp.i

CMakeFiles/AAL.dir/src/data_structures/Graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AAL.dir/src/data_structures/Graph.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/data_structures/Graph.cpp -o CMakeFiles/AAL.dir/src/data_structures/Graph.cpp.s

CMakeFiles/AAL.dir/src/data_structures/Vertex.cpp.o: CMakeFiles/AAL.dir/flags.make
CMakeFiles/AAL.dir/src/data_structures/Vertex.cpp.o: src/data_structures/Vertex.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adrian/Desktop/Studia/SemV/AAL/AAL/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/AAL.dir/src/data_structures/Vertex.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AAL.dir/src/data_structures/Vertex.cpp.o -c /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/data_structures/Vertex.cpp

CMakeFiles/AAL.dir/src/data_structures/Vertex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AAL.dir/src/data_structures/Vertex.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/data_structures/Vertex.cpp > CMakeFiles/AAL.dir/src/data_structures/Vertex.cpp.i

CMakeFiles/AAL.dir/src/data_structures/Vertex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AAL.dir/src/data_structures/Vertex.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/data_structures/Vertex.cpp -o CMakeFiles/AAL.dir/src/data_structures/Vertex.cpp.s

CMakeFiles/AAL.dir/src/problem/StudentScheduleProblem.cpp.o: CMakeFiles/AAL.dir/flags.make
CMakeFiles/AAL.dir/src/problem/StudentScheduleProblem.cpp.o: src/problem/StudentScheduleProblem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adrian/Desktop/Studia/SemV/AAL/AAL/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/AAL.dir/src/problem/StudentScheduleProblem.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AAL.dir/src/problem/StudentScheduleProblem.cpp.o -c /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/problem/StudentScheduleProblem.cpp

CMakeFiles/AAL.dir/src/problem/StudentScheduleProblem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AAL.dir/src/problem/StudentScheduleProblem.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/problem/StudentScheduleProblem.cpp > CMakeFiles/AAL.dir/src/problem/StudentScheduleProblem.cpp.i

CMakeFiles/AAL.dir/src/problem/StudentScheduleProblem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AAL.dir/src/problem/StudentScheduleProblem.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/problem/StudentScheduleProblem.cpp -o CMakeFiles/AAL.dir/src/problem/StudentScheduleProblem.cpp.s

CMakeFiles/AAL.dir/src/problem/solver/StudentScheduleSolver.cpp.o: CMakeFiles/AAL.dir/flags.make
CMakeFiles/AAL.dir/src/problem/solver/StudentScheduleSolver.cpp.o: src/problem/solver/StudentScheduleSolver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adrian/Desktop/Studia/SemV/AAL/AAL/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/AAL.dir/src/problem/solver/StudentScheduleSolver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AAL.dir/src/problem/solver/StudentScheduleSolver.cpp.o -c /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/problem/solver/StudentScheduleSolver.cpp

CMakeFiles/AAL.dir/src/problem/solver/StudentScheduleSolver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AAL.dir/src/problem/solver/StudentScheduleSolver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/problem/solver/StudentScheduleSolver.cpp > CMakeFiles/AAL.dir/src/problem/solver/StudentScheduleSolver.cpp.i

CMakeFiles/AAL.dir/src/problem/solver/StudentScheduleSolver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AAL.dir/src/problem/solver/StudentScheduleSolver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/problem/solver/StudentScheduleSolver.cpp -o CMakeFiles/AAL.dir/src/problem/solver/StudentScheduleSolver.cpp.s

CMakeFiles/AAL.dir/src/mappers/StudentScheduleProblemMapper.cpp.o: CMakeFiles/AAL.dir/flags.make
CMakeFiles/AAL.dir/src/mappers/StudentScheduleProblemMapper.cpp.o: src/mappers/StudentScheduleProblemMapper.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adrian/Desktop/Studia/SemV/AAL/AAL/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/AAL.dir/src/mappers/StudentScheduleProblemMapper.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AAL.dir/src/mappers/StudentScheduleProblemMapper.cpp.o -c /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/mappers/StudentScheduleProblemMapper.cpp

CMakeFiles/AAL.dir/src/mappers/StudentScheduleProblemMapper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AAL.dir/src/mappers/StudentScheduleProblemMapper.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/mappers/StudentScheduleProblemMapper.cpp > CMakeFiles/AAL.dir/src/mappers/StudentScheduleProblemMapper.cpp.i

CMakeFiles/AAL.dir/src/mappers/StudentScheduleProblemMapper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AAL.dir/src/mappers/StudentScheduleProblemMapper.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/mappers/StudentScheduleProblemMapper.cpp -o CMakeFiles/AAL.dir/src/mappers/StudentScheduleProblemMapper.cpp.s

CMakeFiles/AAL.dir/src/problem/generators/AcyclicGraphGenerator.cpp.o: CMakeFiles/AAL.dir/flags.make
CMakeFiles/AAL.dir/src/problem/generators/AcyclicGraphGenerator.cpp.o: src/problem/generators/AcyclicGraphGenerator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adrian/Desktop/Studia/SemV/AAL/AAL/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/AAL.dir/src/problem/generators/AcyclicGraphGenerator.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AAL.dir/src/problem/generators/AcyclicGraphGenerator.cpp.o -c /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/problem/generators/AcyclicGraphGenerator.cpp

CMakeFiles/AAL.dir/src/problem/generators/AcyclicGraphGenerator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AAL.dir/src/problem/generators/AcyclicGraphGenerator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/problem/generators/AcyclicGraphGenerator.cpp > CMakeFiles/AAL.dir/src/problem/generators/AcyclicGraphGenerator.cpp.i

CMakeFiles/AAL.dir/src/problem/generators/AcyclicGraphGenerator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AAL.dir/src/problem/generators/AcyclicGraphGenerator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adrian/Desktop/Studia/SemV/AAL/AAL/src/problem/generators/AcyclicGraphGenerator.cpp -o CMakeFiles/AAL.dir/src/problem/generators/AcyclicGraphGenerator.cpp.s

# Object files for target AAL
AAL_OBJECTS = \
"CMakeFiles/AAL.dir/src/main.cpp.o" \
"CMakeFiles/AAL.dir/src/data_structures/Graph.cpp.o" \
"CMakeFiles/AAL.dir/src/data_structures/Vertex.cpp.o" \
"CMakeFiles/AAL.dir/src/problem/StudentScheduleProblem.cpp.o" \
"CMakeFiles/AAL.dir/src/problem/solver/StudentScheduleSolver.cpp.o" \
"CMakeFiles/AAL.dir/src/mappers/StudentScheduleProblemMapper.cpp.o" \
"CMakeFiles/AAL.dir/src/problem/generators/AcyclicGraphGenerator.cpp.o"

# External object files for target AAL
AAL_EXTERNAL_OBJECTS =

AAL: CMakeFiles/AAL.dir/src/main.cpp.o
AAL: CMakeFiles/AAL.dir/src/data_structures/Graph.cpp.o
AAL: CMakeFiles/AAL.dir/src/data_structures/Vertex.cpp.o
AAL: CMakeFiles/AAL.dir/src/problem/StudentScheduleProblem.cpp.o
AAL: CMakeFiles/AAL.dir/src/problem/solver/StudentScheduleSolver.cpp.o
AAL: CMakeFiles/AAL.dir/src/mappers/StudentScheduleProblemMapper.cpp.o
AAL: CMakeFiles/AAL.dir/src/problem/generators/AcyclicGraphGenerator.cpp.o
AAL: CMakeFiles/AAL.dir/build.make
AAL: CMakeFiles/AAL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adrian/Desktop/Studia/SemV/AAL/AAL/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable AAL"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AAL.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AAL.dir/build: AAL

.PHONY : CMakeFiles/AAL.dir/build

CMakeFiles/AAL.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AAL.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AAL.dir/clean

CMakeFiles/AAL.dir/depend:
	cd /home/adrian/Desktop/Studia/SemV/AAL/AAL && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adrian/Desktop/Studia/SemV/AAL/AAL /home/adrian/Desktop/Studia/SemV/AAL/AAL /home/adrian/Desktop/Studia/SemV/AAL/AAL /home/adrian/Desktop/Studia/SemV/AAL/AAL /home/adrian/Desktop/Studia/SemV/AAL/AAL/CMakeFiles/AAL.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AAL.dir/depend
