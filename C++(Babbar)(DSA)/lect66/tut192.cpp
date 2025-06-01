// code link :- https://www.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void createmap(int in[], map<int , int> &nodeToIndexInorder, int n){
        for(int i =0 ; i<n ; i++){
            nodeToIndexInorder[in[i]] =i;
        }
    }
    
    Node* solve(int in[] , int pos[] ,int &posOrderIndex , int inorderstart , int inOrderEnd , int n ,map<int , int>& nodeToIndexInorder){
        
        // base case
        if(posOrderIndex < 0 || inorderstart > inOrderEnd){
            return NULL;
        }
        
        // creating a new node
        int ele = pos[posOrderIndex--];
        Node* root = new Node(ele);
        // finding the position of current root into thr INorder array
        int position  = nodeToIndexInorder[ele];
        
        // recursive calls for left ans right of current node
        root->right = solve(in , pos,posOrderIndex , position+1 , inOrderEnd , n , nodeToIndexInorder);
        root->left = solve(in , pos,posOrderIndex , inorderstart , position-1 , n , nodeToIndexInorder);
        
        
        return root;
    }
    
    Node* buildTree(int n ,int in[],int pos[])
    {
        int postOrderIndex = n-1;
        map<int , int> nodeToIndexInorder;
        
        // create a map for storing the index of the
        createmap(in , nodeToIndexInorder , n);
        Node* root = solve(in , pos,postOrderIndex , 0 , n-1 , n , nodeToIndexInorder);
        return root ;
    }

int main(){
    
}