#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Graph{
	private:
		map<const int, vector<int> >grafo;
		
		
	public:
		Graph(const vector<int> &, const vector<int> &);
		int numOutgoing(const int);
		const vector<int> adjacent(const int nodeID);
	
};

#endif
