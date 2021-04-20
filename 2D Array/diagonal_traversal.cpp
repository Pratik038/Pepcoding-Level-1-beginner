#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	for(int j=0;j<n;j++){
		int i=0;
		int k=j;
		while(i<n and k<n){
			cout<<a[i][k]<<endl;
			i++;
			k++;
		}
	}
}