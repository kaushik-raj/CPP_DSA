// code link :- https://leetcode.com/problems/permutations/submissions/1309241653/
// code number :- 46
// codeStudio lin :- https://www.codingninjas.com/codestudio/problems/permutations-of-a-string_985254

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, vector<vector<int>> &ans, int index)
{
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        solve(nums, ans, index + 1);

        // backtrack kar rahe hai to swap wale change ko undo karna hoga
        swap(nums[index], nums[i]);
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);
    return ans;
}

int main()
{
    vector<int> nums ={1,2,3,4};
    vector<vector<int>> ans =permute(nums);
    for(const auto& i : ans){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<" ";
    }
}