#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node *next;
	Node(int x){
		data = x;
		next = NULL;
	}
};

void display(Node *head){
	while(head){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

Node* remove(Node *head){
	Node *temp = head;
	while(temp->next){
		if(temp->data == temp->next->data)
			temp->next = temp->next->next;
		else
			temp = temp->next;
	}
	return head;
}
int main(){
	int n; cin>>n;
	Node *head1 = new Node(-1);
	Node *tail1 = head1;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		tail1->next = new Node(x);
		tail1 = tail1->next;
	}
	display(head1->next);
	Node *head = remove(head1->next);
	display(head);
}