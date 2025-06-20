//link =  https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&leftPanelTab=0
#include <bits/stdc++.h>
#include <vector>
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	
	int i=0;
	int j=0;
	vector<int> ans;
	while(i<n && j<m){
		if(arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else if (arr1[i]<arr2[j]){
			i++;
		}
		else{
			j++;
		}
	}
	return ans;
}