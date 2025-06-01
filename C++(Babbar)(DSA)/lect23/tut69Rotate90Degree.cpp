// leectcode link :- https://leetcode.com/problems/rotate-image/submissions/1285916232/
// leetcode number:- 48
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix){

    // Transpose the matrix 
    for(int i=0;i<matrix.size();i++){
        for(int j=i;j<matrix[0].size();j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    // reversing each row
    int row=0;
    while(row<=matrix.size()-1){
        int i=0;
        int j=matrix.size()-1;
        while(i<j){
            swap(matrix[row][i++],matrix[row][j--]);
        }
        row++;
    }

}

int main(){
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(arr);
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
        cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    };
}