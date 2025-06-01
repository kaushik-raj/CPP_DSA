// code link :- https://www.geeksforgeeks.org/problems/queue-reversal/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:

    //      Approach -1 
    queue<int> rev(queue<int> q)
    {
        stack<int> s;
        
        while(!q.empty()){
            int element = q.front();
            q.pop();
            s.push(element);
        }
        while(!s.empty()){
            int ele = s.top();
            s.pop();
            q.push(ele);
        }
        return q;
    }

    // Approach -2 


    void solve(std::queue<int>& q) {
        // Base case
        if(q.empty()){
            return;
        }
        // Removing first element
        int ele = q.front();
        q.pop();
        
        // Recursive call
        solve(q);
        
        // Adding the element at the end
        q.push(ele);
    }

};

int main(){
    
}