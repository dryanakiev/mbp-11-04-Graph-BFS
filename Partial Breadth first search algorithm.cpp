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
		startingVertex = queue.front();
		cout << "Visited V" << startingVertex << " ";
		queue.pop_front();

		//For loop definition starting from current vertex to last vertex
		for (i = adjacencyList[startingVertex].begin(); i != adjacencyList[startingVertex].end(); ++i)
		{
			if (!visited[*i]) {

				visited[*i] = true;

				queue.push_back(*i);
			}
		}
	}
}