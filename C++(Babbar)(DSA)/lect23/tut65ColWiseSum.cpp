#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void colWiseSum(int arr[][3],int n , int m){
     
    for(int col=0;col<n;col++){
        int sum =0;
        for(int row=0;row<m;row++){
            sum +=arr[row][col];
        }
        cout<<sum<<endl;
    };

}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    colWiseSum(arr,3,3);
    
}