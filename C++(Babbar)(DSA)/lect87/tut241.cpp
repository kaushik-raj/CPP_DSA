// code link :- https://www.naukri.com/code360/problems/dfs-traversal_630462?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//                                      DFS Traversal 

#include<bits/stdc++.h>

void dfs(int vertex ,unordered_map<int , list<int> >& adjList, vector<int>&compo , unordered_map<int , bool>& visited ){
    // push the vertex into the temporary solution.
    compo.push_back(vertex);
    visited[vertex]=true;

    // loop to visit each vertex which are the neighbour of the current node
    // har connected nodes ke liye call kar diye hai 
    for(auto i : adjList[vertex]){
        if(!visited[i]){
            dfs(i , adjList , compo , visited);
        }
    }  
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // create a adjList
    unordered_map<int , list<int>> adjList;
    for(int i=0 ;i <edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    unordered_map<int , bool> visited;
    vector<vector<int>> ans;
    // For traversing each note ,as it a diconnected graph so we have to use a loop.
    for(int i=0;i<V;i++){
        if(!visited[i]){
            vector<int> compo;
            dfs(i , adjList , compo , visited);
            ans.push_back(compo);
        }
            
    }
    return ans;
}

int main(){
    
}