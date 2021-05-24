#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node *next;
	Node(int val){
		data = val;
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
Node* reverse(Node *head){
	Node *cur=head,*prev=NULL,*nex;

	while(cur){
		nex = cur->next;
		cur->next = prev;
		prev = cur;
		cur = nex;
	}
	head = prev;
	return head;
}
Node* addTwo(Node *head1,Node *head2){
	Node *dummy = new Node(0);
	Node *temp = dummy;
	int carry = 0;

	while(head1 or head2 or carry){
		int sum = 0;
		if(head1){
			sum += head1->data;
			head1 = head1->next;
		}

		if(head2){
			sum += head2->data;
			head2 = head2->next;
		}

		sum+=carry;
		carry = sum/10;
		temp->next = new Node(sum%10);
		temp = temp->next;
	}
	return dummy->next;
}
Node* addfirst(Node *head,int val){
	Node *node = new Node(val);
	node->next = head;
	head = node;
	return head;
}
int main(){
	int n; cin>>n;
	Node *head1=NULL;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		head1 = addfirst(head1,x);
	}

	int m; cin>>m;
	Node *head2=NULL;
	for(int i=0;i<m;i++){
		cin>>x;
		head2 = addfirst(head2,x);
	}
	int first,last; cin>>first>>last;


	Node *head = addTwo(head1,head2);
	head1 = reverse(head1);
	head2 = reverse(head2);
	display(head1);
	display(head2);
	head = reverse(head);
	display(head);

	Node *res = new Node(first);
	res->next = head;
	Node *temp = head;
	while(temp->next){
		temp = temp->next;
	}
	temp->next = new Node(last);
	display(res);
}