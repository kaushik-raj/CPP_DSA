#include<iostream>
#include<bits/stdc++.h>
using namespace std;

Node* deletionFromBST(Node* root , int data){
    // Base case 
    if(root==NULL){
        return NULL;
    };
    // data is found
    if(root->data == data){
        // 0 child case
        if(root->left==NULL && root->right == NULL){
            delete root ;
            return NULL;
        }

        // 1 child case 
            // 1 child at left 
            if(root->left != NULL && root->right == NULL){
                Node* temp = root->left;
                delete root;
                return temp;
            }
            // 1 child ar right
            if(root->left==NULL && root->right!=NULL){
                Node* temp = root->right;
                delete root;
                return temp;
            }
        
        // 2 child case
        if(root->left != NULL && root->right != NULL){

            // using method 1 (finding the mix in the left subtree of root )
            int max = maxValue(root->left);
            root->data = max;
            root->left = deletionFromBST(root->left , max);
            return root;

            // using method 2 (finding the min in the right subtree of root )
            // int min = minValue(root->right);
            // root->data = min;
            // root->right = deletionFromBST(root->right , min);
            // return root;

        }
    }
    if(root->data > data){
        root->left = deletionFromBST(root->left , data);
        return root;
    }
    else{
        root->right = deletionFromBST(root->right , data);
        return root;
    }
}

int main(){
    
}