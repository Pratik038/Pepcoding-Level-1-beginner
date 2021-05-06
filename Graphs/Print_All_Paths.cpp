#include<bits/stdc++.h>
using namespace std;
void PrintAllPaths(vector<pair<int,int>> adj[],int src,int dest,vector<int> &visited,string psf){
	if(src==dest){
		cout<<psf<<endl;
		return;
	}	

	visited[src] = 1;
	for(auto it:adj[src]){
		if(!visited[it.first]){
			PrintAllPaths(adj,it.first,dest,visited,psf + to_string(it.first));
		}
	}

	visited[src] = 0;
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
	PrintAllPaths(adj,src,dest,visited,to_string(src)+"");
}