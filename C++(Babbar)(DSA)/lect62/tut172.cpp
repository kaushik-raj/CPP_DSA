#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseLevel(node*root){
    // base case
    if(!root){
        return;
    }

    stack<node*> stk;
    queue<node*> que;
    que.push(root);
    while(!que.empty()){
        root = que.front();
        que.pop();
        stk.push(root);
        // we first push right nodes
        if(root->right){
            que.push(root->right);
        }
        if(root->left){
            que.push(root->left);
        }
        
    }

    while(!stk.empty()){
        node* temp = stk.top();
        cout<<temp->data<<" ";
        stk.pop();
    }; 
}

int main(){
    
}