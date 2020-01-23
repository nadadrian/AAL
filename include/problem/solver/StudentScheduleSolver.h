//
// Created by adrian on 17.01.2020.
//

#ifndef AAL_STUDENTSCHEDULESOLVER_H
#define AAL_STUDENTSCHEDULESOLVER_H


#include <vector>
#include "Solver.h"
#include "include/data_structures/Graph.h"


typedef std::vector<std::pair<int, Vertex *>> SolutionType;
typedef Graph SubjectType;

class StudentScheduleSolver : public Solver<SolutionType, SubjectType> {
public:
    virtual ~StudentScheduleSolver() = default;

    StudentScheduleSolver(Problem<SubjectType> *problem);

    SolutionType solve();

    void cleanUp();
};


#endif //AAL_STUDENTSCHEDULESOLVER_H
