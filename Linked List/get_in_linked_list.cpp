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
	void removeFirst();
	int sz(){
		return size;
	}
	int getFirst(){
		return head->data;
	}
	int getLast(){
		return tail->data;
	}
	int getAt(int idx){
		Node *temp = head;
		for(int i=0;i<idx;i++)
			temp = temp->next;
		return temp->data;
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

void LinkedList :: removeFirst(){
	if(size == 0){
		cout<<"List is empty"<<endl;
		return;
	}
	head = head->next;
	size--;
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
		}else if(s=="removeFirst"){
			ll.removeFirst();
		}else if(s=="getFirst"){
			if(ll.sz()!=0)
				cout<<ll.getFirst()<<endl;
			else
				cout<<"List is empty"<<endl;
		}else if(s=="getLast"){
			if(ll.sz()!=0)
				cout<<ll.getLast()<<endl;
			else
				cout<<"List is empty"<<endl;
		}else if(s=="getAt"){
			int i; cin>>i;
			if(i >= ll.sz())
				cout<<"Invalid arguments"<<endl;
			else{
				cout<<ll.getAt(i)<<endl;
			}
		}
	}

}