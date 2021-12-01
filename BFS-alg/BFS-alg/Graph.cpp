#include <list>
#include <queue>
#include <iostream>
#include "Graph.h"

void Graph::addEdge(int source, int destination)
{
    adjacencyLists[source].push_back(destination);

    adjacencyLists[destination].push_back(source);
}

//Method to define an directed graph
/*void Graph::addEdge(int source, int destination)
{
    adjacencyLists[source].push_back(destination);
}*/

void Graph::BFS(int startingVertex)
{
    visited = new bool[numberOfVertices];

    //Initialize visited pointer with false
    for (int i = 0; i < numberOfVertices; i++)
    {
        visited[i] = false;
    }

    std::list<int> queue;

    visited[startingVertex] = true;

    //Add the starting vertex to the queue
    queue.push_back(startingVertex);

    //define iterator of type list<int>
    std::list<int>::iterator i;

    while (!queue.empty())
    {
        int currentVertex = queue.front();
        std::cout << "Visited V" << currentVertex << " ";
        queue.pop_front();

        //For loop definition starting from current vertex to last vertex
        for (auto i = adjacencyLists[currentVertex].begin(); i != adjacencyLists[currentVertex].end(); ++i)
        {
            int adjacentVertex = *i;

            if (!visited[adjacentVertex]) {

                visited[adjacentVertex] = true;

                queue.push_back(adjacentVertex);
            }
        }
    }
}

void Graph::printEdges()
{
    for (int i = 0; i < numberOfVertices; i++)
    {
        std::cout << "Adjacency list of vertex of vertex " << i << std::endl;
        for (auto it : adjacencyLists[i]) //traverse through each list
        {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }
}