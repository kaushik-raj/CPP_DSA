// code link :- https://www.naukri.com/code360/problems/validate-bst_799483?leftPanelTab=0&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool isBST(BinaryTreeNode<int> *root , int min , int max){
    if(root==NULL){
        return true;
    }

    if(root->data >=min && root->data <=max){
        bool left = isBST(root->left,min,root->data);
        bool right = isBST(root->right , root->data , max);
        return (left && right);

    }
    else{
        return false;
    }
}

bool validateBST(BinaryTreeNode<int> *root) {
    return isBST(root , INT_MIN , INT_MAX);
}

int main(){
    
}
