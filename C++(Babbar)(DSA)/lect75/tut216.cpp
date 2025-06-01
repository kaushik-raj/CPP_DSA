// code link :- https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kthSmallest(vector<int> &arr, int k) {
        
        
        int n = arr.size();
        // create a MAx heap for thr first k elements 
        priority_queue<int> pq;
        for(int i = 0; i<k ;i++){
            pq.push(arr[i]);
        }
        
        // compairing the first element of heap , with the rest of the elements 
        for(int i = k ; i<n;i++ ){
            if(arr[i]<pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        
        // return the top of the heap , bcz , that will the kth smallest element 
        int ans = pq.top();
        return ans;
    }

int main(){
    
}