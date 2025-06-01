// code link :- https://www.naukri.com/code360/problems/topological-sort_982938?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e){
    // create the adjList 
    unorderd_map<int , list<int>> adjList;
    vector<int> indegree(v);
    for(int i =0 ; i<e;i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
        // we can add the indegree here only 
        indegree[v]++;
    }

    // there is other way to add degree
    for(auto i : adjList){
        for(auto j:i.second){
            indegree[j]++;
        }
    }
    queue<int> q;
    // push node with zero indegre into queue
    for(int i = 0; i < v; i++) {
        if(indegree[i] == 0) {
            q.push(i); 
        }
    }
    vector<int> ans;
    // now just do the BFS thing
    while(!s.empty()){
        int front = q.front();
        ans.push_back(front);
        q.pop();


        // update the indgree of neighbour and if some become 0 , push into queue.
        for(auto i:adjLsit[front]){
            indegree[i]--;
            if(indegree[i]==0){
                q.push(i);
            }
        }
    }
    return ans;

}

int main(){
    
}