#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
    	cin>>s[i];
    }

    stack<int> st;
    for(int i=0;i<n;i++) st.push(i);

    while(st.size() >= 2){
    	int i = st.top(); st.pop();
    	int j = st.top(); st.pop();

    	if(s[i][j] == '1'){
    		st.push(j);
    	}else{
    		st.push(i);
    	}
    }

    int pot = st.top();
    int f = 1;
    for(int i=0;i<n;i++){
    	if(i!=pot){
    		if(s[i][pot]=='0' or s[pot][i]=='1'){
    			cout<<"none";
    			f=0;
    			break;
    		}
    	}
    }
    if(f)
    	cout<<pot;
} 