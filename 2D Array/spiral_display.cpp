#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int dir=0;
    int top=0,bottom=n-1,left=0,right=m-1;
    while(left <= right and top <= bottom){
        if(dir==0){
            for(int row = top;row<=bottom;row++)
                cout<<a[row][left]<<endl;
            left++;
        }else if(dir==1){
            for(int col=left;col<=right;col++)
                cout<<a[bottom][col]<<endl;
            bottom--;
        }else if(dir==2){
            for(int row=bottom;row>=top;row--)
                cout<<a[row][right]<<endl;
            right--;
        }else{
            for(int col=right;col>=left;col--)
                cout<<a[top][col]<<endl;
            top++;
        }
        dir = (dir+1)%4;
    }
}