#include<bits/stdc++.h>
using namespace std;
class Graph {
	int V;
	//Array list
	list<int> *L;
public:
	Graph(int V) {
		this->V = V;
		L = new list<int> [V];
	}
	void addEgde(int x, int y) {
		L[x].push_back(y);
		L[y].push_back(x);
	}
	void printAdjList() {
		//itterate all verticies
		for (int i = 0; i < V; i++) {
			cout << "Vertex  " << i << " : ";
			for (auto neighbour : L[i]) {
				cout << neighbour << " ";
			}
			cout << endl;
		}
	}
};
int main() {

	Graph g(4);
	g.addEgde(0, 1);
	g.addEgde(0, 2);
	g.addEgde(2, 3);
	g.addEgde(1, 2);
	g.printAdjList();
	return 0;
}
/*
	0 -----1
     \	  /
	  \  /
	   2
	   |
	   |
	   3
*/