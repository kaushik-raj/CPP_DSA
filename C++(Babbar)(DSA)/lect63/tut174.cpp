// code link :- https://www.geeksforgeeks.org/problems/diameter-of-binary-tree/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

pair<int , int > FastDiameter(Node* node){
        // base case
        if(node==NULL){
            pair<int , int > pa = make_pair(0,0);
            return pa ;
        }
        
        // moving the pointer 
        pair<int ,int > left = FastDiameter(node->left);
        pair<int , int> right = FastDiameter(node->right);~
        
        // calculating the diameter in 3 casese
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second +1;
        
        
        // storing the solution 
        pair<int , int > ans;
        // calculating the daimeter
        ans.first = max(op1 , max(op2 , op3));
        // calculating the height
        ans.second = max(left.second , right.second) +1;
        
        return ans;
    }
    
    int diameter(Node* root) {
        return FastDiameter(root).first;
    }

int main(){
    
}