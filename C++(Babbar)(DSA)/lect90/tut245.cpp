// code link :- https://www.naukri.com/code360/problems/topological-sort_982938?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//                                      Toplogical Sort

void topoSort(int node ,unordered_map<int , list<int>>& adjList ,vector<bool>& visited ,  stack<int>& s ){
    // mark are visited
    visited[node]=true;

    // loop to visit each neighbour of node.
    for(auto neighbour : adjList[node]){
        if(!visited[neighbour]){
            topoSort(neighbour , adjList , visited , s);
        }
    }
    // backtrak karte waqt node to stack me puch karna hai .
    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // create the adjList
    unordered_map<int , list<int>> adjList;
    for(int i=0 ; i<e;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
    }

    // create the D.S
    vector<bool> visited(v);
    stack<int> s;

    for(int i=0 ; i<v ; i++){
        if(!visited[i]){
            topoSort(i , adjList , visited , s);
        }
    }

    vector<int> ans;

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}

int main(){
    
}