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
Node* Merge(Node *head1,Node *head2){
	Node *dummy = new Node(-1);
	Node *temp = dummy;

	while(head1 and head2){
		if(head1->data < head2->data){
			temp->next = new Node(head1->data);
			head1 = head1->next;
		}else{
			temp->next = new Node(head2->data);
			head2 = head2->next;
		}
		temp = temp->next;
	}
	while(head1){
		temp->next = new Node(head1->data);
		head1 = head1->next;
		temp = temp->next;
	}
	while(head2){
		temp->next = new Node(head2->data);
		head2 = head2->next;
		temp = temp->next;
	}
	return dummy->next;
}
void display(Node *head){
	while(head){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
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
	int m; cin>>m;
	Node *head2 = new Node(x);
	Node *tail2 = head2;
	for(int i=0;i<m;i++){
		cin>>x;
		tail2->next = new Node(x);
		tail2 = tail2->next;
	}
	Node *head = Merge(head1->next,head2->next);
	display(head);
	display(head1->next);
	display(head2->next);
}