#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int buy = -a[0];
    int sell = 0;
    int cooldown = 0;
    
    for(int i=1;i<n;i++){
        int nbuy = max(buy,cooldown-a[i]);
        int nsell = max(sell,a[i]+buy);
        int ncooldown = max(cooldown,sell);
        
        buy = nbuy;
        sell = nsell;
        cooldown = ncooldown;
    }
    
    cout<<sell;
}