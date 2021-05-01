#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int k; cin>>k;
    stack<int> s;
    s.push(n-1);
    int nge[n];
    nge[n-1] = n;
    
    for(int i=n-2;i>=0;i--){
        
        while(s.size() > 0 and a[s.top()] <= a[i])
            s.pop();
        if(s.size()==0)
            nge[i] = n;
        else
            nge[i] = s.top();
        s.push(i);
    }
    
    int j=0;
    for(int i=0;i<=n-k;i++){
        if( j < i)
            j = i;
        while(nge[j] < i+k)
            j = nge[j];

        cout<<a[j]<<endl;
    }
}