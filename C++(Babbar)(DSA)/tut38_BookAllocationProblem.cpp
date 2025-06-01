// codingninja code link = https://www.naukri.com/code360/problems/ayush-gives-ninjatest_1097574
#include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;

bool ispossibleSolution(vector<int> time, int n , int m , int mid){
	int chaptercount = 1;
	int timesum =0;
	for(int i=0;i<m;i++){
		if(time[i]+timesum <mid){
			timesum+=time[i];
		}
		else{
			chaptercount ++;
			if(time[i]<mid && chaptercount<m){
				return false;
			}
			timesum=time[i];

		}
	}
	return true;

};

int ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	int s =0 ;
	int e=0;
	for(int i=0 ; i<m;i++){
		e+=time[i];
	}
	int mid = (s + (e-s)/2);
	int ans=-1;
	while(s<e){
		if(ispossibleSolution(time,n,m,mid)){
			ans = mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		mid = (s + (e-s)/2);
	}
	return ans;
}


int main(){
    vector<int> vc{1 ,2 ,2 ,3 ,1};
    int m = 5;
	int n=3;
	int v = ayushGivesNinjatest(n,m,vc);
	cout<<v<<endl;
	return 0;
}