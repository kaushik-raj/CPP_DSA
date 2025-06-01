// code link :-  Inorder Successor/Predecessor in BST 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Successor
Node* InorderSuccessor(Node* root , Node* val ){
    Node* Succ  = NULL;
    Node* temp = root;
    while(temp!=NULL){
        if(temp->data < val->data){
            temp = temp->right;
        }
        else{
            Succ = temp;
            temp=temp->left;
        }
    } 
    return Succ;
}

// Predecessor
Node* InorderPredecessor(Node* root , node* val){
    Node* Pre = NULL;
    Node* temp = root;
    while(temp!=NULL){
        if(temp->data > val->data){
            temp = temp ->left;
        }
        else{
            Pre = temp;
            temp=temp->right;
        }
    }
    return Pre;
}


int main(){
    
}