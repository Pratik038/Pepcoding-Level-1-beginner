#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int amt; cin>>amt;
    
    int dp[amt+1]={0};
    dp[0]=1;
    for(int i=1;i<amt+1;i++){
        for(int j=0;j<n;j++){
            if(i-a[j] >= 0){
                dp[i] += dp[i-a[j]];
            }
        }
    }
    cout<<dp[amt];
}