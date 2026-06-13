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

int lengthOfLinkedList(Node* head){
	int len = 0;
	Node* temp = head;
	while(temp!=NULL){
		len++;
		temp = temp->next;
	}
	return len;
}

Node* middleOfLinkedList(Node* head){
	int len = lengthOfLinkedList(head);
	int mid = len/2;
	Node* temp = head;
	while(mid--){
		temp= temp->next;
	}
	return temp;
}

int main(){
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);
	head->next->next->next->next = new Node(50);
	Node* ans = middleOfLinkedList(head);
	cout<<ans->data<<" ";
	return 0;
}