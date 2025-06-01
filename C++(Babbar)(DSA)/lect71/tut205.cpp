// code link :- https://www.naukri.com/code360/problems/flatten-bst-to-a-sorted-list_1169459?leftPanelTab=0&leftPanelTabValue=PROBLEM
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void inOrder(TreeNode<int>* root ,vector< TreeNode<int>* > &inOrderVal){
    if(root==NULL){
        return;
    }
    inOrder(root->left, inOrderVal);
    inOrderVal.push_back(root);
    inOrder(root->right ,inOrderVal );
}

TreeNode<int>* flatten(TreeNode<int>* root)
{
    if(root==NULL){
        return root;
    }
    vector< TreeNode<int>* > inOrderVal;
    inOrder(root , inOrderVal);
    int n = inOrderVal.size();
    TreeNode<int>* root2 = inOrderVal[0];
    for(int i =0 ;i<n-1 ; i++){
        TreeNode<int>* temp = inOrderVal[i];
        temp->right=inOrderVal[i+1];
        temp->left = NULL;
    }
    inOrderVal[n-1]->right = NULL;
    inOrderVal[n-1]->left = NULL;

    return root2;
}

int main(){
    
}