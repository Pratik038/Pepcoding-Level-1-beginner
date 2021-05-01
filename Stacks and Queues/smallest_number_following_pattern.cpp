#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int k=1;
    stack<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='d'){
            st.push(k++);
        }else if(s[i]=='i'){
            st.push(k++);
            while(st.size() > 0){
                cout<<st.top();
                st.pop();
            }
        }
    }
    st.push(k);
    while(st.size() > 0){
        cout<<st.top();
        st.pop();
    }
}