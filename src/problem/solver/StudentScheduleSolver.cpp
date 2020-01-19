//
// Created by adrian on 17.01.2020.
//

#include "../../../include/problem/solver/StudentScheduleSolver.h"

StudentScheduleSolver::StudentScheduleSolver(Problem<SubjectType> *problem) {
    this->problem = problem;
}

SolutionType StudentScheduleSolver::solve() {
    Graph *scheduleDependencyGraph = this->problem->getSubject();
    while (!(scheduleDependencyGraph->isEmpty() || scheduleDependencyGraph->isNotResolvable())) {
        this->solution.push_back(scheduleDependencyGraph->removeFirstIndependentElement());
    }
    if (scheduleDependencyGraph->isNotResolvable()) {
        return {};
    }
    return solution;
}

void StudentScheduleSolver::cleanUp() {
    for (auto element: this->problem->getSubject()->getVertexes()) {
        delete element.second;
    };
    delete this->problem->getSubject();
    delete this->problem;
    delete this;
}
