// code link :- https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        
        map<int , int> Topnodes;
        queue<pair<Node* , int>> q;
        
        q.push(make_pair(root , 0));
        while(!q.empty()){
            pair<Node* , int>  temp = q.front();
            q.pop();
            
            // extract the elemenst from the temp 
            Node* FrontNode = temp.first;
            int HD = temp.second;
            
            //if one entry is there for an HD , then do nothing , if there is no entry for that HD , then insert that elemnt 
            if(Topnodes.find(HD)== Topnodes.end()){
                Topnodes[HD] = FrontNode->data;
            }
            
            // now for level order traversal , we move the nodes
            if(FrontNode->left){
                q.push(make_pair(FrontNode->left , HD-1));
            }
            if(FrontNode->right){
                q.push(make_pair(FrontNode->right , HD+1));
            }
        }
        for(auto i : Topnodes){
            ans.push_back(i.second);
        }
        return  ans;
    }

int main(){
    
}