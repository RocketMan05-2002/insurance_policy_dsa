// linked list MURDER

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
	cout<<"NULL";
}

Node* insertAtBeginning(Node* head, int val){
	Node* curr = new Node(val);
    curr->next = head;
    return curr;
}
int main(){
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);
	head->next->next->next->next = new Node(50);
	printer(head);
	cout<<endl;
    int val;
	cin>>val;
    Node* newhead = insertAtBeginning(head,val);
    printer(newhead);
	return 0;
}