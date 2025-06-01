//  code link :-  https://www.naukri.com/code360/problems/detect-cycle-in-a-directed-graph_1062626?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//                      Cycle ditection in Directed graph using BFS.



vector<int> topologicalSort(vector < pair < int, int >> & edges, int n){
    // create the adjList 
    unorderd_map<int , list<int>> adjList;
    vector<int> indegree(v);
    for(int i =0 ; i<edges.size();i++){
        // -1 bcz , here the nodes no. where starting from 1 , so now they wil start with 0.
        int u = edges[i].first -1;
        int v = edges[i].second-1;

        adjList[u].push_back(v);
        // we can add the indegree here only 
        indegree[v]++;
    }

    queue<int> q;
    // push node with zero indegre into queue
    for(int i = 0; i < v; i++) {
        if(indegree[i] == 0) {
            q.push(i); 
        }
    }
    int count=0;
    // now just do the BFS thing
    while(!q.empty()){
        int front = q.front();
        count++;
        q.pop();
        // update the indgree of neighbour and if some become 0 , push into queue.
        for(auto i:adjLsit[front]){
            indegree[i]--;
            if(indegree[i]==0){
                q.push(i);
            }
        }
    }
    
    if(count==v){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    
}