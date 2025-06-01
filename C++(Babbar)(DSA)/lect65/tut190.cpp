// code link :- https://www.geeksforgeeks.org/problems/maximum-sum-of-non-adjacent-nodes/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 pair<int , int> solve(Node* root){
        // base case
        if(root == NULL){
            return make_pair(0,0);
        }
        
        // recursive call for left and right side 
        pair<int , int > left = solve(root->left);
        pair<int , int > right = solve(root->right);
        
        // calculating the pair for this node 
        pair<int, int > ans;
        // in which we are including this node 
        ans.first = root->data + left.second + right.second;
        // in which we are excluding this node
        ans.second = max(left.first , left.second) + max(right.first , right.second);
        
        return ans;
    }
    
     
    
    int getMaxSum(Node *root) 
    {
        pair<int , int > ans = solve(root);
        return max(ans.first , ans.second);
    }

int main(){
    
}