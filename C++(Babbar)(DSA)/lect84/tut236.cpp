// code Link :- https://www.naukri.com/code360/problems/sudoku-solver_699919?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//                                              Sudoku Solver



bool isSafe(int row , int col , vector<vector<int>>& board , int val){
    for(int i =0 ; i<9;i++){
        // for row 
        if(board[row][i]==val){
            return false;
        }

        // for col
        if(board[i][col]==val){
            return false;
        }

        // for the 3x3 matrix
        if(board[(3*(row/3) + i/3)][3*(col/3) + i%3]==val){
            return false;
        }

    }
    return true;
}

bool solve(vector<vector<int>>& board){

    for(int row =0 ; row<9;row++){
        for(int col=0 ; col<9;col++){
            // if a cell is empty
            if(board[row][col]==0){
                // try putting values from 1-9
                for(int val=1 ; val<=9;val++){
                    if(isSafe(row , col , board , val)){
                        board[row][col]=val;
                        // recursive call for all other blocks
                        bool aageSabSahiHai = solve(board);
                        // check if aagesab sahi hai ya nahi .
                        if(aageSabSahiHai){
                            return true;
                        }
                        else{
                            // backtrack
                            board[row][col]=0;
                        }
                    }
                }
                // agar yha tak pahuch gye ho , yani koi value fit nahi hui , so return false.
                return false;
            }
        }
    }
    // return true , bcz , saare value sahi se fill ho chuke hai .
    return true;
}

void solveSudoku(vector<vector<int>>& sudoku)
{
	solve(sudoku);
    return;
}


int main(){
    
}