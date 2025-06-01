// code link :- https://www.naukri.com/code360/problems/subsequences-of-string_985087?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
void solve (string str , vector<string>& ans , string output , int index ){
	if(index >= str.length()){
		if(output.length() >0)
			ans.push_back(output);
		return ;
	}

	// exclusive call
	solve(str, ans , output , index+1);

	// inclusive call
	char element = str[index];
	output.push_back(element);
	solve(str , ans , output , index+1);
} 
vector<string> subsequences(string str){
	
	vector<string> ans ;
	string output ="";
	int index =0;
	solve(str , ans , output , index);
	return ans ;
}


int main(){
    
}