// Code Link :- https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>>&m, int n, int x, int y, vector<vector<int>> visited)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && (m[x][y] == 1) && (visited[x][y] == 0))
    {
        return true;
    }
    else{
        return false;
    }
}
void solve(vector<vector<int>> &m, int n, int x, int y, vector<vector<int>> &visited, vector<string> &ans, string path)
{
    // You have reached X , Y 
    
    // base case
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // check for Down movement
    int newx = x + 1;
    int newy = y;
    if (isSafe(m, n, newx, newy, visited))
    {
        path.push_back('D');
        solve(m, n, newx, newy, visited, ans, path);
        path.pop_back();
    }

    // check for left movement
    newx = x;
    newy = y - 1;
    if (isSafe(m, n, newx, newy, visited))
    {
        path.push_back('L');
        solve(m, n, newx, newy, visited, ans, path);
        path.pop_back();
    }

    // check for Right movement
    newx = x;
    newy = y + 1;
    if (isSafe(m, n, newx, newy, visited))
    {
        path.push_back('R');
        solve(m, n, newx, newy, visited, ans, path);
        path.pop_back();
    }

    // check for up movement
    newx = x - 1;
    newy = y;
    if (isSafe(m, n, newx, newy, visited))
    {
        path.push_back('U');
        solve(m, n, newx, newy, visited, ans, path);
        path.pop_back();
    }
    visited[x][y] = 0;
}
vector<string> findPath(vector<vector<int>> &m, int n)
{

    vector<vector<int>> visited = m;
    vector<string> ans;
    if (m[0][0] == 0)
    {
        return ans;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    int x = 0;
    int y = 0;

    string path = "";
    solve(m, n, x, y, visited, ans, path);
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n = 4;
    vector<vector<int>> m = {   {1, 0, 0, 0},
                                {1, 1, 0, 1}, 
                                {1, 1, 0, 0},
                                {0, 1, 1, 1}
                            };
    vector<string> ans = findPath(m , n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
