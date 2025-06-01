// code link :- https://www.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Approach -01
void solve(Node* root , int k ,int node , vector<int>& path , int& num ){
    // base case
    if(root==NULL){
        return ;
    }
    // pusing the path
    path.push_back(root->data);
    // required calculation
    if (root->data == node) {
        if (path.size() > k) {
            num = path[path.size() - 1 - k];  // Valid access
        } else {
            num = -1;  // Indicating kth ancestor doesn't exist
        }
        return;  // Stop further recursion once found
    }

    
    // recursive calls
    solve(root->left , k , node , path , num);
    solve(root->right , k , node , path , num);
    
    // poping the element that was puch into it in the start 
    path.pop_back();
}



int kthAncestor(Node *root, int k, int node)
{
    vector<int> path;
    int num = -1;
    solve(root , k , node , path , num);
    return  num ;
}




// Approach -02
Node* solve(Node *root, int &k, int node){
    
    // base case
    if(root==NULL){
        return NULL;
    }
    
    if(root->data == node){
        return root;
    }
    
    // left and right calls
    Node* left = solve( root->left,k,node);
    Node* right = solve( root->right,k,node);
    
    
   if (left != NULL && right == NULL) {
        k--;
        if (k == 0) {
            return root;
        }
        return left;
    }
    
    // If the target node is found in the right subtree
    if (left == NULL && right != NULL) {
        k--;
        if (k == 0) {
            return root;
        }
        return right;
    }
    
    return NULL;
};

int kthAncestor(Node *root, int k, int node)
{
    
    Node* ans =solve( root , k ,  node);
    // k>0 , bcz , is the k!>0 , then there must be no kth ancestor.
    if(ans == NULL || k > 0) {
        return -1;
    } else {
        return ans->data;
    }
}


int main(){
    
}