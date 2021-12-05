void Graph::BFS(int startingVertex)
{
    visited = new bool[numberOfVertices];

    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }

    visited[startingVertex] = true;

    list<int> queue;
    queue.push_back(startingVertex);

    list<int>::iterator i;

    while (!queue.empty())
    {
        int currentVertex = queue.front();
        cout << "Visited V" << currentVertex << " ";
        queue.pop_front();

        for (i = adjacencyLists[startingVertex].begin(); i != adjacencyLists[startingVertex].end(); ++i)
        {
            int adjacentVertex = *listIterator;

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
        std::cout << "Adjacency list of vertex" << i << std::endl;
        for (auto it : adjacencyLists[i])
        {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }
}