#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int FindUnique(int arr[],int n){
    //              Method 01

    // sort(arr, arr + n);
    // for(int i=0;i<n-1;i++){
    //     if(arr[i]!=arr[i+1]){
    //         return arr[i];
    //     }
    // }
    // return 0;


    //              Method 02

    int ans = 0;
    for(int i=0; i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main () {
    int size=7;
    int arr[size]={2,3,1,6,3,6,2};
    int uni = FindUnique(arr , size);
    cout<<uni<<endl;
    return 0;
}