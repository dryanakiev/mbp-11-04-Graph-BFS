void Graph::BFS(int startingVertex) 
{
  visited = new bool[numberOfVertices];

  //Initialize visited pointer with false
  for (int i = 0; i < numberOfVertices; i++)
  {
      visited[i] = false;
  }
  std::list<int> queue;

  list<int> queue;

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
    for(auto i = adjacentVertex[currentVertex].begin();i!= adjacentVertex[currentVertex].end())
    {
      int adjacentVertex = *listIterator;

      if (!visited[adjacentVertex]) {

        visited[adjacentVertex] = true;

        queue.push_back(adjacentVertex);
      }
    }
  }
}