#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int dp[n+1];
    for(int i=0;i<=n;i++) dp[i] = INT_MAX;
    dp[n]=0;
    for(int i=n-1;i>=0;i--){
        int mn = INT_MAX;
        for(int j=1;j<=a[i] && i+j < n+1;j++){
            mn = min(mn,dp[i+j]);
        }
        if(mn!=INT_MAX)
            dp[i] = mn+1;
        else
            dp[i] = mn;
    }
    if(dp[0]==INT_MAX)
        cout<<"null";
    else
        cout<<dp[0];
}