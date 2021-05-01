#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int span[n];
    span[0]=1;
    stack<int> s;
    s.push(0);
    for(int i=1;i<n;i++){
        while(s.size() > 0 and a[s.top()] < a[i])
            s.pop();
            
        if(s.size()==0)
            span[i] = i+1;
        else
            span[i] = i-s.top();
            
        s.push(i);
    }
    for(int i=0;i<n;i++)
        cout<<span[i]<<endl;
}