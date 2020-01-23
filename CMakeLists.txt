cmake_minimum_required(VERSION 3.15)
project(AAL)

set(CMAKE_CXX_STANDARD 14)

#activate this to make basedir-relative source files' directories
SET(BASEPATH "${CMAKE_SOURCE_DIR}")
INCLUDE_DIRECTORIES("${BASEPATH}")

add_executable(AAL src/main.cpp src/data_structures/Graph.cpp include/data_structures/Graph.h src/data_structures/Vertex.cpp include/data_structures/Vertex.h src/problem/StudentScheduleProblem.cpp include/problem/StudentScheduleProblem.h include/problem/Problem.h include/problem/solver/Solver.h src/problem/solver/StudentScheduleSolver.cpp include/problem/solver/StudentScheduleSolver.h include/mappers/AbstractProblemMapper.h src/mappers/StudentScheduleProblemMapper.cpp include/mappers/StudentScheduleProblemMapper.h src/problem/generators/AcyclicGraphGenerator.cpp include/problem/generators/AcyclicGraphGenerator.h)
