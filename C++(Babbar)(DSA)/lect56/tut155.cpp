// code link :- https://leetcode.com/problems/largest-rectangle-in-histogram/
// code number :- 84
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {

    vector<int> nextSmallestElement(vector<int> arr , int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=n-1 ; i>=0 ; i--){
            int curr = arr[i];
            while(s.top()!= -1 && arr[s.top()] >= curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }

     vector<int> preSmallestElement(vector<int> arr , int n){
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for(int i=0 ; i<n ;i++){
            int curr = arr[i];
            while(s.top()!= -1 && arr[s.top()] >= curr){
                s.pop();
            }
            ans[i]=s.top();
            s.push(i);
        }
        return ans;
    }

public:
    int largestRectangleArea(vector<int>& heights) {
        // finding the width of the total graph 
        int n= heights.size();

        // create an array to store the nextSmallest of every index . 
        vector<int> next(n);
        next = nextSmallestElement(heights , n);

        // create an array to store the preSmallest of every index . 
        vector<int> pre(n);
        pre = preSmallestElement(heights , n);

        // finding the max area
        int area = -100;
        for(int i=0;i<n;i++){
            int l = heights[i];
            
            // sprcial case 
            if(next[i]==-1){
                next[i]=n;
            }
            int b = next[i]-pre[i]-1;
            int newArea = l*b;
            area = max(newArea , area );
        }
        return area;
    }
};

int main(){
    
}