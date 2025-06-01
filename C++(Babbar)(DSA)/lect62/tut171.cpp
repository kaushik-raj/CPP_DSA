// code link :- https://www.naukri.com/code360/problems/count-leaf-nodes_893055?source=youtube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void postorder(BinaryTreeNode<int> * root , int &cnt) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left , cnt);
    postorder(root->right , cnt);
    if(root->left==NULL && root->right==NULL){
        cnt++;
    }

}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    int cnt =0;
    postorder(root,  cnt);
    return cnt;
}

int main(){
    
}