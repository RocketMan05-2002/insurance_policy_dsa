#include<iostream>
#include<queue>
#include<vector>
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
vector<vector<int>> LO(Node* root){
    if(root == NULL) return {};
    queue<Node*>q;
    vector<vector<int>> res;

    q.push(root);
    int currLevel = 0;

    while(!q.empty()){
        int len = q.size();
        res.push_back({});
        for(int i=0;i<len;i++){
            Node* node = q.front();
            q.pop();
            res[currLevel].push_back(node->key);
            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);
        }
        currLevel++;
    }

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
    
    for(auto it: ans){
        for(auto ele:it){
            cout<<ele<<"-";
        }
        cout<<endl;
    }
    return 0;
}