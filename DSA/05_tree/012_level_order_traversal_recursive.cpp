#include<bits/stdc++.h>
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
void LORec(Node* root, int level, vector<vector<int>> &res){
    if(root == NULL) return; // Base case
    if(res.size()<= level) res.push_back({}); // Add a new level to the result if needed
    res[level].push_back(root->key); // Add current node's data to its corresponding level

    // Recur for left and right children
    LORec(root->left,level+1,res);
    LORec(root->right,level+1,res);
}
vector<vector<int>> LO(Node* root){
    vector<vector<int>> res;
    LORec(root,0,res);
    return res;
}
int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    vector<vector<int>> ans = LO(root);
    
    for(auto it:ans){
    	for(auto ele:it){
    		cout<<ele<<"-";
    	}
    	cout<<endl;
    }
    return 0;
}