// code link :- https://www.naukri.com/code360/problems/k-th-largest-sum-contiguous-subarray_920398?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getKthLargest(vector<int> &arr, int k)
{
	priority_queue<int , vector<int> , greater<int> > pq;
	int sum = 0;
	for(int i = 0 ; i< arr.size() ;i++){
		sum = 0 ;
		for(int j =i ;j<arr.size();j++){
			sum+=arr[j];
			if(pq.size()<k){
				pq.push(sum);
			}
			else{
				if(pq.top()<sum){
					pq.pop();
					pq.push(sum);
				}
			}
		}
	}; 
	return pq.top();
	
}

int main(){
    
}