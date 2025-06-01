// code link :- https://leetcode.com/problems/merge-sorted-array/
// code number :- 88
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1 = m-1;
        int n2 = n-1;
        int last = m+n-1;
        while(n1>=0 && n2>=0){
            if(nums1[n1]>=nums2[n2]){
                nums1[last]=nums1[n1];
                n1--;
                last--;
            }
            else{
                nums1[last]=nums2[n2];
                n2--;
                last--;
            }
        }
        while(n1>=0){
            nums1[last]=nums1[n1];
            last--;
            n1--;
        } 
        while(n2>=0){
            nums1[last]=nums2[n2];
            n2--;
            last--;
        }
    };

int main(){
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;
    merge(nums1 , m , nums2 , n);

    for(int i=0 ; i<m+n;i++){
        cout<<nums1[i]<<" ";
    }
}