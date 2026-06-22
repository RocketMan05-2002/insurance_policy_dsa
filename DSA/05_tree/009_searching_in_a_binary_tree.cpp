#include<iostream>
using namespace std;
struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int val){
        key = val;
        left = NULL;
        right = NULL;
    }
};
bool searchInBT(Node* root, int val){
    if(root==NULL) return false;
    if(root->key == val) return true;
    return searchInBT(root->left,val) || searchInBT(root->right,val);
} 
int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(50);
    root->right->right = new Node(60);

    int val;
    cin>>val;
    if(searchInBT(root,val))cout<<"yes present";
    else cout<<"not present";
}