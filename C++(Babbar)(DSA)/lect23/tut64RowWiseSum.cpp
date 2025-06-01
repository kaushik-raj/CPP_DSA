#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void RowWiseSum(int arr[][3],int n , int m){
     
    for(int row=0;row<n;row++){
        int sum =0;
        for(int col=0;col<m;col++){
            sum +=arr[row][col];
        }
        cout<<sum<<endl;
    };

}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    RowWiseSum(arr,3,3);
    
}