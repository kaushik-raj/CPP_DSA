// code link :- https://www.geeksforgeeks.org/problems/construct-tree-1/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void createmap(int in[], map<int , int> &nodeToIndexInorder, int n){
        for(int i =0 ; i<n ; i++){
            nodeToIndexInorder[in[i]] =i;
        }
    }
    
    Node* solve(int in[] , int pre[] ,int &preOrderIndex , int inorderstart , int inOrderEnd , int n ,map<int , int>& nodeToIndexInorder){
        
        // base case
        if(preOrderIndex>= n || inorderstart > inOrderEnd){
            return NULL;
        }
        
        // creating a new node
        int ele = pre[preOrderIndex++];
        Node* root = new Node(ele);
        // finding the position of current root into thr INorder array
        int position  = nodeToIndexInorder[ele];
        
        // recursive calls for left ans right of current node
        root->left = solve(in , pre,preOrderIndex , inorderstart , position-1 , n , nodeToIndexInorder);
        root->right = solve(in , pre,preOrderIndex , position+1 , inOrderEnd , n , nodeToIndexInorder);
        
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        int preOrderIndex = 0;
        map<int , int> nodeToIndexInorder;
        
        // create a map for storing the index of the
        createmap(in , nodeToIndexInorder , n);
        Node* root = solve(in , pre,preOrderIndex , 0 , n-1 , n , nodeToIndexInorder);
        return root ;
    }

int main(){
    
}