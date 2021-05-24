#include<bits/stdc++.h>
using namespace std;
class LLtoStack{
	list<int> ll;
public:
	int size(){
		return ll.size();
	}
	void add(int val){
		ll.push_back(val);
	}
	int remove(){
		if(size() == 0){
			cout<<"Queue underflow"<<endl;
			return -1;
		}
		int temp = ll.front();
		ll.pop_front();
		return temp;
	}
	int peek(){
		if(size() == 0){
			cout<<"Queue underflow"<<endl;
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
		if(s=="add"){
			int x; cin>>x;
			st.add(x);
		}else if(s=="quit")
			break;
		 else if(s=="peek"){
		 	int val = st.peek();
		 	if(val!=-1)
		 		cout<<val<<endl;
		 }else if(s=="remove"){
		 	int val = st.remove();
		 	if(val!=-1)
		 		cout<<val<<endl;
		 }else if(s=="size"){
		 	cout<<st.size()<<endl;
		 }
	}
}