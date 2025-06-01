// code link :- https://www.naukri.com/code360/problems/next-smaller-element_1112581?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int> ans(n);
    stack<int > s;
    s.push(-1);

    for(int i= n-1 ; i>=0;--i){
        int curr = arr[i];
        while(s.top()>=curr){
            s.pop();
        }
        // stack ka top element curr se chota hoga
        ans[i]=s.top();
        s.push(curr);
    }
    return ans;
}

int main(){
    
}