#include<iostream>
#include<vector>
#include<deque>
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

// spiral traversal using deque
vector<int> LOSpiralusingDQ(Node* root){
    vector<int> res;
    if(root == NULL) return res;
    deque<Node*> dq;
    dq.push_back(root);
    bool leftToRight = true;
    while(!dq.empty()){
        int count = dq.size();
        if(leftToRight){
            while(count--){
                Node* curr = dq.front();
                dq.pop_front();

                res.push_back(curr->key);
                if(curr->left)dq.push_back(curr->left);
                if(curr->right)dq.push_back(curr->right);
            }
        }else{
            while(count--){
                Node* curr = dq.back();
                dq.pop_back();

                res.push_back(curr->key);
                if(curr->right)dq.push_front(curr->right);
                if(curr->left)dq.push_front(curr->left);
            }
        }
        leftToRight = ! leftToRight;
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

    vector<int> res = LOSpiralusingDQ(root);
    for(auto it:res) cout<<it<<"-";
    return 0;
}