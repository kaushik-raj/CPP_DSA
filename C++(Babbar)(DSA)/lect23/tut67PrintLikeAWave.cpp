#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ansarr;
    for(int col = 0;col<mCols;col++){
        if(col&1){
            for(int row = nRows-1;row>=0;row--){
                ansarr.push_back(arr[row][col]);
            }
        }
        else{
            for(int row = 0;row<nRows;row++){
                ansarr.push_back(arr[row][col]);
            }
        }
    }
    return ansarr;
}

int main(){
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ansarr= wavePrint(arr,3,3);
    for(int i=0;i<ansarr.size();i++){
        cout<<ansarr[i]<<" ";
    }
}