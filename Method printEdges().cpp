void Graph::printEdges()
{
    for (int i = 0; i < numberOfVertices; i++)
    {
        std::cout << "Adjacency list of vertices" << std::endl;

        for (auto iterator : adjacencyLists[i])
        {
            std::cout << iterator << " ";
        }

        std::cout << std::endl;
    }
}