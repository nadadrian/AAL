//
// Created by adrian on 17.01.2020.
//

#ifndef AAL_SOLVER_H
#define AAL_SOLVER_H


#include "../Problem.h"

template<class SolutionType, class SubjectType>
class Solver {
protected:
    Problem<SubjectType> *problem;
    SolutionType solution;
public:
    void setProblem(Problem<SubjectType> *problem);

    Problem<SubjectType> *getProblem();

    virtual SolutionType solve() = 0;

    virtual void cleanUp() = 0;
};

template<class SolutionType, class SubjectType>
void Solver<SolutionType, SubjectType>::setProblem(Problem<SubjectType> *problem) {
    this->problem = problem;
}

template<class SolutionType, class SubjectType>
Problem<SubjectType> *Solver<SolutionType, SubjectType>::getProblem() {
    return this->problem;
}


#endif //AAL_SOLVER_H
