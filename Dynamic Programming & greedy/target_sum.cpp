#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int tar; cin>>tar;
    
    int dp[n+1][tar+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=tar;j++){
            if(i==0 and j==0)
                dp[i][j] = 1;
            else if(i==0)
                dp[i][j] = 0;
            else if(j==0)
                dp[i][j] = 1;
            else{
                int val = a[i-1];
                if(dp[i-1][j]==1){
                    dp[i][j] = 1;
                }else{
                    if( j >= val){
                        if(dp[i-1][j-val]==1)
                            dp[i][j] = 1;
                    }
                }
            }
        }
    }
    if(dp[n][tar])
        cout<<"true";
    else
        cout<<"false";
}