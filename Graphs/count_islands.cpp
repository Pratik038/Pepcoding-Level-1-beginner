#include<bits/stdc++.h>
using namespace std;

void DrawTree(vector<vector<int>> a,int i,int j,int visited[][100],int m,int n){
	
	if(i<0 or j<0 or i>=m or j>=n or a[i][j]==1 or visited[i][j]==1)
		return;

	visited[i][j] = 1;
	DrawTree(a,i,j+1,visited,m,n);
	DrawTree(a,i+1,j,visited,m,n);
	DrawTree(a,i,j-1,visited,m,n);
	DrawTree(a,i-1,j,visited,m,n);

}
int main(){
	int m,n; cin>>m>>n;
	vector<vector<int>> a;
	for(int i=0;i<m;i++){
		vector<int> temp;
		for(int j=0;j<n;j++){
			int x; cin>>x;
			temp.push_back(x);
		}
		a.push_back(temp);
	}

	int count=0;
	int visited[100][100];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			visited[i][j] = 0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==0 and visited[i][j]==0){
				count++;
				DrawTree(a,i,j,visited,m,n);
			}
		}
	}
	cout<<count;
}