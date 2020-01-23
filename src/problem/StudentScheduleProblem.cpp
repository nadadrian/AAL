//
// Created by adrian on 17.01.2020.
//

#include "include/problem/StudentScheduleProblem.h"

bool StudentScheduleProblem::isNotResolvable() {
    return !this->subject->hasRootVertexes() && !this->subject->isEmpty();
}
