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
	cout<<"NULL"<<endl;
}

int lengthOfLL(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

Node* removeNthnodeFromEnd(Node* head, int n){
    int len = lengthOfLL(head);
    if(n > len) return head; // since hte list is still valid
    if(n==len){
        //delete at beginning
        Node* todelete = head;
        head = head->next;
        delete todelete;
        return head;
    }
    int ind = len - n - 1;
    Node* temp = head;
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
	printer(head);
    int n;
    cin>>n;
    Node* newhead = removeNthnodeFromEnd(head,n);
    printer(newhead);
	return 0;
}