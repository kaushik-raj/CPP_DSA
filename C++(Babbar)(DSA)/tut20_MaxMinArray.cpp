#include<iostream>
using namespace std;
void Min(int arr[] , int size){
    int minq=INT_MAX;               // Inorder to find the min in a arr , we first start to comapre it with the maximum interger value.
    for(int i=1;i<size;i++){
        // if(arr[i]<=min){
        //     min=arr[i];
        // }
        minq = min(minq,arr[i]);
    }
    cout<<minq<<endl;
}
void Max(int arr[] , int size){
    int maxq=INT_MIN;               // Inorder to find the max in a arr , we first start to comapre it with the minimum interger value.
    for(int i=0;i<size;i++){
        // if(arr[i]>max){
        //     max=arr[i];
        // }
        maxq= max(maxq,arr[i]);
    }
    cout<<maxq<<endl;
}
int main () {
    int arr[10]={34,34324,3242,345,78,9,6,1,4,87654};
    int size=10;
    Min(arr , size);
    Max(arr , size);
   
    return 0;
}