#include<bits/stdc++.h>
using namespace std;
bool balancedBrackets(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' or s[i]=='{' or s[i]=='['){
            st.push(s[i]);
        }else if(s[i]==')'){
            if(st.size()==0 or st.top()!='(')
                return false;
            st.pop();
        }else if(s[i]=='}'){
            if(st.size()==0 or st.top()!='{')
                return false;
            st.pop();
        }else if(s[i]==']'){
            if(st.size()==0 or st.top()!='[')
                return false;
            st.pop();
        }else{
            
        }
    }
    if(st.size()==0)
        return true;
    else
        return false;
}
int main(){
    string s;
    getline(cin,s);
    
    if(balancedBrackets(s)==true)
        cout<<"true";
    else
        cout<<"false";
}