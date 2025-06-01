// code link :- https://leetcode.com/problems/move-zeroes/description/
// code number :- 283
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    void moveZeroes(vector<int>& nums) {
        int i =0 ;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }

int main(){
    vector<int> a={0,1,0,2,3,0};
    moveZeroes(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}