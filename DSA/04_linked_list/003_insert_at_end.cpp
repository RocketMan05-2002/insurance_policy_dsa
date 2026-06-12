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
Node* insertAtEnd(Node* head, int val){
	Node* curr = new Node(val);
	if(head == NULL) return curr;
	Node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = curr;
	return head;
}
int main(){
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);
	head->next->next->next->next = new Node(50);
	printer(head);
	Node* newhead = insertAtEnd(head,90);
	printer(newhead);
	return 0;

}