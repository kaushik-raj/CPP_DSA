// code link :- https://www.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> verticalOrder(Node *root)
    {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        map<int , map<int , vector<int> > > nodes;
        queue< pair<Node* , pair<int ,int> > > q;
        
        q.push(make_pair(root, make_pair(0,0)));
        while(!q.empty()){
            
            pair<Node* , pair<int ,int> > temp = q.front();
            q.pop();
            
            // now we extract the components from the queue elemnets
            Node* frontNode = temp.first;
            int HD = temp.second.first;
            int level = temp.second.second;
            
            // psuh the values into the data strucute we created 
            nodes[HD][level].push_back(frontNode->data);
            
            if(frontNode->left){
                q.push(make_pair(frontNode->left ,make_pair(HD-1 , level+1)));
            }
            if(frontNode->right){
                q.push(make_pair(frontNode->right , make_pair(HD+1 , level+1)));
            }
            
        }
        
        for(auto i : nodes){
            for(auto j: i.second){
                for(auto k : j.second){
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }

int main(){
    
}