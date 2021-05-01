#include<bits/stdc++.h>
using namespace std;
bool duplicateBracket(string str){
    stack<char> s;
    for(int i=0;i<str.length();i++){
        if(str[i]==')'){
            if(s.top()=='('){
                return true;
            }else{
                while(s.top()!='('){
                    s.pop();
                }
                s.pop();
            }
        }else{
            s.push(str[i]);
        }
    }
    return false;
}
int main(){
    string str;
    getline(cin,str);
    if(duplicateBracket(str)==true)
        cout<<"true";
    else
        cout<<"false";
}