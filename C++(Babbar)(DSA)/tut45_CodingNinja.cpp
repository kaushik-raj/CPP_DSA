// code link :- https://www.naukri.com/code360/problems/reverse-the-array_1262298?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio3


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr , int m){
    int start = m+1;
    int end = arr.size()-1;
    while(start<=end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}
int main(){
    vector<int> arr ={1,2,3,4,5,6,7,8,9,10,11};
    int m=3;
    reverseArray(arr,m);
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}


