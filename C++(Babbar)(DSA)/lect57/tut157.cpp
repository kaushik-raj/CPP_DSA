// code link :- https://www.geeksforgeeks.org/problems/max-rectangle/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

class Solution{
  public:
  
    vector<int> nextSmallestElement(int* arr , int n){
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

     vector<int> preSmallestElement(int* arr , int n){
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
    int largestRectangleArea(int* heights , int n) {
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
  
    int maxArea(int M[MAX][MAX], int n, int m) {
        // computing the first row area
        int area = largestRectangleArea(M[0] , m);
        // computing area for all the other rows 
        for(int i = 1 ; i<n ;i++){
            for(int j =0 ;j<m;j++){
                
                if(M[i][j]!=0){
                    M[i][j] = M[i][j]+M[i-1][j];
                }
                else
                    M[i][j]=0;
            }
            
            // compute the area of the new row 
            int newArea = largestRectangleArea(M[i], m);
            area = max(area , newArea);
        }
        return area;
    }
};

int main(){
     // Define the matrix dimensions
    int n = 4; // number of rows
    int m = 4; // number of columns

    // Define the matrix
    int M[MAX][MAX] = {
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 0, 0}
    };

    // Create an instance of Solution
    Solution solution;

    // Call the maxArea function
    int max_area = solution.maxArea(M, n, m);

    // Output the result
    cout << "The maximum rectangular area of 1s is: " << max_area << endl;

    return 0;
}