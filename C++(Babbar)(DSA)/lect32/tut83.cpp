// code link :- https://leetcode.com/problems/fibonacci-number/submissions/1301832218/
// code number :- 509
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fib( int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
     return fib(n-1)+fib(n-2);
    
}


int main(){
    int index = 8;
    int ans = fib(8);
    cout<<ans;
}