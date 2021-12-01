#include <iostream>
#include <list>
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

void Graph::addEdge(int source, int destination)
{
    adjacencyLists[source].push_back(destination);

    adjacencyLists[destination].push_back(source);
}

void Graph::BFS(int startingVertex)
{
    visited = new bool[numberOfVertices];

    for (int i = 0; i < numberOfVertices; i++)
    {
        visited[i] = false;
    }

    list<int> queue;

    visited[startingVertex] = true;

    queue.push_back(startingVertex);

    list<int>::iterator listIterator;

    while (!queue.empty())
    {
        int currentVertex = queue.front();
        cout << "Visited V" << currentVertex << " ";
        queue.pop_front();

        //For loop definition starting from current vertex to last vertex
        for (auto listIterator = adjacencyLists[currentVertex].begin(); i != adjacencyLists[currentVertex].end(); ++listIterator)
        {
            int adjacentVertex = *listIterator;

            if (!visited[adjacentVertex]) {

                visited[adjacentVertex] = true;

                queue.push_back(adjacentVertex);
            }
        }
    }
}

int main()
{

}