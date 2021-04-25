#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n,m; cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    
    int dp[n][m];
    for(int j=m-1;j>=0;j--){
        for(int i=n-1;i>=0;i--){
            if(j==m-1){
                dp[i][j] = a[i][j];
            }else if(i==0){
                dp[i][j] = max(dp[i][j+1],dp[i+1][j+1]) + a[i][j];
            }else if(i==n-1){
                dp[i][j] = max(dp[i][j+1],dp[i-1][j+1]) + a[i][j];
            }else{
                dp[i][j] = max(dp[i][j+1],max(dp[i-1][j+1],dp[i+1][j+1])) + a[i][j];
            }
        }
    }
    int mx = dp[0][0];
    for(int i=1;i<n;i++){
        if(dp[i][0] > mx)
            mx = dp[i][0];
    }
    cout<<mx;
}