// question link :- https://www.naukri.com/code360/problems/count-ways-to-reach-nth-stairs_798650?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_10
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int ways(int n){

    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }

    int ans = ways(n-1)+ways(n-2);
    return ans ;
}

int main(){
    int index = 5;
    int ans = ways(index);
    cout<<ans;
}
