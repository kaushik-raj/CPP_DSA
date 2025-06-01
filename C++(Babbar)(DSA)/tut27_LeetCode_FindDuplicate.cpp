// code link = https://leetcode.com/problems/find-all-duplicates-in-an-array/submissions/ 
#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin() , nums.end());
        for(int i=0 ; i<nums.size()-1;){
            if(nums[i]==nums[i+1]){
                ans.push_back(nums[i]);
                i+=2;
            }
            else{
                i++;
            }
        }
        return ans;
    }
    void printvec(vector<int> arr){
         for (int x : arr)
        cout << x << " ";
    }
};

int main(){
    vector<int> arr{1};
    Solution obj;
    vector<int> ans = obj.findDuplicates(arr);
    obj.printvec(ans);
}