#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool issorted(int arr[], int size){
    if(size==0 || size==1)
        return true;
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return issorted(arr+1,size-1);
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size = 5;
    cout<<issorted(arr , size);
}