// code link :- https://www.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr , int size , int i){
        int largest = i;
        int left = 2*i+1;
        int right = 2*i + 2;
        
        if(left < size && arr[largest]<arr[left]){
            largest = left;
        };
        if(right < size && arr[largest] <arr[right]){
            largest = right ;
        };
        
        if(largest !=i){
            swap(arr[largest],arr[i]);
            
            heapify(arr , size , largest );
        }
        
    }
    
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // merging thr two arraays
        vector<int> ans;
        for(auto i : a){
            ans.push_back(i);
        };
        for(auto i : b){
            ans.push_back(i);
        };
        
        
        // heapify the ans array
        int size = ans.size();
        for(int i = size/2 -1 ; i>=0 ;i--){
            heapify(ans , size , i);
        }
        
        return ans;
    }

int main(){
    
}