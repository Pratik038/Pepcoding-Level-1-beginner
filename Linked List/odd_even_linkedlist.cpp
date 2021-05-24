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
// Node* Merge(Node *head1,Node *head2){
// 	Node *dummy = new Node(-1);
// 	Node *temp = dummy;

// 	while(head1 and head2){
// 		if(head1->data < head2->data){
// 			temp->next = new Node(head1->data);
// 			head1 = head1->next;
// 		}else{
// 			temp->next = new Node(head2->data);
// 			head2 = head2->next;
// 		}
// 		temp = temp->next;
// 	}
// 	while(head1){
// 		temp->next = new Node(head1->data);
// 		head1 = head1->next;
// 		temp = temp->next;
// 	}
// 	while(head2){
// 		temp->next = new Node(head2->data);
// 		head2 = head2->next;
// 		temp = temp->next;
// 	}
// 	return dummy->next;
// }
void display(Node *head){
	while(head){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}
// Node *getMid(Node *head,Node *tail){
// 	Node *f=head,*s=head;
// 	while(f!=tail and f->next!=tail){
// 		f = f->next->next;
// 		s = s->next;
// 	}
// 	return s;
// }
// Node* Mergesort(Node *head,Node *tail){
// 	if(head == tail){
// 		Node *br = new Node(head->data);
// 		return br;
// 	}

// 	Node *mid = getMid(head,tail);
// 	Node *fh = Mergesort(head,mid);
// 	Node *sh = Mergesort(mid->next,tail);

// 	Node *res = Merge(fh,sh);
// 	return res;
// }
// Node* remove(Node *head){
// 	Node *temp = head;
// 	while(temp->next){
// 		if(temp->data == temp->next->data)
// 			temp->next = temp->next->next;
// 		else
// 			temp = temp->next;
// 	}
// 	return temp;
// }
Node* oddEven(Node *head){
	Node* odd=new Node(-1);
	Node* even=new Node(-1);
	Node *res = odd;
	Node *res1 = even;
	while(head){
		if((head->data)%2==1){
				odd->next = new Node(head->data);
				odd = odd->next;
		}else{
				even->next = new Node(head->data);
				even = even->next;
		}
		head = head->next;
	}
	even->next = NULL;
	odd->next = res1->next;
	return res->next;
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
	int first,last; cin>>first>>last;
	Node *res = new Node(first);
	display(head1->next);
	Node *head = oddEven(head1->next);
	display(head);
	res->next = head;
	Node *temp = head;
	for(int i=0;i<n-1;i++){
		temp = temp->next;
	}
	temp->next = new Node(last);
	temp->next->next = NULL;
	display(res);
}