// code link - https://leetcode.com/problems/subsets/
// code number :- 78 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solution(vector<int> nums, vector<vector<int>> &ans, vector<int> output, int index)
{
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // Exclude call
    solution(nums, ans, output, index + 1);

    // include call
    int element = nums[index];
    output.push_back(element);
    solution(nums, ans, output, index + 1);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solution(nums, ans, output, index);
    return ans;
}

int main()
{
    vector<int> arr ={1,2,3};
    vector<vector<int>> ans=subsets(arr);
    for(const auto& innervec : ans){
        cout<<"[ ";
        for(int ans : innervec){
            cout<<ans<<",";
        }
        cout<<"],";
    }
}