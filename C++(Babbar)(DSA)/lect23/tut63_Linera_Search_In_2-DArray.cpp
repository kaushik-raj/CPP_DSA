#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool ispresent(int arr[][4],int target , int n, int  m){
    for(int row=0;row<n;row++){
        for(int col =0; col<m;col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    bool ans = ispresent(arr,11,3,4);
    cout<<ans<<endl;
}