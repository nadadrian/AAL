//
// Created by adrian on 19.01.2020.
//

#ifndef AAL_ACYCLICGRAPHGENERATOR_H
#define AAL_ACYCLICGRAPHGENERATOR_H


class AcyclicGraphGenerator {
public:
    static int** generateGraph(int numberOfVertexes, int numberOfEdges);
    static int** generateSparseGraph(int numberOfVertexes);
    static int** generateDenseGraph(int numberOfVertexes);
};


#endif //AAL_ACYCLICGRAPHGENERATOR_H
