#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int minPrice = INT_MAX;
    int maxProfit = 0;
    for(int i=0;i<n;i++){
        minPrice = min(minPrice,a[i]);
        maxProfit = max(maxProfit,a[i]-minPrice);
    }
    cout<<maxProfit;
}