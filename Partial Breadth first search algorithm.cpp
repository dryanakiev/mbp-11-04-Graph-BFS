#include<iostream>
#include<list>
using namespace std;
void Graph::BFS(int startingVertex)
{
    visited = new bool[numberOfVertices];

    //Initialize visited pointer with false
    for (int i = 0; i < numberOfVertices; i++)
    {
        visited[i] = false;
    }

    list<int> queue;

    visited[startingVertex] = true;

    //Add the starting vertex to the queue
    queue.push_back(s);

    //define iterator of type list<int>
    list<int>::iterator i;

    while (!queue.empty())
    {
        int currentVertex = queue.front();
        cout << "Visited V" << currentVertex << " ";
        queue.pop_front();

        //For loop definition starting from current vertex to last vertex
        for (i = adjacencyLists[s].begin(); i != adjacencyLists[s].end(); ++i)
        {
            int adjacentVertex = *listIterator;

            if (!visited[adjacentVertex]) {

                visited[adjacentVertex] = true;

                queue.push_back(adjacentVertex);
            }
        }
    }
}

void Graph::printGraph()
{
    for (int i = 0; i < numberOfVertices; i++)
    {
        cout << "Vertex " << i << ":";
        for (auto x : adjacencyLists[i])
        {
            cout << "-> " << x;
        }
        cout << endl;
    }
}