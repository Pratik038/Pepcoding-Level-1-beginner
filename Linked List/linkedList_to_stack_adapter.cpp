#include<bits/stdc++.h>
using namespace std;
class LLtoStack{
	list<int> ll;
public:
	int size(){
		return ll.size();
	}
	void push(int val){
		ll.push_front(val);
	}
	int pop(){
		if(size() == 0){
			cout<<"Stack underflow"<<endl;
			return -1;
		}
		int temp = ll.front();
		ll.pop_front();
		return temp;
	}
	int top(){
		if(size() == 0){
			cout<<"Stack underflow"<<endl;
			return -1;
		}
		int temp = ll.front();
		return temp;
	}
};
int main(){
	LLtoStack st;
	string s;
	while(cin>>s){
		if(s=="push"){
			int x; cin>>x;
			st.push(x);
		}else if(s=="quit")
			break;
		 else if(s=="top"){
		 	int val = st.top();
		 	if(val!=-1)
		 		cout<<val<<endl;
		 }else if(s=="pop"){
		 	int val = st.pop();
		 	if(val!=-1)
		 		cout<<val<<endl;
		 }else if(s=="size"){
		 	cout<<st.size()<<endl;
		 }
	}
}