#include<bits/stdc++.h>
using namespace std;
bool hasPath(vector<pair<int,int>> adj[],int src,int dest,vector<int> &visited){
	if(src==dest)	
		return true;
	visited[src] = 1;
	for(auto it:adj[src]){
		if(!visited[it.first]){
			bool hasNbrPath = hasPath(adj,it.first,dest,visited);
			if(hasNbrPath == true)
				return true;
		}
	}

	return false;
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

	int src,dest; cin>>src>>dest;

	vector<int> visited(V,0);
	bool ishasPath = hasPath(adj,src,dest,visited);
	if(ishasPath == true)
		cout<<"true";
	else
		cout<<"false";
}