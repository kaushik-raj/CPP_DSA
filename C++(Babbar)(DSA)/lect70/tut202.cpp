// code link :- https://www.naukri.com/code360/problems/_893049?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&leftPanelTabValue=PROBLEM
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
   
    // find the key 
    TreeNode* temp = root;
    int pred = -1;
    int succ = -1;

    while(temp->data!=key){
        if(temp->data > key){
            succ = temp->data;
            temp = temp->left;
        }
        else{
            pred = temp->data;
            temp = temp->right;
        }
        if(temp==NULL){
            pair<int , int> ans = make_pair( pred , succ );
            return  ans;
        }
    }

    // finding the pred and succ in the tree lower to that key node (if any)

    // checking for the pred (maximun value at his left subtree)
    TreeNode* leftTree = temp->left;
    while(leftTree!=NULL){
        pred= leftTree->data;
        leftTree = leftTree->right;
    }
    // checking for the succ (Minimum value in his right subTree)
    TreeNode* rightTree = temp->right;
    while(rightTree!=NULL){
        succ = rightTree->data;
        rightTree = rightTree->left;
    }

    pair<int , int> ans = make_pair( pred , succ );
    return  ans;
}

int main(){
    
}