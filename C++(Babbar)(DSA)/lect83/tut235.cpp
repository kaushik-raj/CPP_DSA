// code link :- https://www.naukri.com/code360/problems/the-n-queens-puzzle_981286?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
//                      N-Queens Problem 

bool isSafe(int row , int col , vector<vector<int>>&board , int n){
	// check for left row
	int x = row ;
	int y = col;
	while(y>=0){
		if(board[x][y]==1){
			return false;
		}
		y--;
	}

	// check for up diagonal 
	x = row ;
	y = col;
	while(x>=0 && y>=0){
		if(board[x][y]==1){
			return false;
		}
		x--;
		y--;
	}

	// check for low diagonal 
	x = row;
	y = col;
	while(x<n && y>=0){
		if(board[x][y]==1){
			return false;
		}
		x++;
		y--;
	}

	return true;	
};

void addsolution(vector<vector<int>>& ans , vector<vector<int>>& board , int n){
	vector<int> temp;
	for(int i =0 ; i <n ; i++){
		for(int j =0 ; j<n;j++){
			temp.push_back(board[i][j]);
		}
	}
	ans.push_back(temp);
}
void solve(int col , vector<vector<int>>& ans , vector<vector<int>>&board , int n){
	// base case
	if(col==n){
		addsolution(ans , board , n);
        // we can also remove this return statement.
		return ;
	}

	// we have to check for each row for this col
	for(int row =0 ; row<n ; row++ ){
		// if queen is safe to place at that row of that col
		if(isSafe(row , col , board , n)){
			// place the queen
			board[row][col]=1;

			// recursive call for next col
			solve(col+1 , ans , board , n);

			// backtraking , so remove the queen too.
			board[row][col]=0;
		}
	}

}

vector<vector<int>> nQueens(int n)
{
	vector<vector<int>> ans;
	vector<vector<int>> board(n , vector<int>(n,0));

	int col =0;
	solve(col , ans , board , n);
	return ans;
	
}

int main(){
    
}