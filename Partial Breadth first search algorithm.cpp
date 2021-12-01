void Graph::BFS(int startingVertex)
{
    visited = new bool[numberOfVertices];

    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }

    list<int> queue;

    visited[startingVertex] = true;

    startingVertex = queue.front();

    list<int>::iterator i;

    while (!queue.empty())
    {
        int currentVertex = queue.front();
        cout << "Visited V" << currentVertex << " ";
        queue.pop_front();

        for (i = adj[startingVertex].begin(); i != adj[startingVertex].end(); ++i)
        {
            int adjacentVertex = *listIterator;

            if (!visited[adjacentVertex]) {

                visited[adjacentVertex] = true;

                queue.push_back(adjacentVertex);
            }
        }
    }
}