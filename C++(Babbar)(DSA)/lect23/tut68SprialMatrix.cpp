#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();

    int strow = 0;
    int stcol = 0;
    int enrow = row - 1;
    int encol = col - 1;
    int count = 0;
    int total = row * col;
    while (count < total)
    {

        // starting row
        for (int index = stcol; count < total && index <= encol; index++)
        {
            ans.push_back(matrix[stcol][index]);
            count++;
        }
        strow++;
        // ending col
        for (int index = strow; count < total && index <= enrow; index++)
        {
            ans.push_back(matrix[index][encol]);
            count++;
        }
        encol--;
        // ending row
        for (int index = encol; index >= stcol && count < total; index--)
        {
            ans.push_back(matrix[enrow][index]);
            count++;
        }
        enrow--;
        // starting col
        for (int index = enrow; index >= strow && count < total; index--)
        {
            ans.push_back(matrix[index][stcol]);
            count++;
        }
        stcol++;
    }
    return ans;
};

int main()
{
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ansarr= spiralOrder(arr);
    for(int i=0;i<ansarr.size();i++){
        cout<<ansarr[i]<<" ";
    };

}