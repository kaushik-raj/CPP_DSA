// code link :- Heapify (max heap )
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{   
    // "ith" element is the root element, in this iteration which we have to fix at the right place

    int largest = i;
    int left = i * 2;
    int right = (i * 2) + 1;

    // checking if there is any higher number to its left or right or not (Max heap)
    if ((left < n) && (arr[largest] < arr[left]))
    {
        largest = left;
    }
    if ((right < n) && arr[largest] < arr[right])
    {
        largest = right;
    }

    // if there was any higher element , then now the "Largest" pointer will be pointing the larget element among the three .
    if (largest != i)
    {
        // we will swap the largest element with the "i th" index element
        swap(arr[largest], arr[i]);
        // heapify recursive call to move that swaped element to its right place (if not at right place)
        heapify(arr, n, largest);
    }
}

int main()
{
    int arr[6] = {-1 , 54,  53,55,52,50};
    int num =5 ;
    for(int i = num/2 ; i>0;i--){
        heapify(arr , num , i);
    }

    cout<<"Printing the array now"<<endl;
    for(int i=1 ;i<=num ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}