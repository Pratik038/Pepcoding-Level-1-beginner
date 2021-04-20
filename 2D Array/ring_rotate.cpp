#include<bits/stdc++.h>
using namespace std;
const int MAX = 101;
void reverse(int v[],int i,int j){
	while(i<=j){
		swap(v[i],v[j]);
		i++;j--;
	}
}
void rotate(int v[],int r,int sz){
	r = r%sz;
	if( r < 0)
		r = r + sz;
	reverse(v,0,sz-r-1);
	reverse(v,sz-r,sz-1);
	reverse(v,0,sz-1);
}

int main(){
	int n,m; cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	}
	int s,r; cin>>s>>r;
	int idx=0;
    int top = s-1,left=s-1,bottom=n-s,right=m-s;
    int sz = 2*(bottom-top + right-left);
    int v[sz];
    for(int row = top;row<=bottom;row++)
        v[idx++] = a[row][left];
    left++;
    for(int col=left;col<=right;col++)
        v[idx++] = a[bottom][col];
    bottom--;
    for(int row=bottom;row>=top;row--)
        v[idx++] = a[row][right];
    right--;
    for(int col=right;col>=left;col--)
        v[idx++] = a[top][col];
    top++;

    rotate(v,r,sz);

    idx=0;
    top = s-1,left=s-1,bottom=n-s,right=m-s;
    for(int row = top;row<=bottom;row++)
        a[row][left] = v[idx++];
    left++;
    for(int col=left;col<=right;col++)
        a[bottom][col] = v[idx++];
    bottom--;
    for(int row=bottom;row>=top;row--)
        a[row][right] = v[idx++];
    right--;
    for(int col=right;col>=left;col--)
        a[top][col] = v[idx++];
    top++;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}