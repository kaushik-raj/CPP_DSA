#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void SortArray(int arr[],int n){
    if(n==1 || n==0){
        return ;
    }
    int min = INT_MAX;
    int index = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min =arr[i];
            index =i;
        }
    }
    swap(arr[0],arr[index]);
    SortArray(arr+1, n-1);
}

int main(){
    int arr[5]={1,5,2,4,3};
    SortArray(arr , 5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}