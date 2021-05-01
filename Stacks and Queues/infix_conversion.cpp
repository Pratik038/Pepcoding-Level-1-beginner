#include<bits/stdc++.h>
using namespace std;
int prec(char op){
	if(op=='+' or op=='-')
		return 1;
	else if(op=='*' or op=='/')
		return 2;
	else 
		return 0;
}
int main(){
    string s; cin>>s;
    stack<string> postfix;
    stack<string> prefix;
    stack<char> ops;

    for(int i=0;i<s.length();i++){
    	if(s[i]=='('){
    		ops.push(s[i]);
    	}else if((s[i]>='0' and s[i]<='9') or (s[i]>='a' and s[i]<='z')
    			or	(s[i]>='A' and s[i]<='Z')){
    		string str="";
    		str.push_back(s[i]);
    		postfix.push(str);
    		prefix.push(str);
    	}else if(s[i]==')'){
    		while(ops.top()!='('){
    			char op = ops.top(); ops.pop();

    			string prev2 = prefix.top(); prefix.pop();
    			string prev1 = prefix.top(); prefix.pop();
    			string pre="";
    			pre.push_back(op);
    			pre = pre + prev1 + prev2;
    			prefix.push(pre);

				string postv2 = postfix.top(); postfix.pop();
    			string postv1 = postfix.top(); postfix.pop();
    			string post = postv1 + postv2;
    			post.push_back(op);
    			postfix.push(post);    			
    		}

    		ops.pop();
    	}else if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
    		while(ops.size() > 0 and ops.top()!='(' and prec(s[i]) <= prec(ops.top())){
    			char op = ops.top(); ops.pop();

    			
    			string prev2 = prefix.top(); prefix.pop();
    			string prev1 = prefix.top(); prefix.pop();
    			string pre="";
    			pre.push_back(op);
    			pre = pre + prev1 + prev2;
    			prefix.push(pre);

				string postv2 = postfix.top(); postfix.pop();
    			string postv1 = postfix.top(); postfix.pop();
    			string post = postv1 + postv2;
    			post.push_back(op);
    			postfix.push(post);    	    			
    		}

    		ops.push(s[i]);
    	}
    	else{

    	}
    }

    while(ops.size() > 0){
		char op = ops.top(); ops.pop();

		
    			string prev2 = prefix.top(); prefix.pop();
    			string prev1 = prefix.top(); prefix.pop();
    			string pre="";
    			pre.push_back(op);
    			pre = pre + prev1 + prev2;
    			prefix.push(pre);

				string postv2 = postfix.top(); postfix.pop();
    			string postv1 = postfix.top(); postfix.pop();
    			string post = postv1 + postv2;
    			post.push_back(op);
    			postfix.push(post);    			
	}

	cout<<postfix.top()<<endl<<prefix.top();
} 