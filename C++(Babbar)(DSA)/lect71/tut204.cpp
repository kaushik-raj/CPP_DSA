// code link :- https://www.naukri.com/code360/problems/two-sum-in-a-bst_1062631?leftPanelTab=0&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void inOrder(BinaryTreeNode<int>* root ,vector<int> &inOrderVal){
    if(root==NULL){
        return;
    }
    inOrder(root->left, inOrderVal);
    inOrderVal.push_back(root->data);
    inOrder(root->right ,inOrderVal );
}

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	vector<int> inOrderVal;
    inOrder(root , inOrderVal);

    int i =0 ;
    int j= inOrderVal.size()-1;
    while(i<j){
        int sum = inOrderVal[i] + inOrderVal[j];
        if(sum > target){
            j--;
        }
        else if(sum < target){
            i++;
        }
        if(sum==target){
            return true;
        }
    }
    return false;

}

int main(){
    
}