#ifndef RANDOMGRAPH_H
#define RANDOMGRAPH_H

class RandomGraph {
public:
  RandomGraph(int numVertices, int seed);
  ~RandomGraph();
  void generateGraph();
  void printGraphArray();

private:
  int *graph;
  int numVertices;
  int maxEdges;
};

#endif
