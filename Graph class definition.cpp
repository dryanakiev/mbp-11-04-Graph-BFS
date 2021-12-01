class Graph 
{
  int numberOfVertices;

  list<int>* adjacencyLists;

  bool* visited;

  public:
    Graph(int vertices)
    {
      numberOfVertices = vertices;

      adjacencyLists = new list<int>[vertices];
    }

    void addEdge(int source, int destination);

    void BFS(int startingVertex);

    void printGraph();
};