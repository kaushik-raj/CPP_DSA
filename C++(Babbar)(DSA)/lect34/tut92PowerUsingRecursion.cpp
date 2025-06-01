#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Power(int a , int b){
    // Base cases
    if(b==1){
        return a;
    }
    if(b==0){
        return 1;
    }
    // Recursive call 
    int ans = Power(a , b/2);

    // conditions in calling 
    if(b%2==0){
        return  ans* ans;
    }
    else{
        return a *ans * ans;

    }
}

int main(){
    int a =2;
    int b=10;
    int ans = Power(a , b);
    cout<<ans;
}