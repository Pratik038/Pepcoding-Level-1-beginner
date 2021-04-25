#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    
    int prev0 = 1;
    int prev1 = 1;
    
    for(int i=2;i<=n;i++){
        int cur0 = prev1;
        int cur1 = prev1 + prev0;
        
        prev0 = cur0;
        prev1 = cur1;
    }
    cout<<prev0+prev1;
}