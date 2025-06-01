// code link :-
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//                                              Simplest Distance in DAG

class graph{
    public:
    unordered_map<int , list<pair<int , int>>> adjList;

    void addEdge(int u , int v , int weight){
        pair<int , int> p = {v,weight};

        adjList[u].push_back(p); 
    }

    void printadj(){
        for(auto i : adjList){
            cout<<i.first<<"->"<<" ";
            for(auto j:i.second){
                cout<<"("<<j.first<<","<<j.second<<"), ";
            }
            cout<<endl;
        }
    }

    void dfs(int node , unordered_map<int , bool >& visited , stack<int>& s){
        visited[node]=true;

        // traversing all the neighbour
        for(auto i:adjList[node]){
            if(!visited[i.first]){
                dfs(i.first, visited , s);
            }
        }
        s.push(node);
    }

    void sortPath(int src , vector<int>& ans , stack<int>& s){
        ans[src] =0;

        // upadte the distance of all the neighbour nodes
        while(!s.empty()){
            int node = s.top();
            s.pop();

            if(ans[node]!=INT_MAX){
                // Loop for all neighbour of node. 
                for(auto i :adjList[node]){
                    if(ans[node] + i.second < ans[i.first]){
                        ans[i.first]= ans[node] + i.second;
                    }
                }
            }
        }
    }
};

int main(){
    graph g;


    g.addEdge(0,1,5);
    g.addEdge(0,2,3);
    g.addEdge(1,2,2);
    g.addEdge(1,3,6);
    g.addEdge(2,3,7);
    g.addEdge(2,4,4);
    g.addEdge(2,5,2);
    g.addEdge(3,4,-1);
    g.addEdge(4,5,-2);

    g.printadj();

    // now time to find the stack of topological sort . 
    stack<int> s;
    unordered_map<int , bool>visited;
    int n =6;

    for(int i =0 ; i<n;i++){
        if(!visited[i]){
            g.dfs(i , visited , s);
        }
    }
    // now we got the stack of topological sort 
    // now we move to the second part of the question.
    // to create the distance vector of smallest distance.

    vector<int> ans(n);
    for(int i =0 ; i< n;i++){
        ans[i]=INT_MAX;
    }

    int src = 1;

    g.sortPath(src , ans , s);

    cout<<"Sorted path from "<<src<<" to all nodes"<<endl;
    for(int i=0 ; i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}