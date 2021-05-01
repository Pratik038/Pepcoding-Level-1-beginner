#include<bits/stdc++.h>
using namespace std;
int precedence(char op){
    if(op=='+' or op=='-')
        return 1;
    if(op=='*' or op=='/')
        return 2;
}
int operation(int v1,int v2,char op){
    if(op=='+'){
        return v1+v2;
    }else if(op=='-'){
        return v1-v2;
    }else if(op=='*'){
        return v1*v2;
    }else if(op=='/'){
        return v1/v2;
    }
}
int main(){
    string s; 
    getline(cin,s);
    stack<int> oprands;
    stack<char> optors;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            optors.push(s[i]);
        }else if(s[i]>='0' and s[i]<='9'){
            oprands.push(s[i]-'0');
        }else if(s[i]==')'){
            while(optors.top()!='('){
                char op = optors.top();
                optors.pop();
                int v2 = oprands.top();
                oprands.pop();
                int v1 = oprands.top();
                oprands.pop();
                oprands.push(operation(v1,v2,op));
            }
            optors.pop();
        }else if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
            while(optors.size() > 0 and optors.top()!='(' and precedence(s[i]) <= precedence(optors.top())){
                char op = optors.top();
                optors.pop();
                int v2 = oprands.top();
                oprands.pop();
                int v1 = oprands.top();
                oprands.pop();
                oprands.push(operation(v1,v2,op));
            }
            
            optors.push(s[i]);
        }
    }
    while(optors.size() > 0){
        char op = optors.top();
        optors.pop();
        int v2 = oprands.top();
        oprands.pop();
        int v1 = oprands.top();
        oprands.pop();
        oprands.push(operation(v1,v2,op));
    }
                
    cout<<oprands.top();
            
}