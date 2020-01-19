//
// Created by adrian on 17.01.2020.
//

#ifndef AAL_VERTEX_H
#define AAL_VERTEX_H


#include <unordered_map>

class Vertex {
    int id;
    unsigned int inDegree;
    std::unordered_map<int, Vertex *> neighbours;
public:
    void setId(int id);

    int getId();

    std::unordered_map<int, Vertex *> &getNeighbours();

    void increaseInDegree(int i = 1);

    void decreaseInDegree(int i = 1);

    void addNewNeighbour(Vertex *neighbour);

    Vertex *removeNeighbour(int neighbourId);

    Vertex *removeFirstNeighbour();

    bool isIndependent();

    bool hasNeighbours();

};


#endif //AAL_VERTEX_H
