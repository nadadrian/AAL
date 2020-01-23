//
// Created by adrian on 19.01.2020.
//

#ifndef AAL_ACYCLICGRAPHGENERATOR_H
#define AAL_ACYCLICGRAPHGENERATOR_H


class AcyclicGraphGenerator {
public:
    static std::vector<std::vector<int>> generateGraph(int numberOfVertexes, int numberOfEdges);
    static std::vector<std::vector<int>> generateSparseGraph(int numberOfVertexes);
    static std::vector<std::vector<int>> generateDenseGraph(int numberOfVertexes);
};


#endif //AAL_ACYCLICGRAPHGENERATOR_H
