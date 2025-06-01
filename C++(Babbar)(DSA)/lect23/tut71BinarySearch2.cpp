// code link :- https://leetcode.com/problems/search-a-2d-matrix-ii/description/
// code number:- 240

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int rowIndex = 0;
    int colIndex = col - 1;
    while (rowIndex < row && colIndex >= 0)
    {
        int element = matrix[rowIndex][colIndex];
        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            rowIndex++;
        }
        else
        {
            colIndex--;
        }
    }
    return 0;
};


int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};      // this input is correct(Co-insident ,  but we have to use other type of input in it) , according to the question .
    bool ans = searchMatrix(arr, 1);
    cout<<ans<<endl;
}