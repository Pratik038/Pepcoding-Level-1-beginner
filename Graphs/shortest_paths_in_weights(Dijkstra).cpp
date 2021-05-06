#include<bits/stdc++.h>
using namespace std;
class Pair{
public:
	int v;
	string psf;
	int wsf;
	Pair(int v,string psf,int wsf){
			this->v = v;
			this->psf = psf;
			this->wsf = wsf;
		}
};

struct compare{
	bool operator()(Pair a,Pair b){
		if(a.wsf == b.wsf){
			if(a.v == b.v)
				return a.psf.size() < b.psf.size();
		}
		return a.wsf > b.wsf;
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

	int src; cin>>src;

	int visited[V] = {0};

	priority_queue<Pair,vector<Pair>,compare> q;
	q.push(Pair(src,to_string(src)+"",0));
	
	while(q.size() > 0){

		Pair rem = q.top();
		q.pop();
		if(visited[rem.v] == 1)
			continue;

		visited[rem.v] = 1;

		cout<<rem.v<<" via "<<rem.psf<<" @ "<<rem.wsf<<endl;

		for(auto it : adj[rem.v]){
			if(visited[it.first] == 0){
				q.push({Pair(it.first,rem.psf + to_string(it.first),rem.wsf+it.second)});
			}
		}
	}
}