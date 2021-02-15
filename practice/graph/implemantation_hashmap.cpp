#include<bits/stdc++.h>
using namespace std;
class Graph {
	map<string, list<pair<string, int>>>  G;
public:
	void addEdge(string source, string destination, bool birected, int weight) {
		G[source].push_back(make_pair(destination, weight));
		if (birected)
			G[destination].push_back(make_pair(source, weight));
	}
	void printAdjList() {
		for (auto Node : G) {
			cout << "source : " << Node.first << " : ";
			for (auto edge : Node.second) {
				cout << " ->(" << edge.first << "): " << edge.second;
			}
			cout << endl;
		}
	}
};
int main() {

	Graph g;
	g.addEdge("A", "B", true, 20);
	g.addEdge("A", "C", true, 10);
	g.addEdge("A", "D", false, 50);
	g.addEdge("C", "D", true, 40);
	g.addEdge("B", "D", true, 30);
	g.printAdjList();
	return 0;
}
/*



		A-----20----B
		| \    		|
		|   \       |
	   10     50   30
	    |        \  |
	    |          \|
	    C-----40----D
*/