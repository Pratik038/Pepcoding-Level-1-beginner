#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    int a[n][k];
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>a[i][j];
        }
    }
    
    int dp[n][k];
    for(int i=0;i<k;i++){
        dp[0][i] = a[0][i];
    }
    
    for(int i=1;i<n;i++){
        for(int l=0;l<k;l++){
            int mn = INT_MAX;
            for(int j=0;j<k;j++){
                if(j!=l)
                    mn = min(mn,dp[i-1][j]);
            }
            dp[i][l] = a[i][l] + mn;
        }
    }
    
    int ans = INT_MAX;
    for(int i=0;i<k;i++){
        ans = min(ans,dp[n-1][i]);
    }
    cout<<ans;
}