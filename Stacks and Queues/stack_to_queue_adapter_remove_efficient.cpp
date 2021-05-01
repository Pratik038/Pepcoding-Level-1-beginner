#include<bits/stdc++.h>
using namespace std;

class Adapter{
	stack<int> mainS;
	stack<int> helper;
public:

	void add(int val);
	int remove();
	int peek();
	int size();
};
int Adapter :: size(){
	return mainS.size();
}
void Adapter :: add(int val){
	while(mainS.size() > 0){
		helper.push(mainS.top());
		mainS.pop();
	}
	mainS.push(val);

	while(helper.size() > 0){
		mainS.push(helper.top());
		helper.pop();
	}
}

int Adapter :: peek(){
	if(mainS.size()==0){
		cout<<"Queue underflow"<<endl;
		return -1;
	}else
		return mainS.top();
}
int Adapter :: remove(){
	if(mainS.size()==0){
		cout<<"Queue underflow"<<endl;
		return -1;
	}else{
		int val = mainS.top();
		mainS.pop();
		return val;
	}
}
int main(){
	string s;
	Adapter StoQ;
	while(cin>>s){
		if(s=="add"){
			int x; cin>>x;
			StoQ.add(x);
		}else if(s=="remove"){
			int val = StoQ.remove();
			if(val!=-1)
				cout<<val<<endl;
		}else if(s=="peek"){
			int val = StoQ.peek();
			if(val!=-1)
				cout<<val<<endl;
		}else if(s=="size"){
			cout<<StoQ.size()<<endl;
		}else if(s=="quit"){
			break;
		}
	}
}