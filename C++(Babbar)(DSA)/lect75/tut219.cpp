// code link :- https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long minCost(vector<long long>& arr) {
        priority_queue<long long, vector<long long>, greater<long long> > pq;
        long long n = arr.size();
        for(int i =0 ; i<n ;i++){
            pq.push(arr[i]);
        };
        
        long long cost = 0;
        
        while(pq.size()>1){
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            
            long long  sum = a+b;
            cost += sum;
            pq.push(sum);
        }
        return cost;
    }

int main(){
    
}