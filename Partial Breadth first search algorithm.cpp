
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
    std::list<int>::iterator listIterator;

    while (!queue.empty())
    {
        int currentVertex = queue.front();
        std::cout << "Visited V" << currentVertex << " ";
        queue.pop_front();

        //For loop definition starting from current vertex to last vertex
        for (listIterator = adjacencyLists[currentVertex].begin(); listIterator != adjacencyLists[currentVertex].end(); ++listIterator)
        {
            int adjacentVertex = *listIterator;

            if (!visited[adjacentVertex]) {

                visited[adjacentVertex] = true;

                queue.push_back(adjacentVertex);
            }
        }
    }
}