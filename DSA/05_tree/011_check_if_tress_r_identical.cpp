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
bool areIdentical(Node* root, Node* root1){
    if(root == NULL && root1 == NULL) return true;
    if(root == NULL || root1 == NULL) return false;

    return root->key == root1->key &&
           areIdentical(root->left, root1->left) &&
           areIdentical(root->right, root1->right);
}
int main(){

    Node* root = new Node(13);
    root->left = new Node(8);
    root->right = new Node(5);
    root->left->left = new Node(4);
    root->left->right = new Node(4);
    root->right->left = new Node(3);
    root->right->right = new Node(2);
    
    Node* root1 = new Node(13);
    root1->left = new Node(8);
    root1->right = new Node(5);
    root1->left->left = new Node(4);
    root1->left->right = new Node(4);
    root1->right->left = new Node(3);
    root1->right->right = new Node(3);

    if(areIdentical(root,root1)) cout<<"trees are identical!";
    else cout<<"trees arent identical.";

    
}