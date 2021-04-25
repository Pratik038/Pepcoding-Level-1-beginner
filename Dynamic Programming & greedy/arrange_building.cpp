#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin>>n;
    
    long long prevS = 1;
    long long prevB = 1;
    
    for(long long i=2;i<=n;i++){
        long long curS = prevB;
        long long curB = prevS + prevB;
        
        prevB = curB;
        prevS = curS;
    }
    long long total = prevB + prevS;
    
    cout<<total*total;
}