// code link :- https://www.naukri.com/code360/problems/rat-in-a-maze_1215030?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 

bool isSafe(int newx , int newy ,vector<vector<bool>> vis,
            vector < vector < int >> arr , int n ){
    if((newx>=0 && newx<n) && (newy>=0 && newy<n) &&
         (vis[newx][newy]==0) && (arr[newx][newy]==1) ){

        return true;
    }
    else{
        return false;
    }
};

void solve(int x , int y ,vector < vector < int >>& arr , int n , vector<string>& ans ,
            vector<vector<bool>>& vis , string path  ){
    // base case
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return ;
    }

    // all the 4 movement for the mouse 
    // Down
    vis[x][y]=1;
    if(isSafe(x+1 , y , vis ,arr , n)){
        solve(x+1 , y , arr ,n , ans , vis , path+'D' );
    }
    // left
    if(isSafe(x , y-1 , vis ,arr , n)){
        solve(x , y-1 , arr ,n , ans , vis , path+'L' );
    }
    // Right
    if(isSafe(x , y+1 , vis ,arr ,n)){
        solve(x , y+1 , arr ,n , ans , vis , path+'R' );
    }
    // Up
    if(isSafe(x-1 , y , vis ,arr,n)){
        solve(x-1 , y , arr ,n , ans , vis , path+'U' );
    }
    vis[x][y]=0;
};


vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    vector<string> ans;
    vector<vector<bool>> visited (n , vector<bool> (n,0));
    string path = "";
    if (arr[0][0] == 0 || arr[n-1][n-1] == 0) {
        return ans;
    }
    solve(0 , 0 , arr , n, ans , visited , path);
    return ans;
}

int main(){
    
}