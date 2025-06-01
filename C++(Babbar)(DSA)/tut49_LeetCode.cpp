// code link :- https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/
// code number:- 1752

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


   bool check(vector<int>& nums) {
        int count =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%nums.size()]){
                count++;
            }
        };
       return count<=1;
};

int main(){
    vector<int > arr = {2,1,3,4};
    cout<<check(arr);
    
}