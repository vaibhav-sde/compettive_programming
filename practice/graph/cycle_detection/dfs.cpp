#include<bits/stdc++.h>
using namespace std;
class Graph {
	int V;
	list<int> *L;
	//pointer to arrray of list
public:
	Graph(int v_count) {
		V = v_count;
		L = new list<int>[v_count];
	}
	void addEdge(int start, int end, bool is_unidir = true) {
		L[start].push_back(end);
		if (is_unidir)
			L[end].push_back(start);
	}
	void printList() {
		for (int i = 0; i < V; i++) {
			cout << i << " = > ";
			for (int x : L[i]) {
				cout << x << " ";
			}
			cout << endl;
		}
	}
	bool dfs(int node , vector<bool> &visited, int parent) {
		visited[node] = true;

		for (int nebar : L[node]) {
			if (!visited[nebar]) {
				bool nebarHasCycle = dfs(nebar, visited, node);
				if (nebarHasCycle ) {
					return true;
				}
			} else if (nebar != parent) {
				return true;
			}
		}
		return false;
	}
	void  findDfs() {
		vector<bool> visited(V, false);
		cout << "ans : " << dfs(0, visited, -1);
	}


};

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	/*

		2--3-
	/	   |   \
	1 	   |    5
	\	   |   /  \
		0--4 -     6

	*/
	Graph g(7);
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 5);
	g.addEdge(5, 6);
	g.addEdge(4, 5);
	g.addEdge(0, 4);
	g.addEdge(3, 4);
	// g.dfs(1);
	g.findDfs();
	// g.printList();
	return 0;


}