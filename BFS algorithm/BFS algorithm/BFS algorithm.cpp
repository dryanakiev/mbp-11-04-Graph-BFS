// BFS algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Graph
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
        cout << "Visited V" << currentVertex << " ";
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
        cout << "Adjacency list of vertex of vertex " << i << std::endl;
        for (auto it : adjacencyLists[i]) //traverse through each list
        {
            cout << it << " ";
        }
        cout << std::endl;
    }
}

int main()
{
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
