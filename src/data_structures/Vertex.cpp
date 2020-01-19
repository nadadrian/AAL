//
// Created by adrian on 17.01.2020.
//

#include "../../include/data_structures/Vertex.h"

void Vertex::setId(int id) {
    this->id = id;
}

int Vertex::getId() {
    return this->id;
}

std::unordered_map<int, Vertex *> &Vertex::getNeighbours() {
    return this->neighbours;
}

void Vertex::increaseInDegree(int i) {
    this->inDegree += i;
}

void Vertex::decreaseInDegree(int i) {
    this->inDegree -= i;
}

void Vertex::addNewNeighbour(Vertex *neighbour) {
    neighbour->increaseInDegree();
    this->neighbours.insert({neighbour->getId(), neighbour});
}

Vertex *Vertex::removeNeighbour(int neighbourId) {
    auto firstNeighbour = this->neighbours.at(neighbourId);
    firstNeighbour->decreaseInDegree();
    this->neighbours.erase(neighbourId);
    return firstNeighbour;
}

bool Vertex::isIndependent() {
    return inDegree == 0;
}

bool Vertex::hasNeighbours() {
    return !this->neighbours.empty();
}

Vertex *Vertex::removeFirstNeighbour() {
    return this->removeNeighbour(this->neighbours.begin()->first);
}
