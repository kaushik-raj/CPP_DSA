// code link :- https://www.geeksforgeeks.org/problems/sum-tree/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

pair<bool , int> isSumTreeFast(Node* root){
        // base case
        if(root==NULL){
            pair<bool , int > p = make_pair(true , 0);
            return p;
        }
        if(root->left==NULL && root->right==NULL){
            pair<bool , int> pq = make_pair(true,root->data);
            return pq;
        }
        // moving to the extreme parts of the tree
        pair<bool , int> left = isSumTreeFast(root->left);
        pair<bool , int> right = isSumTreeFast(root->right);
        
        // checking all the three conditions
        bool  leftAns = left.first;
        bool rightAns = right.first;
        bool valueAns = (root->data ==(left.second)+(right.second));
        
        // returning the solution for that perticular node
        pair<bool , int> ans ;
        if(leftAns && rightAns && valueAns){
            ans.first = true;
        }
        else{
            ans.first = false;
        }
        
        ans.second = root->data +left.second + right.second;
        return ans;
    }
  
    bool isSumTree(Node* root) {
        return isSumTreeFast(root).first;
    }

int main(){
    
}