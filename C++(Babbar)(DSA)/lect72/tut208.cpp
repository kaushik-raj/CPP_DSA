// code link :- https://www.naukri.com/code360/problems/h_920474?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Approcah 1

void BSTToInorder(TreeNode * root , vector<int> &BST){
    if(root == NULL){
        return ;
    }

    BSTToInorder(root->left,  BST);
    BST.push_back(root->data);
    BSTToInorder(root->right, BST);
}

vector<int> Mergearr(vector<int> &BST1 , vector<int> &BST2){
    int i =0;
    int j=0;
    int k=0;
    vector<int> arr(BST1.size() + BST2.size());

    while(i<BST1.size() && j<BST2.size()){
        if(BST1[i]<BST2[j]){
            arr[k++]=BST1[i++];
        }
        else{
            arr[k++]=BST2[j++];
        }
    }

    while(i<BST1.size()){
        arr[k++]=BST1[i++];
    }
    while(j<BST2.size()){
        arr[k++]=BST2[j++];
    }
    return arr;
}

TreeNode* InorderToBST(vector<int> &arr  , int s , int e ){
    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;
    TreeNode* root = new TreeNode(arr[mid]);
    root->left = InorderToBST(arr, s, mid-1);
    root->right = InorderToBST(arr ,  mid+1,  e);
    return root;
}

vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    // STEP 1 find the inorder for both the BSTs
    vector<int> BST1 , BST2;
    BSTToInorder(root1,  BST1);
    BSTToInorder(root2,  BST2);

    // STEP 2 merging the two sorted arrays
    vector<int> arr3 = Mergearr(BST1 , BST2);

    // STEP 3 Inorder to BST
    int s= 0 ;
    int e =arr3.size()-1 ;
    return arr3;
    // return InorderToBST(arr3 , s , e);

}

int main(){
    
}