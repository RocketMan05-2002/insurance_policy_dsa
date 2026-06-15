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
int height(Node* root){
    if(root==NULL) return 0;
    return 1+ max(height(root->left),height(root->right));
}
int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(50);
    root->right->right = new Node(60);

    int h = height(root);
    cout<<h;
    return 0;
}