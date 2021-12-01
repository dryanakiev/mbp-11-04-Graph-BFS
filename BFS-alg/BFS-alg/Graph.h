#pragma once
#include <list>
#include <queue>
class Graph
{
    int numberOfVertices;

    std::list<int>* adjacencyLists;

    bool* visited;

public:
    Graph(int vertices)
    {
        numberOfVertices = vertices;

        adjacencyLists = new std::list<int>[vertices];
    }
    ~Graph()
    {
        delete[] adjacencyLists;
        delete[] visited;
    }
    void addEdge(int source, int destination);

    void BFS(int startingVertex);

    void printEdges();
};