#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int fee; cin>>fee;
    
    int buy = -a[0];
    int sell = 0;
    for(int i=0;i<n;i++){
        int nbuy = max(sell-a[i],buy);
        int nsell = max(a[i]-fee+buy,sell);
        
        sell = nsell;
        buy = nbuy;
    }
    cout<<sell;
}