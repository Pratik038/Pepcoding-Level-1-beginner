#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int k; cin>>k;
    int dp[k+1][n];
    for(int i=0;i<=k;i++){
        int mx = INT_MIN;
        for(int j=0;j<n;j++){
            if(i==0 or j==0) dp[i][j] = 0;
            else{
                mx = max(dp[i-1][j-1]-a[j-1],mx);
                
                dp[i][j] = max(dp[i][j-1],mx+a[j]);
            }
        }
    }
    cout<<dp[k][n-1];
}