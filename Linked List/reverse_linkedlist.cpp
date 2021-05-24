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
// Node* oddEven(Node *head){
// 	Node* odd=new Node(-1);
// 	Node* even=new Node(-1);
// 	Node *res = odd;
// 	Node *res1 = even;
// 	while(head){
// 		if((head->data)%2==1){
// 				odd->next = new Node(head->data);
// 				odd = odd->next;
// 		}else{
// 				even->next = new Node(head->data);
// 				even = even->next;
// 		}
// 		head = head->next;
// 	}
// 	even->next = NULL;
// 	odd->next = res1->next;
// 	return res->next;
// }
Node* reveresK(Node *head,int k){
	if(head == NULL or k==1)
		return head;
	Node *dummy = new Node(0);
	dummy->next = head;
	Node *cur=dummy,*prev=dummy,*nex=dummy;
	int count = 0;
	while(cur->next!=NULL){
		cur = cur->next;
		count++;
	}

	while(count >= k){
		cur = prev->next;
		nex = cur->next;
		for(int i=1;i<k;i++){
			cur->next = nex->next;
			nex->next = prev->next;
			prev->next = nex;
			nex = cur->next;
		}
		prev = cur;
		count-=k;
	}
	return dummy->next;
}
void displayReverse(Node *head){
	if(head == NULL){
		return;
	}
	displayReverse(head->next);
	cout<<head->data<<" ";
}
Node* reverse(Node *head){
	Node* cur=head,*prev=NULL,*nex;

	while(cur){
		nex = cur->next;
		cur->next = prev;
		prev = cur;
		cur = nex;
	}
	head = prev;
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
	// int k; cin>>k;
	int first,last; cin>>first>>last;
	Node *res = new Node(last);
	display(head1->next);
	Node *head = reverse(head1->next);
	res->next = head;
	Node *temp = head;
	for(int i=0;i<n-1;i++){
		temp = temp->next;
	}
	temp->next = new Node(first);
	temp->next->next = NULL;
	display(res);
}