#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	int ans = -1;
	for(int i=0;i<n;i++){
		int minR=a[i][0];
		int k = 0;
		for(int j=0;j<n;j++){
			if(a[i][j]<minR){
				minR = a[i][j];
				k=j;
			}
		}
		int maxC = a[0][k];
		for(int j=0;j<n;j++){
			if(a[j][k]>maxC)
				maxC = a[j][k];
		}
		if(maxC == minR){
			ans = maxC;
			break;
		}
	}
	if(ans==-1)
		cout<<"Invalid input";
	else
		cout<<ans;
}