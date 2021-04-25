#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int vals[n];
    for(int i=0;i<n;i++) cin>>vals[i];
    int wt[n];
    for(int i=0;i<n;i++) cin>>wt[i];
    
    int cap; cin>>cap;
    
    int dp[cap+1]={0};
    
    for(int i=0;i<n;i++){
        for(int j=1;j<=cap;j++){
            if(wt[i] <= j){
                dp[j] = max(dp[j-wt[i]]+vals[i],dp[j]);
            }
        }
    }
    cout<<dp[cap];
}