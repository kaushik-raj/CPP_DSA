// code link :- https://www.naukri.com/code360/problems/preorder-traversal-to-bst_893111?leftPanelTab=0&leftPanelTabValue=SUBMISSION

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

BinaryTreeNode<int>* solve(vector<int> &preorder , int min , int max , int &indexforPreorder){

    if(indexforPreorder >= preorder.size()){
        return NULL;
    }

    if(preorder[indexforPreorder] < min || preorder[indexforPreorder]>max){
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(preorder[indexforPreorder++]);
    root->left = solve(preorder , min , root->data , indexforPreorder);
    root->right= solve(preorder ,root->data , max , indexforPreorder);
    return root;
}

BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
    int min = INT_MIN;
    int max = INT_MAX;
    int indexforPreorder = 0;
    
    return solve(preorder , min , max, indexforPreorder);
}

int main(){
    
}