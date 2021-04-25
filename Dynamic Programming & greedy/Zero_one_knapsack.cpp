#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int val[n];
    for(int i=0;i<n;i++) cin>>val[i];
    int wt[n];
    for(int i=0;i<n;i++) cin>>wt[i];
    int cap; cin>>cap;
    
    int dp[n+1][cap+1];
    memset(dp,0,sizeof(dp));
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=cap;j++){
            if( j >= wt[i-1]){
                int rCap = j-wt[i-1];
                
                if(dp[i-1][rCap] + val[i-1] > dp[i-1][j]){
                    dp[i][j] = dp[i-1][rCap] + val[i-1];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<dp[n][cap];
}