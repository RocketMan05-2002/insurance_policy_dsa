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
Node* deleteAtGivenPosition(Node* head, int pos){
    if(head == NULL ) return NULL;
    if(pos == 1){
        Node* todelete = head;
        head = head->next;
        delete todelete;
        return head;
    }
    Node* temp = head;
    int ind = pos -1;
    ind--;
    while(ind--){
        temp = temp->next;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
    return head;
}
int main(){
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);
	head->next->next->next->next = new Node(50);
	int pos;
	cin>>pos;
	printer(head);
	Node* newhead = deleteAtGivenPosition(head,pos);
	printer(newhead);
	return 0;
}