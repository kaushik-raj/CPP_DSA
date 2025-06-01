// code link :- https://www.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> diagonal(Node *root) {
    vector<int> ans;
    if(root == NULL) {
        return ans;
    }
    
    // Queue to support BFS traversal, storing nodes and their diagonal levels
    queue<Node*> q;
    
    // Start with the root node
    q.push(root);
    
    while(!q.empty()) {
        Node* frontNode = q.front();
        q.pop();
        
        // Process all nodes on the current diagonal
        while(frontNode) {
            ans.push_back(frontNode->data);
            
            // If there's a left child, it goes to the next diagonal level
            if(frontNode->left) {
                q.push(frontNode->left);
            }
            
            // Move to the right child, which is on the same diagonal
            frontNode = frontNode->right;
        }
    }
    
    return ans;
}

// Code for the second approach 

vector<int> DiagonalTraversal(Node* root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    
    queue< pair< Node* , pair<int , int > > q;
    map<pair<int , pair< int , vector< int > > >>st;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node* , int > temp = q.front();
        q.pop();
        
        Node* no = temp.first;
        int level = temp.second.second;
        int HD = temp.second.first;
        // adding element into stack
        st[HD][level].push_back(no->data);
        // adding into the queue
        if(no->left){
            q.push(make_pair(no->left , HD-1 ,level+1));
        }
        if(no->right){
            q.push(make_pair(no->right , HD+1 ,level));
        }
    }
    
    for(auto i : st){
        for(auto j : i.second){
            for(auto k : j.second){
                ans.push_back(k);
            }
        }
    }
    return ans;
} 


int main(){
    
}