cmake_minimum_required(VERSION 3.15)
project(AAL)

set(CMAKE_CXX_STANDARD 14)

#activate this to make basedir-relative source files' directories
#SET(BASEPATH "${CMAKE_SOURCE_DIR}")
#INCLUDE_DIRECTORIES("${BASEPATH}")

add_executable(AAL src/main.cpp src/data_structures/Graph.cpp include/Graph.h)