#include<bits/stdc++.h>
using namespace std;
class Pair{
public:
	int v;
	int av;
	int wt;
	Pair(int v,int av,int wt){
			this->v = v;
			this->av = av;
			this->wt = wt;
		}
};

struct compare{
	bool operator()(Pair a,Pair b){
		return a.wt > b.wt;
	}
};
int main(){
	int V,E; cin>>V>>E;
	vector<pair<int,int>> adj[V];
	for(int i=0;i<E;i++){
		int u,v,wt; cin>>u>>v>>wt;
		adj[u].push_back({v,wt});
		adj[v].push_back({u,wt});
	}

	int visited[V] = {0};

	priority_queue<Pair,vector<Pair>,compare> q;
	q.push(Pair(0,-1,0));
	
	while(q.size() > 0){

		Pair rem = q.top();
		q.pop();
		if(visited[rem.v] == 1)
			continue;
		visited[rem.v] = 1;
		if(rem.av != -1)
			cout<<"["<<rem.v<<"-"<<rem.av<<"@"<<rem.wt<<"]"<<endl;

		for(auto it : adj[rem.v]){
			if(visited[it.first] == 0){
				q.push({Pair(it.first,rem.v,it.second)});
			}
		}
	}
}