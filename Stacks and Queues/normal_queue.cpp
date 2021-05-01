#include<bits/stdc++.h>
using namespace std;
#define SIZE 100000
class que{
	int data[SIZE];
	int front;
	int cap;
	int size;
public:
	que(int cap){
		this->cap = cap;
		front = 0;
		size = 0;
	}
	void add(int val);
	void display();
	int remove();
	int peek();
	int sz();
};
int que :: sz(){
	return size;
}
void que :: add(int val){
	if(size == cap){
		cout<<"Queue overflow"<<endl;
	}else{
		int rear = (front + size)%cap;
		data[rear] = val;
		size++;
	}
}
void que :: display(){
	for(int i=0;i<size;i++){
		int idx = (front + i)%cap;
		cout<<data[idx]<<" ";
	}
	cout<<endl;
}
int que :: peek(){
	if(size==0){
		cout<<"Queue underflow"<<endl;
		return -1;
	}else{
		return data[front];
	}
}
int que :: remove(){
	if(size==0){
		cout<<"Queue underflow"<<endl;
		return -1;
	}else{
		int val = data[front];
		front = (front+1)%cap;
		size--;
		return val;
	}
}
int main(){
	int cap; cin>>cap;
	string s;
	que queue(cap);
	while(cin>>s){
		if(s=="add"){
			int x; cin>>x;
			queue.add(x);
		}else if(s=="display"){
			queue.display();
		}else if(s=="remove"){
			int val = queue.remove();
			if(val!=-1)
				cout<<val<<endl;
		}else if(s=="peek"){
			int val = queue.peek();
			if(val!=-1)
				cout<<val<<endl;
		}else if(s=="size"){
			cout<<queue.sz()<<endl;
		}else if(s=="quit"){
			break;
		}
	}
}