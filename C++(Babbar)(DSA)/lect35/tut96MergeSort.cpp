#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int merge(int arr[] , int s , int e){
    int inversion =0;
    int mid = (s+e)/2;
    int len1 = mid - s +1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];

    // copy array 
    int mainArrayIndex = s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex = mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }

    // Merging Two Sorted array
    int index1 = 0; 
    int index2 = 0;
    mainArrayIndex = s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
            inversion += len1-index1;
        }
    }
    while(index1<len1){
        arr[mainArrayIndex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++]=second[index2++];
    }
    delete []first;
    delete []second;
    return inversion;
}
int mergeSort(int arr[] , int s , int e){
    int inversion =0;
    if(s>=e){
        return inversion;
    }
    int mid = (s+e)/2;
    // left part sort karna hai
    inversion+=mergeSort(arr , s , mid);
    // right part sort karna hai 
    inversion+=mergeSort(arr , mid +1 , e);

    // merge
    inversion+=merge(arr , s ,e);
    return inversion;
}

int main(){
    int arr[8]={57, 38, 91, 10, 38 ,28, 79, 41};
    int inversion = mergeSort(arr , 0,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<inversion;
}