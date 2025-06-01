// code link :- https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        stack<int> s;
        
        // pop from queue and puch into stack
        for(int i=0;i<k;i++){
            int num = q.front();
            q.pop();
            s.push(num);
        }
        // pop from stack and puch into back opf queue
        while(!s.empty()){
            int num = s.top();
            s.pop();
            q.push(num);
        }
        
        // fetch the elements that are after kth elements , poping them and then again pushing them in the back 
        int num = q.size() -k;
        // num count the exact no.of times while loop has to run . 
        
        while(num--){
            int a = q.front();
            q.pop();
            q.push(a);
        }
        return q;
    }
};


int main(){
    
}