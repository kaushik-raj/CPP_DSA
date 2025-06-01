// code link :- https://www.naukri.com/code360/problems/cycle-detection-in-undirected-graph_1062670?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool cdDFS(int node , int parent , unordered_map<int , list<int>>& adjList , unordered_map<int , bool>& visited){
    visited[node] = true;
    
    for(auto i : adjList[node]){
        if(!visited[node]){
            bool ans = cdDFS(i , node , adjList , visited);
            if(ans){
                return true;
            }
        }
        else if(visited[node]==true && i != parent ){
            // cycle detecetd 
            return true;
        }
    }
    // agar yha tak cycle nahi mila hai , nahi he hoga 
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Create a adjList first.
    unordered_map<int , list<int>> adjList;
    for(int i =0 ; i< edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    unordered_map<int , bool> visited;
    // we use loop so that we don't miss any disconnected graph
    for(int i =0 ;i<n;i++){
        if(!visited[i]){
            bool ans = cdDFS(i ,-1 , adjList , visited);
            // agar cycle mil gya hai to aage check karne ke jarurat nahi hai .
            if(ans){
                return "Yes";
            }
        }
    }
    // agar abhi tak cycle nahi mila hai , to yani cycle hai he nahi.
    return "No";
}

int main(){
    
}