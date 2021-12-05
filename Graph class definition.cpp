#pragma once
#include <list>
#include <queue>

class Graph
{
public:
    Graph(int vertices)
    {
        numberOfVertices = vertices;

        adjacencyLists = new list<int>[vertices];
    }
    ~Graph()
    {
        delete[] adjacencyLists;
        delete[] visited;
    }

    void addEdge(int source, int destination);

    void BFS(int startingVertex);

    void printEdges();

private:
    int numberOfVertices;

    list<int>* adjacencyLists;

    bool* visited;

};