//
// Created by adrian on 18.01.2020.
//

#include "../../include/mappers/StudentScheduleProblemMapper.h"
#include "../../include/problem/StudentScheduleProblem.h"

Problem<Graph> *StudentScheduleProblemMapper::mapInputToProblem(std::istream &inputStream) {
    auto problem = new StudentScheduleProblem();
    Graph* subject = new Graph();
    int fromIndex;
    int toIndex;
    int problemSize;
    inputStream >> problemSize;
    for(int i = 1; i <= problemSize; ++i) {
        subject -> addNewVertex(i);
    }
    while (inputStream >> fromIndex >> toIndex) {
        subject -> addDependency(subject->getVertex(fromIndex), subject->getVertex(toIndex));
    }
    problem->setSubject(subject);
    return problem;
}
