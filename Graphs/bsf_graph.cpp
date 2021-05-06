#include<bits/stdc++.h>
using namespace std;

int main(){
	int V,E; cin>>V>>E;
	vector<pair<int,int>> adj[V];

	for(int i=0;i<E;i++){
		int u,v,wt; cin>>u>>v>>wt;
		adj[u].push_back({v,wt});
		adj[v].push_back({u,wt});
	}
	int src; cin>>src;
	queue<pair<int,string>> q;
	q.push({src,to_string(src)+""});
	int visited[V] = {0};
	while(q.size() > 0){
		int rem = q.front().first;
		string psf = q.front().second;
		q.pop();
		if(visited[rem])
			continue;
		visited[rem] = 1;
		cout<<rem<<"@"<<psf<<endl;

		for(auto it : adj[rem]){
			if(!visited[it.first]){
				q.push({it.first,psf+to_string(it.first)});
			}
		}
	}
}