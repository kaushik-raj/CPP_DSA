#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void SortArray(int arr[] ,int n){
    if(n==1 || n==0){
        return ;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }
    SortArray(arr , n-1);
}

int main(){
    int arr[5]={1,5,2,4,3};
    SortArray(arr , 5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}