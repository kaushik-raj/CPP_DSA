// code link :- https://www.naukri.com/code360/problems/largest-bst-subtree_893103?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class info{
    public:
        int max;
        int mini;
        bool isBst;
        int size;
};

info solve(TreeNode* root , int &ans){

    // base case 
    if(root==NULL){
      return {INT_MIN, INT_MAX , true , 0};
    }

    // recursive calls for left ans right
    info left = solve(root->left , ans);
    info right = solve(root->right , ans);

    // creating the info for root node 

    info root1 ;

    root1.max = max(root->data , right.max);
    root1.mini = min(root->data , left.mini);
    
    // check for the condition to be a BST at root node
    if(left.isBst && right.isBst && (root->data > left.max && root->data <right.mini)){
        root1.isBst=true;
        root1.size = left.size + right.size +1;
        ans = max(ans , root1.size);
    }  
    else{
        root1.isBst= false;
    }

    

    return root1;

};


int largestBST(TreeNode * root){
    int ans = 0;
    info temp = solve(root , ans);
    return ans;
}

int main(){
    
}