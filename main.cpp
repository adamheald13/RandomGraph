#include <iostream>
#include "RandomGraph.h"
using namespace std;

int main() {
  int numVertices = 0;
  int seed = 0;

  cout << "Please enter the number of vertices: " << endl;
  cin >> numVertices;
  cout << "Please enter the random seed: " << endl;
  cin >> seed;

  RandomGraph randomGraph(numVertices, seed);
  randomGraph.generateGraph();
  randomGraph.printGraphArray();

  return 0;
}
