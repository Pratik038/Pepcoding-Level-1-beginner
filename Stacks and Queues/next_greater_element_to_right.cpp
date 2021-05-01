#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int nge[n];
    nge[n-1] = -1;
    stack<int> s;
    s.push(a[n-1]);
    
    for(int i=n-2;i>=0;i--){
        while(s.size() > 0 and s.top() <= a[i])
            s.pop();
        
        if(s.size()==0)
            nge[i] = -1;
        else
            nge[i] = s.top();
        
        s.push(a[i]);
    }
    
    for(int i=0;i<n;i++)
        cout<<nge[i]<<endl;
}