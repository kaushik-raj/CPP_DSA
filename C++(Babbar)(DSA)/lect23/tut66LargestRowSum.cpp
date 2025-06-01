#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int largestRowSum(int arr[][3],int n, int m){
    int maxi= -1;
    int ansrow = -1;
    for(int row=0;row<n;row++){
        int sum =0;
        for(int col =0;col<m;col++){
            sum +=arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            ansrow=row;
        }

    }
    return ansrow;
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int ans = largestRowSum(arr,3,3);
    cout<<"The row with maximun sun of all the elements in the row is "<<ans<<endl;
}