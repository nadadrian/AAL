//
// Created by adrian on 18.01.2020.
//

#ifndef AAL_STUDENTSCHEDULEPROBLEMMAPPER_H
#define AAL_STUDENTSCHEDULEPROBLEMMAPPER_H


#include "AbstractProblemMapper.h"
#include "../data_structures/Graph.h"

class StudentScheduleProblemMapper : public AbstractProblemMapper<Graph> {
public:
    virtual ~StudentScheduleProblemMapper() = default;
    Problem<Graph> *mapInputToProblem(std::istream &inputStream);
};


#endif //AAL_STUDENTSCHEDULEPROBLEMMAPPER_H
