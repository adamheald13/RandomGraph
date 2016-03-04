#include <stdlib.h>
#include <iostream>
#include "RandomGraph.h"
using namespace std;

RandomGraph::RandomGraph(int numVertices, int seed) {
  this->numVertices = numVertices;
  this->maxEdges = numVertices * (numVertices - 1) / 2;
  this->graph = new int[this->maxEdges];

  srand(seed);
}

RandomGraph::~RandomGraph() {
  delete[] graph;
}

void RandomGraph::generateGraph() {
  for(int i = 0; i < this->maxEdges; i++) {
    double edge = ((double) rand() / RAND_MAX);

    int weight = 0;  //edge doesn't exist value

    if(edge <= 0.6) { //edge exists
      weight = rand() % 20 + 1;
    }

    this->graph[i] = weight;
  }
}

void RandomGraph::printGraphArray() {
  for(int i = 0; i < maxEdges; i++) {
    cout << this->graph[i] << " ";
  }
  cout << endl;
}
