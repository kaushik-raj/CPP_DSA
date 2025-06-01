// code link :- https://www.naukri.com/code360/problems/maximum-frequency-number_920319?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int , int > m;

    int maxfeq =0;
    int maxAns =0;
    for(int i =0 ; i<n ; i++){
        m[arr[i]]++;
        maxfeq = max(maxfeq , m[arr[i]]);
    }    

    for(int i=0 ; i<n ; i++){
        if(maxfeq==m[arr[i]]){
            maxAns = arr[i];
            break;
        }
    }

    return maxAns;
}

int main(){
    
}