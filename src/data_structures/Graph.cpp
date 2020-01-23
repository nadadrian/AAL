//
// Created by adrian on 17.01.2020.
//

#include "../../include/data_structures/Graph.h"

std::unordered_map<int, Vertex *> &Graph::getVertexes() {
    return this->vertexes;
}

void Graph::addVertex(int id) {
    Vertex *newVertex = new Vertex();
    newVertex->setId(id);
    this->vertexes.insert({id, newVertex});
    this->rootVertexes.insert({id, newVertex});
}

void Graph::removeVertex(int id) {
    this->vertexes.erase(id);
}

Vertex *Graph::getVertex(int id) {
    return this->vertexes.at(id);
}

std::unordered_map<int, Vertex *> &Graph::getRootVertexes() {
    return this->rootVertexes;
}

void Graph::addEdge(Vertex *fromVertex, Vertex *toVertex) {
    if (this->rootVertexes.find(toVertex->getId()) != this->rootVertexes.end()) {
        this->rootVertexes.erase(toVertex->getId());
    }
    fromVertex->addNewNeighbour(toVertex);
}

bool Graph::isEmpty() {
    return this->vertexes.empty();
}

bool Graph::hasRootVertexes() {
    return !this->rootVertexes.empty();
}


std::pair<int, Vertex *> Graph::removeFirstIndependentElement() {
    auto firstIndependentElement = *(this->rootVertexes.begin());
    Vertex *firstIndependentVertex = firstIndependentElement.second;
    while (firstIndependentVertex->hasNeighbours()) {
        auto removedNeighbour = firstIndependentVertex->removeFirstNeighbour();
        if (removedNeighbour->isIndependent()) {
            this->rootVertexes.insert({removedNeighbour->getId(), removedNeighbour});
        }
    }
    this->rootVertexes.erase(firstIndependentElement.first);
    this->vertexes.erase(firstIndependentElement.first);
    return {firstIndependentElement.first, firstIndependentVertex};
}

