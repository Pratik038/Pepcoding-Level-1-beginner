#include<bits/stdc++.h>
using namespace std;
bool isCyclic(vector<pair<int,int>> adj[],int src,int visited[]){
	queue<int> q;
	q.push(src);

	while(q.size() > 0){
		int rem = q.front();
		q.pop();
		if(visited[rem]==1)
			return true;
		visited[rem] = 1;

		for(auto it : adj[rem]){
			if(visited[it.first]==0)
				q.push(it.first);
		}
	}

	return false;
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

    int visited[V]={0};

    for(int i=0;i<V;i++){
    	if(visited[i]==0){
    		bool cycle = isCyclic(adj,i,visited);
    		if(cycle==true){
    			cout<<"true";
    			return 0;
    		}
    	}
    }
    cout<<"false";
}