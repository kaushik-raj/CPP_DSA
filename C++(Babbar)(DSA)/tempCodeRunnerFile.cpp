#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int rev(int arr[] , int size){
    int sum = 0;
    for(int i=0 ; i<size+1 ; i++){
        sum += arr[size-i] * pow(10,size-i);
    }
    return sum;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 8;
    int ans = rev(arr , size);
    cout<<ans<<endl;
}