#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    ll same = k;
    ll diff = k*(k-1);
    ll total = same + diff;
    
    for(int i=3;i<=n;i++){
        same = diff;
        diff = total * (k-1);
        total = same + diff;
    }
    
    cout<<total;
}