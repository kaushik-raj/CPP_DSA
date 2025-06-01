// code link :- https://www.naukri.com/code360/problems/search-in-bst_1402878
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// way -1 recursive way 

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    if(root == NULL){
        return false;
    }

    if(root->data==x){
        return true;
    }

    // recursive calls 
    if(root->data > x){
        return searchInBST(root->left , x);
    }
    else{
        return searchInBST(root->right , x);
    }
}

// way -2 Iterative way 

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    BinaryTreeNode<int>* temp = root ;
    while(temp!=NULL){
        // base case
        if(temp->data==x){
            return true;
        }

        // moving left and right according to the data
        if(temp->data > x){
            temp = temp->left;
        }
        else{
            temp = temp->right;
        }

    }

    return false;
}


int main(){
    
}