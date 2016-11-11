#include "graph.h"
#include <iostream>
#include <map>
#include <vector>

using namespace std;

Graph::Graph(const vector<int> &starts, const vector<int> &ends){
	if(starts.size()==ends.size()){
		for(int i=0;i<starts.size();i++){
			grafo[starts[i]].push_back(ends[i]);
		}
	}
	else{
		cout<<"ERROR";
	}
}

int Graph::numOutgoing(const int nodeID){
	return grafo[nodeID].size();
}
const vector<int> Graph::adjacent(const int nodeID){
	return grafo[nodeID];
	
}
