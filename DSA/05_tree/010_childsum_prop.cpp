#include<iostream>
using namespace std;
#define isChildSumPropertyFollowed fun;
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
// child sum property is this - sum of children is always equal to the parent node
bool fun(Node* root){
	if(root == NULL) return true;
    if(root->left == NULL && root->right == NULL) return true;
    int leftSum = 0, rightSum = 0;
    if(root->left!=NULL) leftSum = root->left->key;
    if(root->right!=NULL) rightSum = root->right->key;
    return (root->key == leftSum + rightSum ) && 
    fun(root->left) && 
    fun(root->right);
}
int main(){
    Node* root = new Node(13);
    root->left = new Node(8);
    root->right = new Node(5);
    root->left->left = new Node(4);
    root->left->right = new Node(4);
    root->right->left = new Node(3);
    root->right->right = new Node(2);
 
    if(fun(root)) cout<<"yes";
    else cout<<"no";
    return 0;
}