// code link :- https://www.geeksforgeeks.org/problems/height-of-binary-tree/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int height(struct Node* node){
        // base case
        if(node == NULL){
            return 0;
        }
        
        int left = height(node->left);
        int right = height(node->right);
        
        int ans = max(left , right) +1;
        return ans;
}

int main(){
    
}