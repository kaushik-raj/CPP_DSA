// code link :- https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> result;
    	if(root==NULL){
    	    return result;
    	}
    	queue<Node*> q;
    	q.push(root);
    	bool leftToRight = true;
    	
    	while(!q.empty()){
    	    int size = q.size();
    	    int arr[size];
    	    
    	    for(int i=0 ;i<size;i++){
    	        Node* value = q.front();
    	        q.pop();
    	        
    	        int index = leftToRight ? i: size-i-1;
    	        arr[index] = value->data;
    	        
    	        if(value->left){
    	            q.push(value->left);
    	        }
    	        if(value->right){
    	            q.push(value->right);
    	        }
    	    }
    	    leftToRight = !leftToRight;
    	    for(auto i : arr){
    	        result.push_back(i);
    	    }
    	}
    	return result;
    }

int main(){
    
}