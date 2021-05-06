#include<bits/stdc++.h>
using namespace std;
void hamiltonianPaths(vector<pair<int,int>> adj[],int src,unordered_set<int> &visited,string psf ,int osrc,int V){
	if(visited.size() == V-1){
		cout<<psf;
		bool isCycle = false;
		for(auto it:adj[src]){
			if(it.first == osrc){
				isCycle = true;
				break;
			}
		}
		if(isCycle)
			cout<<"*";
		else
			cout<<".";
		cout<<endl;
	}
	visited.insert(src);
	for(auto it : adj[src]){
		if(visited.find(it.first)==visited.end()){
			hamiltonianPaths(adj,it.first,visited,psf+to_string(it.first),osrc,V);
		}
	}
	visited.erase(visited.find(src));
}

int main(){
	int V,E; cin>>V>>E;
	vector<pair<int,int>> adj[V];
	for(int i=0;i<E;i++){
		int u,v,wt; cin>>u>>v>>wt;
		adj[u].push_back({v,wt});
		adj[v].push_back({u,wt});
	}

	unordered_set<int> visited;
	int src; cin>>src;
	hamiltonianPaths(adj,src,visited,to_string(src)+"",src,V);
	
}