//  Heap sort 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[200];
    int size;

    heap(){
        arr[0]= -1;
        size = 0;
    }

    void insert(int val){
        size = size +1;
        int index = size;
        arr[index] = val;

        while(index >1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent] , arr[index]);
                index = parent;     //The line " index = parent; " updates index to the parent's position so that we can continue to check further up the tree in the loop . 
            }
            else{
                return ;
            }
        }
    }

    void print(){
        for(int i=1 ; i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deleteFromHeap(){
        if(size==0){
            cout<<"No element to delete"<<endl;
            return ;
        }

        // step 1 moving the last element to first element
        arr[1]=arr[size];

        // step 2 deleting the last node
        size--;
        
        // moving the first element to its right place
        int i =1 ;
        while(i<size){

            int leftIndex = 2*i;
            int rightIndex = (2*i)+1;

            // checking where to move the first element (This is the case of max heap)
            if(leftIndex <size && arr[leftIndex] > arr[i]){
                swap(arr[leftIndex] , arr[i]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[rightIndex] > arr[i]){
                swap(arr[rightIndex],arr[i]);
                i = rightIndex;
            }
            else{
                return;
            }
        }
        
    }

    
};

void heapify(int arr[], int n, int i)
{   
    // "ith" element is the root element, in this iteration which we have to fix at the right place

    int largest = i;
    int left = i * 2;
    int right = (i * 2) + 1;

    // checking if there is any higher number to its left or right or not (Max heap)
    if ((left <= n) && (arr[largest] < arr[left]))
    {
        largest = left;
    }
    if ((right <= n) && arr[largest] < arr[right])
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

void heapSort(int arr[] , int n ){
    int size = n;

    while(size >1){
        // step 1  :- swaping the first element with last one
        swap(arr[size] , arr[1]);
        // step 2 :- resucing the size
        size--;

        // step 3 :- arranging the element which is at the top , so that is will remain as a heap .
        heapify(arr , size , 1);
    }
}

int main(){

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    h.deleteFromHeap();
    h.print();

    // creating a heap from array 
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
    
    // passing the heaped array into heapsort .
    heapSort(arr , num); 

    cout<<"Printing the sorted array now"<<endl;
    for(int i=1 ;i<=num ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}