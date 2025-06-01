#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int summ(int arr[],int size){
    if(size==0){
        return 0;
    };
    return arr[0]+summ(arr+1,size-1);
}
int main() {
    int arr[5]={1,2,3,4,5};
    int size = 5;
    cout<<summ(arr , size);

    return 0;
}

