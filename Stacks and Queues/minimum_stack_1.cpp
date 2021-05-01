#include<bits/stdc++.h>
using namespace std;
class MinStack{
	stack<int> allData;
	stack<int> minData;
	public : 
		void push(int val);
		int top();
		int pop();
		int min();
		int size();
};
void MinStack :: push(int val){
	allData.push(val);
	if(minData.size() == 0 or minData.top() >= val){
		minData.push(val);
	}
}
int MinStack :: top(){
	return allData.top();
}
int MinStack :: pop(){
	int val = allData.top();
	allData.pop();
	if(val==minData.top())
		minData.pop();
	return val;
}
int MinStack :: size(){
	return allData.size();
}
int MinStack :: min(){
	return minData.top();
}
int main(){
    string s;
    MinStack st;
    while(cin>>s){
    	if(s=="push"){
    		int x; cin>>x;
    		st.push(x);
    	}else if(s=="min"){
    		if(st.min()!=-1)
    			cout<<st.min()<<endl;
    	}else if(s=="top"){
    		if(st.top()!=-1)
    			cout<<st.top()<<endl;
    	}else if(s=="pop"){
    		if(st.top()!=-1)
    			cout<<st.pop()<<endl;
    	}else if(s=="size"){
    		cout<<st.size()<<endl;
    	}else if(s=="quit"){
    		break;
    	}
    }
}