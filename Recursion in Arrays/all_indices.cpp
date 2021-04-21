#include<bits/stdc++.h>
using namespace std;
void print(int a[],int idx,int x,int n){
	if(idx==n)
		return;
	if(a[idx]==x)
		cout<<idx<<endl;
	print(a,idx+1,x,n);
}
int main()
{	
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int x; cin>>x;
	print(a,0,x,n);
}