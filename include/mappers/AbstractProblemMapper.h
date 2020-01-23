//
// Created by adrian on 17.01.2020.
//

#ifndef AAL_ABSTRACTPROBLEMMAPPER_H
#define AAL_ABSTRACTPROBLEMMAPPER_H


#include <iostream>
#include "include/problem/Problem.h"

template<class SubjectType>
class AbstractProblemMapper {
public:
    virtual ~AbstractProblemMapper() = default;
    virtual Problem<SubjectType> *mapInputToProblem(std::istream &inputStream) = 0;
};


#endif //AAL_ABSTRACTPROBLEMMAPPER_H
