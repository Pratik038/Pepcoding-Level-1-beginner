#include<bits/stdc++.h>
using namespace std;
#define SIZE 10000
class TwoStack{
	int data[SIZE];
	int tos1;
	int tos2;
	int cap;
public:
	TwoStack(int cap){
		this->cap = cap;
		tos1 = -1;
		tos2 = cap;
	}
	void push1(int val);
	int pop1();
	int top1();
	int size1();
	void push2(int val);
	int pop2();
	int top2();
	int size2();
};
int TwoStack :: size1(){
	return tos1+1;
}
int TwoStack :: size2(){
	return cap-tos2;
}
void TwoStack :: push1(int val){
	if(tos1 + 1 == tos2){
		cout<<"Stack overflow"<<endl;
	}else{
		tos1++;
		data[tos1] = val;
	}
}
void TwoStack :: push2(int val){
	if(tos1 + 1 == tos2){
		cout<<"Stack overflow"<<endl;
	}else{
		tos2--;
		data[tos2] = val;
	}
}
int TwoStack :: top1(){
	if(size1()==0){
		cout<<"Stack underflow"<<endl;
		return -1;
	}else{
		int val = data[tos1];
		return val;
	}
}
int TwoStack :: top2(){
	if(size2()==0){
		cout<<"Stack underflow"<<endl;
		return -1;
	}else{
		int val = data[tos2];
		return val;
	}
}
int TwoStack :: pop1(){
	if(size1()==0){
		cout<<"Stack underflow"<<endl;
		return -1;
	}else{
		int val = data[tos1];
		tos1--;
		return val;
	}
}
int TwoStack :: pop2(){
	if(size2()==0){
		cout<<"Stack underflow"<<endl;
		return -1;
	}else{
		int val = data[tos2];
		tos2++;
		return val;
	}
}
int main(){
	int cap; cin>>cap;
	string s;
	TwoStack stack(cap);
	while(cin>>s){
		if(s=="push1"){
			int x; cin>>x;
			stack.push1(x);
		}else if(s=="push2"){
			int x; cin>>x;
			stack.push2(x);
		}else if(s=="top1"){
			int val = stack.top1();
			if(val!=-1)
				cout<<val<<endl;
		}else if(s=="top2"){
			int val = stack.top2();
			if(val!=-1)
				cout<<val<<endl;
		}else if(s=="size1"){
			cout<<stack.size1()<<endl;
		}else if(s=="size2"){
			cout<<stack.size2()<<endl;
		}else if(s=="pop1"){
			int val = stack.pop1();
			if(val!=-1)
				cout<<val<<endl;
		}else if(s=="pop2"){
			int val = stack.pop2();
			if(val!=-1)
				cout<<val<<endl;
		}else if(s=="quit"){
			break;
		}
	}
}