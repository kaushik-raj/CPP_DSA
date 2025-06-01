// code link :- https://www.geeksforgeeks.org/problems/right-view-of-binary-tree/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(Node* root , vector<int> &ans , int level){
    // base case
    if(root==NULL){
        return;
    }
    
    // adding the first element of each level into the ans vector.
    if(level == ans.size()){
        ans.push_back(root->data);
    }
    
    // recursive traversal to first right , then left nodes
    solve(root->right , ans , level+1);
    solve(root->left , ans , level+1);
    
}
    vector<int> rightView(Node *root)
    {
       vector<int> ans ;
       solve(root , ans , 0);
       return ans;
    }

    vector<int> RightView(Node* root){
        vector<int> ans;
        if(root == NULL){
            return ans;
        }
        queue<pair<Node* , int>> q;
        q.push(make_pair(root , 0));
        while(!q.empty()){
            pair<Node* , int > temp = q.front();
            q.pop();
            
            int level = temp.second;
            
            // pushing answer into ans
            if(ans.size()==level){
                ans.push_back(temp.first->data);
            }
            
            if(temp.first->right){
                q.push(make_pair(temp.first->right , level+1));
            }
            if(temp.first->left){
                q.push(make_pair(temp.first->left , level+1));
            }
            
        }
        return ans ;
    }

int main(){
    
}