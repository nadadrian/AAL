//
// Created by adrian on 19.01.2020.
//

#include <vector>
#include <random>
#include <algorithm>
#include <iostream>
#include "../../../include/problem/generators/AcyclicGraphGenerator.h"


/*
 * Generators are based on adjacency matrix. The basic idea is that the graph is acyclic if and only if
 * all elements at main diagonal and above it are 0s meaning that the edge from vertex at index i to vertex at index j
 * can exist if and only if i < j.
 * Example adjacency matrix of acyclic graph:
 *
 *   ---------------------------
 *  | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
 *  | 1 | 0 | 0 | 0 | 0 | 0 | 0 |
 *  | 1 | 1 | 0 | 0 | 0 | 0 | 0 |
 *  | 0 | 0 | 1 | 0 | 0 | 0 | 0 |
 *  | 0 | 1 | 1 | 1 | 0 | 0 | 0 |
 *  | 1 | 1 | 0 | 0 | 1 | 0 | 0 |
 *  | 1 | 0 | 1 | 1 | 1 | 0 | 0 |
 *   ---------------------------
 */

std::vector<std::vector<int>> AcyclicGraphGenerator::generateGraph(int numberOfVertexes, int numberOfEdges) {
    int maxEdgesInDAG = (numberOfVertexes * (numberOfVertexes - 1)) / 2;
    std::vector<std::vector<int>> matrix = std::vector<std::vector<int>>(numberOfVertexes);
    for (auto &row: matrix) {
        row = std::vector<int>(numberOfVertexes);
        std::fill(row.begin(), row.end(), 0);
    }

    if (numberOfEdges == maxEdgesInDAG) {
        for (int i = 0; i < numberOfVertexes; ++i) {
            for (int j = 0; j < i; ++j) {
                matrix[i][j] = 1;
            }
        }
        return matrix;
    }

    std::vector<std::pair<int, std::vector<int> *>> rowsToChoose;
    for (int i = 1; i < numberOfVertexes; ++i) {
        auto *emptyFields = new std::vector<int>(i);
        std::iota(emptyFields->begin(), emptyFields->end(), 0);
        rowsToChoose.emplace_back(i, emptyFields);
    }
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, rowsToChoose.size() - 1);
    for (int i = 0; i < numberOfEdges; ++i) {
        auto rowWithEmptyFieldsPair = rowsToChoose[dis(gen) % rowsToChoose.size()];
        auto row = rowWithEmptyFieldsPair.first;
        auto *emptyFields = rowWithEmptyFieldsPair.second;
        auto column = (*emptyFields)[dis(gen) % emptyFields->size()];
        matrix[row][column] = 1;
        emptyFields->erase(std::remove(emptyFields->begin(), emptyFields->end(), column), emptyFields->end());
        if (emptyFields->empty()) {
            rowsToChoose.erase(std::remove(rowsToChoose.begin(), rowsToChoose.end(), rowWithEmptyFieldsPair),
                               rowsToChoose.end());
            delete emptyFields;
        }
    }
    for(auto rowToChoose: rowsToChoose) {
        delete rowToChoose.second;
    }
    return matrix;
}

std::vector<std::vector<int>> AcyclicGraphGenerator::generateSparseGraph(int numberOfVertexes) {
    return AcyclicGraphGenerator::generateGraph(numberOfVertexes, numberOfVertexes);
}

std::vector<std::vector<int>> AcyclicGraphGenerator::generateDenseGraph(int numberOfVertexes) {
    return AcyclicGraphGenerator::generateGraph(numberOfVertexes, (numberOfVertexes * (numberOfVertexes - 1)) / 2);
}


