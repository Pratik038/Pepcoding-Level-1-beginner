#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int rb[n],lb[n];
    rb[n-1]=n;
    stack<int> s;
    s.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(s.size() > 0 and a[s.top()] >= a[i])
            s.pop();
        
        if(s.size()==0)
            rb[i] = n;
        else
            rb[i] = s.top();
        s.push(i);
    }
    stack<int> st;
    lb[0] = -1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size() > 0 and a[st.top()] >= a[i])
            st.pop();
        if(st.size()==0)
            lb[i] = -1;
        else
            lb[i] = st.top();
        st.push(i);
    }
    
    int maxArea = 0;
    for(int i=0;i<n;i++){
        int width = rb[i]-lb[i]-1;
        int area = width*a[i];
        maxArea = max(maxArea,area);
    }
    cout<<maxArea;
}