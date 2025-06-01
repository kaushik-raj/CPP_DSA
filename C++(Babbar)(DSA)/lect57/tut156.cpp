// code link :- https://www.geeksforgeeks.org/problems/the-celebrity-problem/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        stack<int> s ;
        int n = mat.size();
        for(int i=0 ; i<n;i++){
            s.push(i);
        }
        while(s.size() >1){
            
            // find two numbers from the stack
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(mat[a][b]==1){
                s.push(b);
            }
            else{
                s.push(a);
            }
            
        }
        // the rest which is inside the stack is a potential celebrity .
        int cele = s.top();
        
        for(int i =0 ; i<n;i++){
            if(cele != i && mat[cele][i]==1){
                return -1;
            }
            if(cele != i && mat[i][cele]==0){
                return -1;
            }
        }
        return cele;
    }
};

int main(){
    // Sample matrix
    vector<vector<int>> mat = {
        {0, 1, 1},
        {0, 0, 1},
        {0, 0, 0}
    };

    Solution solution;
    int result = solution.celebrity(mat);

    if (result == -1) {
        cout << "There is no celebrity in the party." << endl;
    } else {
        cout << "The celebrity is person " << result << "." << endl;
    }

    return 0;
}