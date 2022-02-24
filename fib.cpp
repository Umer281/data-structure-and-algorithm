#include<iostream>
using namespace std;
class node{
public:
	int data;
	node* next;

	node(int newData){
		this->data = newData;
		this->next = NULL;
	}
};
void insertAtHead(node* &head,int data){
	node* n = new node(data);
	n->next = head;
	head = n;
}
int length(node*head){

	int len = 0;

	node* temp = head;

	while(temp!=NULL){
		len++;
		temp = temp->next;
	}

	return len;
}

node* midPoint(node* head){
	node* slow = head;
	node* fast = head;

	while(fast->next!=NULL and fast->next->next!=NULL){
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;
}
node* reverseRecursive(node* head){
	if(head==NULL or head->next==NULL){
		return head;
	}

	node* newHead = reverseRecursive(head->next);

	node* curr = head;
	curr->next->next = curr;
	curr->next = NULL;
	return newHead;
}

node* merge(node* a,node* b){
	if(a==NULL){
		return b;
	}

	if(b==NULL){
		return a;
	}

	node* c;

	if(a->data <= b->data){
		c = a;
		c->next = merge(a->next,b);
	}else{
		c = b;
		c->next = merge(a,b->next);
	}

	return c;
}

node* mergeSort(node* head){
	if(head3==NULL)
	node* head;
	node* mid=midPoint(head);
	node*  head3=mergeSort(mid);

	
}




int main(){
	node* head = NULL;

	insertAtHead(head,10);
	nsertAtHead(head,20);
	insertAtHead(head,30);
	insertAtHead(head,40);

	

	return 0;

}