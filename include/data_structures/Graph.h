//
// Created by adrian on 17.01.2020.
//

#ifndef AAL_GRAPH_H
#define AAL_GRAPH_H


#include <unordered_map>
#include "Vertex.h"


class Graph {
    std::unordered_map<int, Vertex *> vertexes;
    std::unordered_map<int, Vertex *> rootVertexes;

public:
    std::unordered_map<int, Vertex *> &getVertexes();

    std::unordered_map<int, Vertex *> &getRootVertexes();

    void addNewVertex(int id);

    void removeVertex(int id);

    Vertex *getVertex(int id);

    void addDependency(Vertex *fromVertex, Vertex *toVertex);

    bool isEmpty();

    bool isNotResolvable();

    std::pair<int, Vertex*> removeFirstIndependentElement();
};


#endif //AAL_GRAPH_H
