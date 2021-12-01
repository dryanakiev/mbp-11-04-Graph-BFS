void Graph::BFS(int startingVertex) 
{
  visited = new bool[numberOfVertices];

  //Initialize visited pointer with false
  
  for (int i = 0; i < V; i++)
  {
      visited[i] = false;
  }

  list<int> queue;

  visited[startingVertex] = true;

  //Add the starting vertex to the queue
  startingVertex = queue.front();

  //define iterator of type list<int>
  list<int>::iterator i;

  while (!queue.empty())
  {
      int currentVertex = queue.front();
      cout << "Visited V" << currentVertex << " ";
      queue.pop_front();

      //For loop definition starting from current vertex to last vertex
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