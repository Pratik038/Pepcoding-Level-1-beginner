#include<bits/stdc++.h>
using namespace std;
class MinStack{
	stack<int> Data;
	int minData;
	public : 
		void push(int val);
		int top();
		int pop();
		int min();
		int size();
};
void MinStack :: push(int val){
	if(Data.size()==0){
		Data.push(val);
		minData = val;
	}else if(val >= minData){
		Data.push(val);
	}
	else{
		Data.push(val + val -minData);
		minData = val;
	}
}
int MinStack :: top(){
	if(Data.top() < minData){
		return minData;
	}
	else
		return Data.top();
}
int MinStack :: pop(){
	if(Data.top() < minData){
		int mn = minData;
		minData = 2*minData - Data.top();
		Data.pop();
		return mn;
	}
	else{
		int x = Data.top();
		Data.pop();
		return x;
	}
}
int MinStack :: size(){
	return Data.size();
}
int MinStack :: min(){
	return minData;
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