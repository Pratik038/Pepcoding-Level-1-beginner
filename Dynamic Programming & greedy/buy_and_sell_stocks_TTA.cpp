#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int buy1,buy2,profit1,profit2;
    buy1=buy2=INT_MAX;
    profit1=profit2=0;
    for(int i=0;i<n;i++){
        buy1 = min(buy1,a[i]);
        profit1 = max(profit1,a[i]-buy1);
        buy2 = min(buy2,a[i]-profit1);
        profit2 = max(profit2,a[i]-buy2);
    }
    cout<<profit2;
}