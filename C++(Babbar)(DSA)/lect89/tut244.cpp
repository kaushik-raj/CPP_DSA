//  code link :-  https://www.naukri.com/code360/problems/detect-cycle-in-a-directed-graph_1062626?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//                                  Cycle Detetion in Directed Graph using DFS 

#include<bits/stdc++.h>
bool DFSCycleDetection(int node , unordered_map<int , bool> &visited ,  unordered_map<int , bool> & DFSVisited , unordered_map<int , list<int >> & adjList ){
  // marks the node as visited
  visited[node]=true;
  DFSVisited[node]=true;

  // loop to traverse all his neighbour nodes
  for(auto neighbour : adjList[node]){
    if(!visited[neighbour]){
      bool ans = DFSCycleDetection(neighbour , visited , DFSVisited , adjList);
      if(ans){
        return true;
      }
    }
    else if(DFSVisited[node]){
      return true;
    }
  }

  // as we have to back track form this node ,
  //  so me mark it as unvisited in DFS ans return false , as no cycle found till now
  visited[node]=false;
  return false;
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // create a adjList List.
  unordered_map<int , list<int >> adjList;
  for(int i =0;i<edges.size();i++){
    int u = edges[i].first;
    int v = edges[i].second;

    adjList[u].push_back(v);
  }

  // create the D.S to use 
  unordered_map<int , bool> visited;
  unordered_map<int , bool> DFSVisited;
  // loop foe all nodes call
  for(int i =0 ; i< n ; i++){
    if(!visited[i]){
      bool ans = DFSCycleDetection(i , visited , DFSVisited , adjList);
      if(ans){
        return true;
      }
    }
  }
  return false;
}

int main(){
    
}