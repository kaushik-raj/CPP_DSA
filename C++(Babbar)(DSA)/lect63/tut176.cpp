// code link :- https://www.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isIdentical(Node *r1, Node *r2)
    {
        // base cases
        if(r1==NULL && r2==NULL){
            return true;
        }
        if(r1==NULL && r2!=NULL){
            return false;
        }
        if(r1!=NULL && r2==NULL){
            return false;
        }
        
        // now check for all the 3 conditions
        bool left = isIdentical(r1->left , r2->left);
        bool right = isIdentical(r1->right , r2->right);
        
        bool value = (r1->data) == (r2->data);
        
        // return the solution for that node
        if(left && right &&value){
            return true;
        }
        else{
            return false;
        }
    }

int main(){
    
}