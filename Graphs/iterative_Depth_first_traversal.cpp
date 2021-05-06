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
	int visited[V] = {0};
	stack<pair<int,string>> s;
	s.push({src,to_string(src)+""});

	while(s.size() > 0){
		pair<int,string> rem = s.top();
		s.pop();
		if(visited[rem.first]==1)
			continue;
		visited[rem.first] = 1;

		cout<<rem.first<<"@"<<rem.second<<endl;

		for(auto it : adj[rem.first]){
			if(visited[it.first]==0)
				s.push({it.first,rem.second+to_string(it.first)});
		}
	}
	
}