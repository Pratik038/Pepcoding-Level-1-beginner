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

	int src,time; cin>>src>>time;

	int visited[V] = {0};

	queue<pair<int,int>> q;
	q.push({src,1});
	int count=0;
	while(q.size() > 0){

		int rem = q.front().first;
		int level = q.front().second;
		q.pop();
		if(visited[rem] > 0)
			continue;
		if(level > time)
			break;
		count++;
		visited[rem] = level;

		for(auto it : adj[rem]){
			if(visited[it.first] == 0){
				q.push({it.first,level+1});
			}
		}
	}

	cout<<count;
}