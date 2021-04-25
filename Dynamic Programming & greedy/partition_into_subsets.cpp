#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k; cin>>n>>k;
    
    if(n==0 or k==0 or n < k){
        cout<<0;
        return 0;
    }
    
    long long dp[k+1][n+1]={0};
    for(int i=0;i<=k;i++){
        for(int j=0;j<=n;j++){
            if(i==0 or j==0) dp[i][j] = 0;
            else if(j < i){
                dp[i][j] = 0;
            }else if(j == i){
                dp[i][j] = 1;
            }else{
                dp[i][j] = i*dp[i][j-1] + dp[i-1][j-1];
            }
        }
    }
    cout<<dp[k][n];
    return 0;
}