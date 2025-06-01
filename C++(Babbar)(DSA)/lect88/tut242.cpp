// code link :- https://www.naukri.com/code360/problems/cycle-detection-in-undirected-graph_1062670?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//                  Cycle detection in Unordered Graph


bool cdBFS(int vertex ,unordered_map<int , list<int>>& adjList ,unordered_map<int , bool>& visited ){
    // parent<child , father>
    unordered_map<int , int> parent;
    parent[vertex] = -1;
    queue<int> q;
    visited[vertex]=true;
    q.push(vertex);

    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto i:adjList[node]){
            // yani loop mil gya hai 
            if(visited[i]==true && i != parent[node]){
                return true;
            }
            // loop nahi mila , lakin unvisited node mila hia 
            else if(!visited[i]){
                visited[i]=true;
                q.push(i);
                parent[i]=node;
            }
        }
    }
    // yha tak loop nahi mila , yani loop nahi hai 
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
            bool ans = cdBFS(i  , adjList , visited);
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