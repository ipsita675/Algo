#include <stdio.h>
#include <stdlib.h>
#include "stl.h"

int bfs(int** graph, int vertices, int startVertex);
//returns 0 or 1

int* min_arbrorescence(int** graph, int vertices, int root);
//returns the pointer to an array representing the edges of the minimum arborescence.

int* create_f_star(int** graph, int vertices, int root);
//returns pointer to an array storing the selected edges.

int check_cycle(int vertices, int root, int* chosenEdges);
//returns 0 or 1

int* find_cycle(int vertices, int cycleStart, int* chosenEdges);
//returns pointer to an array storing the vertices in the cycle.

int** compress_graph(int** graph, int vertices, int root, int* minEdges, int* inCycle, int cycleSize, int cycleBeing, int* newRoot, int* mapG2GDash, int* mapGDash2G);
//returns pointer to the compressed graph.

int* decompress_arborescence(int** graph, int vertices, int verticesDash, int* f_star, int* inCycle, int* arbroDash, int* GDash2G);
//returns pointer to an array containing the final arborescence.
