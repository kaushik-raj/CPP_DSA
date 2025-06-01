// code link :- https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 pair<bool , int> isBalancedFast(Node* root){
        // base case  
        if(root == NULL){
            pair<bool , int> p = make_pair(true , 0);
            return p;
        }
        
        // moving to the extreme nodes 
        pair<bool , int> left  = isBalancedFast(root->left);
        pair<bool , int> right = isBalancedFast(root->right);
        
        // checking all the three condition 
        bool leftAns = left.first;
        bool rightAns = right.first;
        bool diff = abs(left.second - right.second) <=1;
        
        // calculating the pair solution
        pair<bool , int >ans;
        if(leftAns && rightAns && diff){
            ans.first=true;
        }
        else{
            ans.first=false;
        }
        
        ans.second = max(left.second , right.second) +1;
        
        return ans;
    }
    
    
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        return isBalancedFast(root).first;
    }

int main(){
    
}