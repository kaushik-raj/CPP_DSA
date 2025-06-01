#include<iostream>
using namespace std;
int pivot(int arr[] , int n){

    int s = 0,e = n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s= mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s  ; 
    // return e;   // bcz , s and e are at the same place at the end of the program . 
};

int main () {

    int n = 5;
    int arr[n]= {7,8,1,2,3};
    int a = pivot(arr , n);
    cout<<"Index of the pivot element in the arr . "<<a;
    return 0;
    
}