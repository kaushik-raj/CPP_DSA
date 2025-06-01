// code link :- https://www.naukri.com/code360/problems/lca-in-a-bst_981280?leftPanelTab=0&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
    TreeNode* temp = root;
    int a = P->data;
    int b = Q->data;
    while(temp!=NULL){
        int nodeValue = temp->data;
        if(nodeValue < a && nodeValue < b){
            temp = temp ->right;
        }
        else if(nodeValue > a && nodeValue > b){
            temp = temp->left;
        }
        else{
            return temp;
        }
    }
}

int main(){
    
}