#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node(int val){
		data = val;
		next = NULL;
	}
};
void printer(Node* head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}
Node* insertAtGivenPosition(Node* head, int val, int pos){
	Node* curr = new Node(val);
	if(head == NULL){
		return NULL;
	}
	if(pos==1){
		curr->next=head;
		return curr;
	}
	int ind = pos-1;
	ind--;
	Node* temp = head;
	while(ind--){
		temp=temp->next;
	}
	curr->next = temp->next;
	temp->next = curr;
	return head;
}
int main(){
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);
	head->next->next->next->next = new Node(50);
	int val,pos;
	cin>>val>>pos;
	printer(head);
	Node* newhead = insertAtGivenPosition(head,val,pos);
	printer(newhead);
	return 0;
}