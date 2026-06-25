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
int height(Node* root){
	if(root == NULL) return 0;
	return 1+max(height(root->left),height(root->right));
}
void getLevelDone(Node* root, int level, bool ltr, vector<int> &res){
	if(root == NULL) return;
	if(level == 1) res.push_back(root->key);
	else{
		if(ltr){
			if(root->left != NULL) getLevelDone(root->left,level-1,ltr,res);
			if(root->right != NULL) getLevelDone(root->right,level-1,ltr,res);
		}else{
			if(root->right != NULL) getLevelDone(root->right,level-1,ltr,res);
			if(root->left != NULL) getLevelDone(root->left,level-1,ltr,res);
		}
	}
}
vector<int> LOSpiral(Node* root){
	vector<int> res;
	int h = height(root);
	bool ltr = true;
	for(int i=1;i<=h;i++){
		getLevelDone(root,i,ltr,res);
		ltr = !ltr;
	}
	return res;
}
int main(){
	Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    vector<int> res = LOSpiral(root);
    for(auto it:res) cout<<it<<"-";
	return 0;
}