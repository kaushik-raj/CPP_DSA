// code link :- https://www.geeksforgeeks.org/problems/burning-tree/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

Node* createMapping(map<Node*, Node*> &nodeToParent , int target , Node* root){
        
        Node* res = NULL;

        queue<Node* > q;
        q.push(root);
        nodeToParent[root] = NULL;
        
        while(!q.empty()){
            int size = q.size();
            // we are doing the level order traversal
            for(int i=0 ; i<size ; i++){
                Node* front = q.front();
                q.pop();
                
                if(front->data==target){
                    res = front;
                }
                
                if(front->left){
                    nodeToParent[front->left] = front;
                    q.push(front->left);
                }
                if(front->right){
                    nodeToParent[front->right] = front;
                    q.push(front->right);
                }
                
            }
            
        }
        return res;
    }

int burningTree(Node* targetNode , map<Node* , Node*> nodeToParent){
        map<Node* ,bool> visited;
        visited[targetNode] = 1;;
        
        int time =0;
        
        queue<Node*> q;
        q.push(targetNode);
        
        while(!q.empty()){
           
            bool flag = 0;
            int size = q.size();
            // we are doing the level order traversal
            for(int i=0 ; i<size ;i++){
                Node* front= q.front();
                q.pop();
                
                if(front->left && !visited[front->left]){
                    visited[front->left ] = 1;
                    q.push(front->left);
                    flag=1;
                }
                if(front->right && !visited[front->right]){
                    visited[front->right ] = 1;
                     q.push(front->right);
                    flag=1;
                }
                if(nodeToParent[front] && !visited[nodeToParent[front]]){
                    visited[nodeToParent[front]] = 1;
                    q.push(nodeToParent[front]);
                    flag=1;
                }
            }
            if(flag){
                time++;
            }
        }
        return time;
    }
    int minTime(Node* root, int target) 
    {
        
        // there are three step of this also :-
        // step 1 :- we first create a mapping of nodeToParent
        // step 2 :- finding the target node
        // step 3 :- burning the tree
        
        map<Node* , Node* > nodeToParent;
        Node* targetNode  = createMapping(nodeToParent , target , root);
        int ans = burningTree(targetNode , nodeToParent);
        return ans;
    }
int main(){
    
}