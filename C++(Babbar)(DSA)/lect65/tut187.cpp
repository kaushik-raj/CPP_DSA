// code link :- https://www.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

Node* lca(Node* root ,int n1 ,int n2 )
{
       if(root == NULL){
           return NULL;
       }
       if(root->data==n1 || root->data==n2){
           return root;
       }
       
    //   recursive call for left ans right values check 
    Node* left = lca(root->left , n1,n2);
    Node* right = lca(root->right , n1 , n2);
    
    // cases , that we have to do when two child nodes return some values
    if(left!= NULL && right!=NULL){
        return root;
    }
    else if(left==NULL && right!=NULL){
        return right;
    }
    else if(left !=NULL && right == NULL){
        return left;
    }
    else{
        return NULL;
    }
}

int main(){
    
}