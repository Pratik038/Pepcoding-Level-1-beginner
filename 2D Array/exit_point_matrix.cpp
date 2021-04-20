#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    
    int i=0,j=0,dir=0;
    while(true){
        dir = (dir+a[i][j])%4;
        if(dir==0)
            j++;
        else if(dir==1)
            i++;
        else if(dir==2)
            j--;
        else
            i--;
        
        if(i<0){
            i++;
            break;
        }else if(i==n){
            i--;
            break;
        }else if(j<0){
            j++;
            break;
        }else if(j==m){
            j--;
            break;
        }
    }
    cout<<i<<endl<<j;
}