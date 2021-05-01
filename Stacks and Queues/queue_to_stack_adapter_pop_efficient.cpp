#include<bits/stdc++.h>
using namespace std;

class Adapter{
	queue<int> mainQ;
	queue<int> helper;
public:

	void push(int val);
	int pop();
	int top();
	int size();
};
int Adapter :: size(){
	return mainQ.size();
}
void Adapter :: push(int val){
	
	while(mainQ.size() > 0){
		helper.push(mainQ.front());
		mainQ.pop();
	}
	mainQ.push(val);

	while(helper.size() > 0){
		mainQ.push(helper.front());
		helper.pop();
	}
}

int Adapter :: top(){
	if(mainQ.size()==0){
		cout<<"Stack underflow"<<endl;
		return -1;
	}else{
		return mainQ.front();
	}
}
int Adapter :: pop(){
	if(mainQ.size()==0){
		cout<<"Stack underflow"<<endl;
		return -1;
	}else{
		int val = mainQ.front();
		mainQ.pop();
		return val;
	}
}
int main(){
	string s;
	Adapter QtoS;
	while(cin>>s){
		if(s=="push"){
			int x; cin>>x;
			QtoS.push(x);
		}else if(s=="pop"){
			int val = QtoS.pop();
			if(val!=-1)
				cout<<val<<endl;
		}else if(s=="top"){
			int val = QtoS.top();
			if(val!=-1)
				cout<<val<<endl;
		}else if(s=="size"){
			cout<<QtoS.size()<<endl;
		}else if(s=="quit"){
			break;
		}
	}
}