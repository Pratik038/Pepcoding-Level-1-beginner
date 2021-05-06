#include<bits/stdc++.h>
using namespace std;
void topologicalSort(vector<int> adj[],int src,int visited[],stack<int> &s){

	visited[src]=1;

	for(auto it : adj[src]){
		if(visited[it]==0)
			topologicalSort(adj,it,visited,s);
	}

	s.push(src);
}
int main(){
	int V,E; cin>>V>>E;
	vector<int> adj[V];
	for(int i=0;i<E;i++){
		int u,v; cin>>u>>v;
		adj[u].push_back(v);
	}

	int visited[V] = {0};
	stack<int> s;
	for(int i=0;i<V;i++){
		if(visited[i]==0){
			topologicalSort(adj,i,visited,s);
		}
	}

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
}