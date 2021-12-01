#include <iostream>
#include <list>
#include <queue>
#include "Graph.h"

using namespace std;

/*class Graph
{
    int numberOfVertices;

    list<int>* adjacencyLists;

    bool* visited;

public:
    Graph(int vertices)
    {
        numberOfVertices = vertices;

        adjacencyLists = new list<int>[vertices];
    }

    void addEdge(int source, int destination);

    void BFS(int startingVertex);
};

//Method to define an undirected graph
void Graph::addEdge(int source, int destination)
{
    adjacencyLists[source].push_back(destination);

    adjacencyLists[destination].push_back(source);
}

//Method to define an directed graph
void Graph::addEdge(int source, int destination)
{
    adjacencyLists[source].push_back(destination);
}

void Graph::BFS(int startingVertex)
{
    visited = new bool[numberOfVertices];

    //Initialize visited pointer with false

    list<int> queue;

    visited[startingVertex] = true;

    //Add the starting vertex to the queue

    //define iterator of type list<int>

    while (!queue.empty())
    {
        int currentVertex = queue.front();
        cout << "Visited V" << currentVertex << " ";
        queue.pop_front();

        //For loop definition starting from current vertex to last vertex
        {
            int adjacentVertex = *listIterator;

            if (!visited[adjacentVertex]) {

                visited[adjacentVertex] = true;

                queue.push_back(adjacentVertex);
            }
        }
    }
}*/

int main()
{

}
