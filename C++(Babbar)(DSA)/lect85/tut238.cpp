#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//                                  Adjacency List

class graph{

    public:
        unordered_map<int , list<int>> adj;

        void addedge(int u , int v , bool direction){
            // direction =0 : means undirected graph
            // direction =1 : means directed graph

            // creating an edge from u to v
            adj[u].push_back(v);
            // if undirected graph
            if(!direction){
                adj[v].push_back(u);
            }   
        }

        void printadjList(){
            for(auto i:adj){
                cout<< i.first << " -> ";
                for(auto j: i.second){
                    cout<<j<<", ";
                }
                cout<<endl;
            }
        }
};

int main(){
    int n ;
    cout<<"Enter the no.of nodes in the graph"<<endl;
    cin>>n;

    int m ;
    cout<<"Enter the no.of edges in the graph"<<endl;
    cin>>m;

    graph g;
    // for taking all the edges data
    for(int i =0 ;i<m;i++){
        int u , v;
        cin>>u  >> v;
        // for undiected graph
        g.addedge(u,v,0);
    }

    g.printadjList();

}