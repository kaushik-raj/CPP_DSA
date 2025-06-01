// code link :- https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    
    
    deque<long long int> dq;
    vector<long long > ans;
    
    // for the first k element 
    for(int i=0 ; i<K;i++){
        if(A[i]<0){
            dq.push_back(i);
        }
    }
    
    // checking for the answer
    if(!dq.empty()){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
    
    // for the remaining indexs
    for(int i=K ; i<N;i++){
        // removing the element whihc is not a part of next window
        if(!dq.empty() && i-dq.front() >=K){
            dq.pop_front();
        }
        // adding the next element to make the window move
        if(A[i]<0){
            dq.push_back(i);
        }
        // checking for solution to be added to the ans vector
         if(!dq.empty()){
        ans.push_back(A[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
    }
    return ans;
 }

int main(){
    
}