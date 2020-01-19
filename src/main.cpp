#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
#include <cstring>
#include <sstream>
#include "../include/problem/StudentScheduleProblem.h"
#include "../include/mappers/StudentScheduleProblemMapper.h"
#include "../include/problem/solver/Solver.h"
#include "../include/problem/solver/StudentScheduleSolver.h"
#include "../include/problem/generators/AcyclicGraphGenerator.h"

typedef std::vector<std::pair<int, Vertex *>> SolutionType;
typedef Graph SubjectType;

void printUsage();

int parseInt(char **argv, int id);

void cleanUpMatrix(int **matrix, int size);

int main(int argc, char **argv) {

    if (argc < 3 || (strcmp(argv[1], "-m") != 0 && strcmp(argv[1], "m") != 0)) {
        printUsage();
        return 1;
    }
    int chosenMode = parseInt(argv, 2);
    if (chosenMode == -1) {
        printUsage();
        return 1;
    }
    switch (chosenMode) {
        case 1: {
            AbstractProblemMapper<SubjectType> *mapper = new StudentScheduleProblemMapper();
            Problem<SubjectType> *problem = mapper->mapInputToProblem(std::cin);
            Solver<SolutionType, SubjectType> *solver = new StudentScheduleSolver(problem);
            SolutionType solution = solver->solve();
            for (auto i: solution) {
                std::cout << i.first << " " << std::endl;
            }
            solver->cleanUp();
            break;
        }
        case 2: {
            if (argc < 9
                || (strcmp(argv[3], "-n") != 0 && strcmp(argv[3], "n") != 0)
                || (strcmp(argv[5], "-d") != 0 && strcmp(argv[5], "d") != 0)) {
                printUsage();
                return 1;
            }
            int numberOfVertexes = parseInt(argv, 4);
            std::string density = argv[6];
            if (numberOfVertexes == -1) {
                printUsage();
                return 1;
            }
            int **graphAdjacencyMatrix;
            if (density == "dense") {
                graphAdjacencyMatrix = AcyclicGraphGenerator::generateDenseGraph(numberOfVertexes);
            } else if (density == "sparse") {
                graphAdjacencyMatrix = AcyclicGraphGenerator::generateSparseGraph(numberOfVertexes);
            } else {
                printUsage();
                return 1;
            }
            std::cout << numberOfVertexes << std::endl;
            for (int row = 0; row < numberOfVertexes; ++row) {
                for (int column = 0; column < numberOfVertexes; ++column) {
                    if (graphAdjacencyMatrix[row][column] == 1) {
                        std::cout << column + 1 << " " << row + 1 << std::endl;
                    }
                }
            }
            cleanUpMatrix(graphAdjacencyMatrix, numberOfVertexes);
            break;
        }
        case 3: {
            if (argc < 13
                || (strcmp(argv[3], "-n") != 0 && strcmp(argv[3], "n") != 0)
                || (strcmp(argv[5], "-k") != 0 && strcmp(argv[5], "k") != 0)
                || (strcmp(argv[7], "-step") != 0 && strcmp(argv[7], "step") != 0)
                || (strcmp(argv[9], "-r") != 0 && strcmp(argv[9], "r") != 0)
                || (strcmp(argv[11], "-d") != 0 && strcmp(argv[11], "d") != 0)) {
                printUsage();
                return 1;
            }
            int initialNumberOfVertexes = parseInt(argv, 4);
            int numberOfProblems = parseInt(argv, 6);
            int step = parseInt(argv, 8);
            int numberOfProblemInstances = parseInt(argv, 10);
            std::string density = argv[12];
            if (initialNumberOfVertexes == -1
                || numberOfProblems == -1
                || step == -1
                || numberOfProblemInstances == -1
                || (density != "dense" && density != "sparse")) {
                printUsage();
                return 1;
            }

            std::cout << "index, solution time(milliseconds)" << std::endl;
            for (int iteration = 0, numberOfVertexes = initialNumberOfVertexes;
                 iteration < numberOfProblems; ++iteration, numberOfVertexes += step) {
                for (int instance = 0; instance < numberOfProblemInstances; ++instance) {
                    int **graphAdjacencyMatrix;
                    if (density == "dense") {
                        graphAdjacencyMatrix = AcyclicGraphGenerator::generateDenseGraph(numberOfVertexes);
                    } else {
                        graphAdjacencyMatrix = AcyclicGraphGenerator::generateSparseGraph(numberOfVertexes);
                    }
                    std::stringstream inputStream;
                    inputStream << numberOfVertexes << std::endl;
                    for (int row = 0; row < numberOfVertexes; ++row) {
                        for (int column = 0; column < numberOfVertexes; ++column) {
                            if (graphAdjacencyMatrix[row][column] == 1) {
                                inputStream << column + 1 << " " << row + 1 << std::endl;
                            }
                        }
                    }
                    cleanUpMatrix(graphAdjacencyMatrix, numberOfVertexes);
                    AbstractProblemMapper<SubjectType> *mapper = new StudentScheduleProblemMapper();
                    Problem<SubjectType> *problem = mapper->mapInputToProblem(inputStream);
                    Solver<SolutionType, SubjectType> *solver = new StudentScheduleSolver(problem);
                    auto start = std::chrono::high_resolution_clock::now();
                    SolutionType solution = solver->solve();
                    auto stop = std::chrono::high_resolution_clock::now();
                    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
                    std::cout << iteration + 1 << "." << instance + 1 << ", " << duration.count() << std::endl;
                    solver->cleanUp();
                }
            }
            break;
        }
        default:
            printUsage();
            return 1;
    }


    return 0;
}


void printUsage() {
    std::cout << "Usage: " << std::endl;
    std::cout << "> 1:"
                 " ./AAL "
                 "-m 1"
                 " < test_data.txt"
                 " > result_file.txt (optional)" << std::endl;
    std::cout
            << "> 2:"
               " ./AAL"
               " -m 2"
               " -n [number of vertexes, i.e. 100]"
               " -d [d/s (d for dense graph, s for sparse graph]"
               " > test_data.txt (generating random graph)"
            << std::endl;
    std::cout << "> 3:"
                 " ./AAL"
                 " -m 3"
                 " -n [initial number of vertexes, i.e. 100]"
                 " -k [number of problems, i.e. 30]"
                 " -step [step increasing test size each iteration, i.e. 50]"
                 " -r [number of problem's instances, i.e. 10]"
                 " -d [d/s (d for dense graph, s for sparse graph]"
                 " > result_file.txt (optional)" << std::endl;
}

int parseInt(char **argv, int id) {
    try {
        return std::stoi(argv[id]);
    } catch (std::exception e) {
        return -1;
    }
}

void cleanUpMatrix(int **matrix, int size) {
    std::cout << (size * (size - 1)) / 2 << std::endl;
    for (int i = 0; i < size; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}