// code link :- https://www.naukri.com/code360/problems/normal-bst-to-balanced-bst_920472?leftPanelTab=0&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void inOrder(TreeNode<int>* root ,vector<int> &inOrderVal){
    if(root==NULL){
        return;
    }
    inOrder(root->left, inOrderVal);
    inOrderVal.push_back(root->data);
    inOrder(root->right ,inOrderVal );
}

TreeNode<int>* inorderToBST(int s , int e , vector<int> inOrderVal){
    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(inOrderVal[mid]);
    root->left = inorderToBST(s, mid-1, inOrderVal);
    root->right = inorderToBST(mid+1, e, inOrderVal);
    return root; 
}

TreeNode<int>* balancedBst(TreeNode<int>* root) {

    vector<int> inOrderVal;
    inOrder(root , inOrderVal);

    return inorderToBST(0 , inOrderVal.size()-1, inOrderVal);
}


int main(){
    
}