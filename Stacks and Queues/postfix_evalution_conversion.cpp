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
    stack<string> prefix;

    for(int i=0;i<s.length();i++){
    	if(s[i]>='0' and s[i]<='9'){
    		value.push(s[i]-'0');
    		string str=""; str.push_back(s[i]);
    		infix.push(str);
    		prefix.push(str);
    	}else if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
    		int v2 = value.top(); value.pop();
    		int v1 = value.top(); value.pop();
    		value.push(operation(v1,v2,s[i]));

    		string inv2 = infix.top(); infix.pop();
    		string inv1 = infix.top(); infix.pop();
    		string str = ""; str.push_back(s[i]);
    		infix.push("(" + inv1 + str + inv2 + ")");

    		string prev2 = prefix.top(); prefix.pop();
    		string prev1 = prefix.top(); prefix.pop();
    		prefix.push(str + prev1 + prev2);
    	}
    }
    
    cout<<value.top()<<endl<<infix.top()<<endl<<prefix.top();
} 