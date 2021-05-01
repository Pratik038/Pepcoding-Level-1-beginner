#include<bits/stdc++.h>
using namespace std;
#define SIZE 100
class stk{
	int data[SIZE];
	int tos;
	int cap;
	public : 
		void push(int val);
		int top();
		int pop();
		void display();
		int size();
		stk(int cap){
			tos = -1;
			this->cap = cap;
		}
};
void stk :: push(int val){
	if(tos == cap-1)
		cap = 2*cap;
	
	tos++;
	data[tos] = val;
}
int stk :: top(){
	if(tos==-1){
		cout<<"Stack underflow"<<endl;
		return -1;
	}else{
		return data[tos];
	}
}
int stk :: pop(){
	if(tos==-1){
		cout<<"Stack underflow"<<endl;
		return -1;
	}else{
		int val = data[tos];
		tos--;
		return val;
	}
}
int stk :: size(){
	return tos+1;
}
void stk :: display(){
	for(int i=tos;i>=0;i--)
		cout<<data[i]<<" ";
	cout<<endl;
}
int main(){
    int cap; cin>>cap;
    string s;
    stk stack(cap);
    while(cin>>s){
    	if(s=="push"){
    		int x; cin>>x;
    		stack.push(x);
    	}else if(s=="display"){
    		stack.display();
    	}else if(s=="top"){
    		if(stack.top()!=-1)
    			cout<<stack.top()<<endl;
    	}else if(s=="pop"){
    		if(stack.top()!=-1)
    			cout<<stack.pop()<<endl;
    	}else if(s=="size"){
    		cout<<stack.size()<<endl;
    	}else if(s=="quit"){
    		break;
    	}
    }
}