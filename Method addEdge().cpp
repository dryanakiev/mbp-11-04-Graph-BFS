#include<iostream>
#include<list>
using namespace std;
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