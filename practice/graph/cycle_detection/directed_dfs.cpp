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
	bool dfs(int node, vector<bool> &visited, vector<bool> &backedge) {
		visited[node] = true;
		backedge[node] = true;
		for (int nbr : L[node]) {

			if (backedge[nbr]) {
				return true;
			}
			else if (!visited[nbr]) {
				bool nbrHasAcycle = dfs(nbr, visited, backedge);
				if (nbrHasAcycle)
					return true;
			}
		}
		backedge[node] = false;
		return false;
	}
	void solve() {
		vector<bool> visited(V, false);
		vector<bool> stack(V, false);
		cout << dfs(V, visited, stack);
	}
};

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	/*
	1->2->3
	\>	 |
	  \ 4

	*/
	Graph g(5);
	g.addEdge(1, 2, false);
	g.addEdge(2, 3, false);
	g.addEdge(3, 1, false);
	// g.addEdge(1, 4, false);
	g.solve();
	// g.printList();
	return 0;


}