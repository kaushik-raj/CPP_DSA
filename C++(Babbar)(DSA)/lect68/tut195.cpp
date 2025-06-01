// code link:- https://www.geeksforgeeks.org/flatten-a-binary-tree-into-linked-list/?ref=header_ind
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void flatting(Node* root){
    Node* curr  = root;
    while(curr!=NULL){
        if(curr->left){
            // find the predeccessor
            Node* pred = curr->left;
            while(pred!=NULL){
                pred = pred->right;
            }
            pred->right = curr->right;
            curr->right = curr->left;
            // just to null the curr left parts
            curr->left = NULL;
        }
        curr = curr->right;
    }
    return root;
}

int main(){
    
}