#include<bits/stdc++.h>
using namespace std;

string spath,lpath,cpath,fpath;

int spathwt=INT_MAX,lpathwt=INT_MIN,cpathwt=INT_MAX,fpathwt=INT_MIN;

priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>> pq;

void MultiSolver(vector<pair<int,int>> adj[],int src,int dest,vector<int> &visited,string psf,int wsf,int creteria,int k){
	if(src==dest){
		if(wsf < spathwt){
			spath = psf;
			spathwt = wsf;
		}

		if(wsf > lpathwt){
			lpathwt = wsf;
			lpath = psf;
		}

		if(wsf > creteria and wsf < cpathwt){
			cpathwt = wsf;
			cpath = psf;
		}

		if(wsf < creteria and wsf > fpathwt){
			fpathwt = wsf;
			fpath = psf;
		}

		if(pq.size() < k){
			pq.push(make_pair(wsf,psf));
		}else{
			if(pq.top().first < wsf){
				pq.pop();
				pq.push(make_pair(wsf,psf));
			}
		}
		return;
	}	

	visited[src] = 1;
	for(auto it:adj[src]){
		if(!visited[it.first]){
			MultiSolver(adj,it.first,dest,visited,psf + to_string(it.first),wsf+it.second,creteria,k);
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
	int creteria,k; cin>>creteria>>k;
	vector<int> visited(V,0);
	MultiSolver(adj,src,dest,visited,to_string(src)+"",0,creteria,k);

	cout<<"Smallest Path = "<<spath<<"@"<<spathwt<<endl;
	cout<<"Largest Path = "<<lpath<<"@"<<lpathwt<<endl;
	cout<<"Just Larger Path than "<<creteria<<" = "<<cpath<<"@"<<cpathwt<<endl;
	cout<<"Just Smaller Path than "<<creteria<<" = "<<fpath<<"@"<<fpathwt<<endl;
	cout<<k<<"th largest path = "<<pq.top().second<<"@"<<pq.top().first;
}