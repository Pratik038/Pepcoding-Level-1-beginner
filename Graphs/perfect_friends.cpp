#include<bits/stdc++.h>
using namespace std;

void DrawTree(vector<int> adj[],int src,vector<int> &comp,vector<int> &visited){
	
	comp.push_back(src);

	visited[src] = 1;

	for(auto nbr : adj[src]){
		if(!visited[nbr]){
			DrawTree(adj,nbr,comp,visited);
		}
	}

}
int main(){
	int V,E; cin>>V>>E;
	vector<int> adj[V];
	for(int i=0;i<E;i++){
		int u,v; cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<vector<int>> comps;
	int pairs=0;
	vector<int> visited(V,0);

	for(int i=0;i<V;i++){
		if(!visited[i]){
			vector<int> comp;
			DrawTree(adj,i,comp,visited);
			comps.push_back(comp);
		}
	}

	for(int i=0;i<comps.size();i++){
		for(int j=i+1;j<comps.size();j++){
			int count = comps[i].size()*comps[j].size();
			pairs += count;
		}
	}
	cout<<pairs;
}