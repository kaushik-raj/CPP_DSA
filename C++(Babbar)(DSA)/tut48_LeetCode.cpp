// code link :- https://leetcode.com/problems/rotate-array/description/
// code number :- 189

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void rotate(vector<int>& nums , int k){
    vector<int> temp(nums.size());
    for(int i=0;i<nums.size();i++){
        temp[(i+k)%nums.size()]=nums[i];
    };

    // copy elements form temp to nums.
    nums=temp;
};

int main(){
    vector<int> nums={1,2,3,4,5,6,7,8,9};
    int k= 4;
    rotate(nums,k);
    for(int i=0 ; i<nums.size() ; i++){
        cout<<nums[i]<<" ";
    }
}