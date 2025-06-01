// code link :- https://www.naukri.com/code360/problems/shortest-path-in-an-unweighted-graph_981297?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//                                      shortestPath in Unweighted graph

vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	// create a adjList
	unordered_map<int , list<int>> adjList;
	for(int i=0 ; i<edges.size();i++){
		int u = edges[i].first;
		int v = edges[i].second;

		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}

	// create the D.s for this 
	unordered_map<int , bool > visited;
	unordered_map<int , int > parent;
	queue<int> q;
	q.push(s);
	visited[s]=true;
	parent[s]=-1;

	while(!q.empty()){
		int front = q.front();
		q.pop();

		for(auto i:adjList[front]){
			if(!visited[i]){
				q.push(i);
				visited[i]=true;
				parent[i]=front;
			}
		}
	}

	// Till here we got the parent vector , which we needed.

	vector<int> ans;
	// as we are backtracking , so we are making the curretNode to point at the destination
	int curretNode = t;
	ans.push_back(curretNode);

	while(curretNode != s){
		curretNode = parent[curretNode];
		ans.push_back(curretNode);
	}

	reverse(ans.begin() , ans.end());
	return ans;
}


int main(){
    
}