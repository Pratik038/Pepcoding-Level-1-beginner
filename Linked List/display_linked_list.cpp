#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node *next;
	Node(){
		next = NULL;
	}
};
class LinkedList{
	Node *head,*tail;
	int size;
public:
	LinkedList(){
		head = NULL;
		tail = NULL;
		size = 0;
	}
	void addLast(int val);
	void display();
	int sz(){
		return size;
	}
};

void LinkedList :: addLast(int val){
	Node *temp = new Node;
	temp->data = val;
	temp->next = NULL;
	if(size==0){
		head = tail = temp;
	}else{
		tail->next = temp;
		tail = temp;
	}
	size++;
}
void LinkedList :: display(){
	for(Node *temp=head;temp!=NULL;temp=temp->next)
		cout<<temp->data<<" ";
	cout<<endl;
}
int main(){
	LinkedList ll;
	string s;
	while(cin>>s){
		if(s=="addLast"){
			int x; cin>>x;
			ll.addLast(x);
		}else if(s=="quit"){
			break;
		}else if(s=="display"){
			ll.display();
		}else if(s=="size"){
			cout<<ll.sz()<<endl;
		}
	}

}