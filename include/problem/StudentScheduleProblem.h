//
// Created by adrian on 17.01.2020.
//

#ifndef AAL_STUDENTSCHEDULEPROBLEM_H
#define AAL_STUDENTSCHEDULEPROBLEM_H

#include "Problem.h"
#include "include/data_structures/Graph.h"

class StudentScheduleProblem : public Problem<Graph> {
    bool isNotResolvable();
};


#endif //AAL_STUDENTSCHEDULEPROBLEM_H
