#include<bits/stdc++.h>
using namespace std;

void DrawTree(vector<pair<int,int>> adj[],int src,vector<int> &comp,vector<int> &visited){
	comp.push_back(src);

	visited[src] = 1;
	for(auto it:adj[src]){
		if(!visited[it.first]){
			DrawTree(adj,it.first,comp,visited);
		}
	}

}
int main(){
	int V,E; cin>>V>>E;
	vector<pair<int,int>> adj[V];
	for(int i=0;i<E;i++){
		int u,v,wt;
		cin>>u>>v>>wt;
		adj[u].push_back({v,wt});
		adj[v].push_back({u,wt});
	}

	vector<vector<int>> comps;
	vector<int> visited(V,0);
	for(int i=0;i<V;i++){
		if(!visited[i]){
			vector<int> comp;
			DrawTree(adj,i,comp,visited);
			comps.push_back(comp);
		}
	}
	if(comps.size()==1)
	    cout<<"true";
	 else
	    cout<<"false";
}