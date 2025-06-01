// code link :- https://www.naukri.com/code360/problems/bfs-in-graph_973002?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//                              BFS in Graph


#include<bits/stdc++.h>

void BFS(vector<vector<int>> &adj , unordered_map<int , bool >& visited , vector<int> & ans){
    queue<int> q;
    q.push(0);
    visited[0]=1;
    
    while(!q.empty()){
        int frontNode= q.front();
        q.pop();

        // store frontNode into ans
        ans.push_back(frontNode);

        // traversal all neighbour of front
        for(auto i:adj[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    vector<int> ans;
    unordered_map<int , bool > visited;
    
    BFS(adj , visited , ans);
    return ans;
}

int main(){
    
}