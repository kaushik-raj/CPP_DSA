// code link :- https://www.naukri.com/code360/problems/longest-common-prefix_2090383?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// longest common Prefix

String LongestCommonPrefix(vector<string> &arr , int n){

    String ans = "";

    // loop for each char of first string
    for(int i = 0 ; i < arr[0].size();i++){
        char ch = arr[0][i];

        bool match = true;

        // loop to traverse the remaining string 
        for(int j =1 ; j<n ;j++){
            // not match 
            if(arr[j].size() > i || ch != arr[j][i]){
                match = false;
                break;
            }
        }
        if(match){
            ans.push_back(ch);
        }
        else{
            break;
        }
    }

    return ans;
}


int main(){
    
}