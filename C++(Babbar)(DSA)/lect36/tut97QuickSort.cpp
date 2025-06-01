#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(int arr[] , int s , int e){
    int pivot = arr[s];

    // count the no.of smaller element in arr than pivot .
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    // Place pivot at the right position 
    int PivotIndex = s+count;
    swap(arr[PivotIndex],arr[s]);

    // swaping smaller element to the left and bigger element to the right 
    int i=s,j=e;
    while(i<PivotIndex && j>PivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<PivotIndex && j>PivotIndex){
            swap(arr[i],arr[j]);
        }
    }
    return PivotIndex;
}

void QuickSort(int arr[], int s , int e){
    if(s>=e){
        return ;
    }
    // finding the partition index 
    int p =partition(arr , s,e);
    // Applying Quicksort to the right and left part of the partition index to sort the whole array .
    QuickSort(arr , s , p-1);
    QuickSort(arr , p+1 , e);
}

int main(){
    int arr[10]={3,2,1,4,9,8,7,6,5,0};
    QuickSort(arr , 0 , 9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}