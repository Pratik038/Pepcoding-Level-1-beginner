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
	void addFirst(int val);
	void addAt(int idx,int val);
	void display();
	void removeFirst();
	void removeLast();
	void removeAt(int idx);
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
	Node* getNodeAt(int idx){
		Node *temp = head;
		for(int i=0;i<idx;i++)
			temp = temp->next;
		return temp;
	}
	void reverseDI();
	void reversePI();
};
void LinkedList :: reversePI(){
	Node *cur = head;
	Node *prev=NULL,*nxt = NULL;
	while(cur!=NULL){
		nxt = cur->next;
		cur->next = prev;
		prev = cur;
		cur = nxt;
	}
	swap(head,tail);
}
void LinkedList :: reverseDI(){
		int i = 0;
		int j = size-1;

		while(i < j){
			Node *left = getNodeAt(i);
			Node *right = getNodeAt(j);
			swap(left->data,right->data);
			i++;j--;
		}
	}
void LinkedList :: addAt(int idx,int x){
	if(idx==0){
		addFirst(x);
	}else if(idx == size){
		addLast(x);
	}
	else{
		Node *t = head;
		Node *temp = new Node;
		temp->data = x;
		for(int i=1;i<idx;i++)
			t = t->next;
		temp->next = t->next;
		t->next = temp;
		size++;
	}
}
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
void LinkedList :: addFirst(int val){
	Node *temp = new Node;
	temp->data = val;
	temp->next = head;
	head = temp;

	if(size==0){
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
	}else if(size==1){
		head = tail = NULL;
	}
	else
		head = head->next;
	size--;
}
void LinkedList :: removeLast(){
	if(size==0){
		cout<<"List is empty"<<endl;
		return;
	}else if(size == 1){
		head = tail = NULL;
	}else{
		Node *temp = head;
		for(int i=0;i<size-2;i++)
			temp = temp->next;
		tail = temp;
		temp->next = NULL;
	}
	size--;
}
void LinkedList :: removeAt(int idx){
	if(idx==0){
		removeFirst();
	}else if(idx==size-1){
		removeLast();
	}else{
		Node *temp = head;
		for(int i=0;i<idx-1;i++)
			temp = temp->next;
		temp->next = temp->next->next;
		size--;
	}
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
			if(i<0 or i >= ll.sz())
				cout<<"Invalid arguments"<<endl;
			else{
				cout<<ll.getAt(i)<<endl;
			}
		}else if(s=="addFirst"){
			int x; cin>>x;
			ll.addFirst(x);
		}else if(s=="addAt"){
			int idx,x; cin>>idx>>x;
			if(idx < 0 or idx > ll.sz())
				cout<<"Invalid arguments"<<endl;
			else
				ll.addAt(idx,x);
		}else if(s=="removeLast"){
			ll.removeLast();
		}else if(s=="removeAt"){
			int idx; cin>>idx;
			if(idx < 0 or idx >= ll.sz())
				cout<<"Invalid arguments"<<endl;
			else
				ll.removeAt(idx);
		}else if(s=="reverseDI"){
			ll.reverseDI();
		}else if(s=="reversePI"){
			ll.reversePI();
		}
	}

}