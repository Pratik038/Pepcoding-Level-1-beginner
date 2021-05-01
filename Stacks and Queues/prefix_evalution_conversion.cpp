#include<bits/stdc++.h>
using namespace std;
int operation(int v1,int v2,char op){
	if(op=='+')
		return v1+v2;
	else if(op=='-')
		return v1-v2;
	else if(op=='*')
		return v1*v2;
	else if(op=='/')
		return v1/v2;
}
int main(){
    string s; cin>>s;
    stack<int> value;
    stack<string> infix;
    stack<string> postfix;

    for(int i=s.length()-1;i>=0;i--){
    	if(s[i]>='0' and s[i]<='9'){
    		value.push(s[i]-'0');
    		string str=""; str.push_back(s[i]);
    		infix.push(str);
    		postfix.push(str);
    	}else if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
    		int v1 = value.top(); value.pop();
    		int v2 = value.top(); value.pop();
    		value.push(operation(v1,v2,s[i]));

    		string inv1 = infix.top(); infix.pop();
    		string inv2 = infix.top(); infix.pop();
    		string str = ""; str.push_back(s[i]);
    		infix.push("(" + inv1 + str + inv2 + ")");

    		string postv1 = postfix.top(); postfix.pop();
    		string postv2 = postfix.top(); postfix.pop();
    		postfix.push(postv1 + postv2 + str);
    	}
    }
    
    cout<<value.top()<<endl<<infix.top()<<endl<<postfix.top();
} 