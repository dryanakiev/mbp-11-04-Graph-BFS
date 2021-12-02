void Graph::BFS(int startingVertex)
{
    visited = new bool[numberOfVertices];


    for (int i = 0; i < numberOfVertices; i++)
    {
        visited[i] = false;
    }

    std::list<int> queue;

    visited[startingVertex] = true;


    queue.push_back(startingVertex);


    std::list<int>::iterator listIterator;

    while (!queue.empty())
    {
        int currentVertex = queue.front();
        std::cout << "Visited V" << currentVertex << " ";
        queue.pop_front();


        for (auto i = adjacencyLists[currentVertex].begin(); i != adjacencyLists[currentVertex].end(); ++listIterator)
        {
            int adjacentVertex = *listIterator;

            if (!visited[adjacentVertex]) {

                visited[adjacentVertex] = true;

                queue.push_back(adjacentVertex);
            }
        }
    }
}