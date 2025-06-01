#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[] ,int st , int en , int key){
    if(st>en){
        return -1;
    }
    int mid = st + (en-st)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]<key){
         return binarySearch(arr , mid+1 , en  , key);
    }
    else{
        return binarySearch(arr , st , mid -1  , key);
    }
    
}

int main(){
    int arr[5]={3,5,1,2,6};
    int size = 5;
    int key = 5;
    int st =0;
    cout<<binarySearch(arr ,st, size-1, key);
}