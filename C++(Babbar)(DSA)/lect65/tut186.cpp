// code link :- https://www.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(Node* root , int length, int sum , int &maxLength , int &maxSum){
        // base case / Leaf node
        if(root ==NULL){
            
            if(length>maxLength){
                maxLength = length;
                maxSum = sum ;
            }
            else if(length==maxLength){
                maxSum = max(sum , maxSum);
            }
            return ;
            
        }
        // we are calculating the sum of length
        sum = sum +root->data;
        
        solve(root->left , length+1 , sum , maxLength , maxSum);
        solve(root->right , length+1 , sum , maxLength , maxSum);
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        int length = 0;
        int sum = 0;
        int maxLength =0;
        int maxSum = INT_MIN;
        solve(root ,length , sum , maxLength , maxSum);
        return maxSum;
    }

int main(){
    
}