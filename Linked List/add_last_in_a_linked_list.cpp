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
		cout<<temp->data<<endl;
	cout<<size<<endl;
	if(size > 0)
		cout<<tail->data;
}
int main(){
	LinkedList ll;
	string s;
	while(cin>>s){
		if(s=="addLast"){
			int x; cin>>x;
			ll.addLast(x);
		}else
			break;
	}

	ll.display();
}