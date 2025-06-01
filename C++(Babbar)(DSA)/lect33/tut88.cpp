#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool linearSeach(int arr[], int size , int key){
    if(size==0){
        return 0;
    }
    if(arr[0]==key){
        return 1;
    }
    return linearSeach(arr+1,size-1,key);
}

int main(){
    int arr[5]={3,5,1,2,6};
    int size = 5;
    int key = 5;
    cout<<linearSeach(arr , size, key);
}