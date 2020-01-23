//
// Created by adrian on 17.01.2020.
//

#include "include/problem/solver/StudentScheduleSolver.h"

StudentScheduleSolver::StudentScheduleSolver(Problem<SubjectType> *problem) {
    this->problem = problem;
    this->solved = false;
}

SolutionType StudentScheduleSolver::solve() {
    Graph *scheduleDependencyGraph = this->problem->getSubject();
    while (!(scheduleDependencyGraph->isEmpty() || this->problem->isNotResolvable())) {
        this->solution.push_back(scheduleDependencyGraph->removeFirstIndependentElement());
    }
    if (this->problem->isNotResolvable()) {
        return {};
    }
    this->solved = true;
    return solution;
}

void StudentScheduleSolver::cleanUp() {
    for(auto element: this->solution) {
        delete element.second;
    }
    if(!this->solved) {
        for (auto element: this->problem->getSubject()->getVertexes()) {
            delete element.second;
        };
    }
    delete this->problem->getSubject();
    delete this->problem;
}

