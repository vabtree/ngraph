//To create a Graph, we call the insert_edge() function to build its edges:


using namespace NGraph;

Graph A;
A.insert_edge(3,4);
A.insert_edge(4,5);
A.insert_edge(0,1);

// We can see find out a graph's order and size by calling the num_vertices() and num_edges(). For example,

std::cout << "Graph has " << A.num_vertices() << " vertices and "
        << A.num_edges() << " edges.\n";

// One can remove edges by calling remove_edge(), e.g.
A.remove_edge(4,5);

// Once a graph is built, we may use it in expressions, for example:

Graph::vertex a = 4;    // a more meaningful type than "unsigned int" 
Graph::vertex b = 6;    //   
A.degree(a);            // return the degree at vertex a
A.in_degree(a);         // return the number of vertices that point to this one

Graph::vertex_set S = A.out_neighbors(a);   // return vertices reached through this one

A.subgraph(S);          // return the graph whose edge include all vertices in S

A + B;                  // return the union of two graphs

cout << A ;             // print out graph A onto standard output stream

/*
   //  for each node in the graph...
   //
   for ( Graph::const_iterator p = A.begin(); p != A.end(); p++)
   {
        int do = out_degree(p);
        int di = in_degree(p);

        // identify its neighbors
        //
        Graph::vertex_set Si = in_neighbors(p);
        Graph::vertex_set So = out_neighbors(p);

        // print out each out-going edge
        //
        for (Graph::vertex_set::const_iterator t = Si.begin(); t !=Si.end(); t++)
        {
            cout << *t << "\n";
        }
        cout << "\n";
   }
*/