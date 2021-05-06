#include<bits/stdc++.h>
using namespace std;
bool isGraphBipartitite(vector<pair<int,int>> adj[],int src,int visited[]){
	queue<pair<int,int>> q;
	q.push({src,0});

	while(q.size() > 0){
		int rem = q.front().first;
		int level = q.front().second;
		q.pop();
		if(visited[rem]!=-1){
			if(visited[rem]!=level)
				return false;
		}
		else
			visited[rem] = level;

		for(auto it : adj[rem]){
			if(visited[it.first]==-1)
				q.push({it.first,level+1});
		}
	}

	return true;
}
int main()
{
    int V,E; cin>>V>>E;
    vector<pair<int,int>> adj[V];
    for(int i=0;i<E;i++){
    	int u,v,wt; cin>>u>>v>>wt;
    	adj[u].push_back({v,wt});
    	adj[v].push_back({u,wt});
    }

    int visited[V];
    for(int i=0;i<V;i++) visited[i] = -1;
    for(int i=0;i<V;i++){
    	if(visited[i]==-1){
    		bool bipartite = isGraphBipartitite(adj,i,visited);
    		if(bipartite==true){
    			cout<<"true";
    			return 0;
    		}
    	}
    }
    cout<<"false";
}