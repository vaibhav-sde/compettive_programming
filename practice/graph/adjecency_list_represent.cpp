#include<bits/stdc++.h>
using namespace std;
class Graph{	
	 int V;
	 list<int> *L;
	 //pointer to arrray of list
	public:
		Graph(int v_count){
			V = v_count;
			L = new list<int>[v_count];
		}
		void addEdge(int start, int end, bool is_unidir=true){
			L[start].push_back(end);
			if(is_unidir)
				L[end].push_back(start);
		}
		void printList(){
			for(int i=0;i<V;i++){
				cout<<i<<" => ";
				for(int x: L[i]){
					cout<<x<<" ";
				}
				cout<<endl;
			}
		}
};

int main(){
	Graph g(6);
	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(2,1);
	g.addEdge(3,4);
	g.addEdge(4,5);
	g.addEdge(2,3);
	g.addEdge(3,5);
	g.printList();
		return 0;
}