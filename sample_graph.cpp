#include <iostream>
#include "ngraph.hpp"

using namespace NGraph;

int main() {

Graph A;
A.insert_edge(3,4);
A.insert_edge(4,5);
A.insert_edge(0,1);

// We can see find out a graph's order and size by calling the num_vertices() and num_edges(). For example,

std::cout << "Graph has " << A.num_vertices() << " vertices and " << A.num_edges() << " edges.\n";

	return 0;
}
