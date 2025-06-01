// code link :- https://www.naukri.com/code360/problems/find-k-th-smallest-element-in-bst_1069333?leftPanelTab=0&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sma(BinaryTreeNode<int>* root, int k , int &i){
    // base case
    if(root==NULL){
        return -1;
    }

    // L
    int left = sma(root->left , k , i);

    // agar left me se jo data mila hai , vo ek answer hai , to direct answer return kar do , bina right part check kiye 
    // kyu ki agar vo answer nahi hai to har node -1 he return kar rahi hai 
    if(left!=-1){
        return left;
    }

    // N
    i++;
    if(i==k){
        return root->data;
    }

    // R
    return sma(root->right , k ,i);
}

int kthSmallest(BinaryTreeNode<int>* root, int k) {
    int i =0 ;
    return sma(root , k , i);
}

int main(){
    
}