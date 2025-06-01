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
            int largest = i;

            // Compare with left child
            if (leftIndex <= size && arr[leftIndex] > arr[largest]) {
                largest = leftIndex;
            }
    
            // Compare with right child
            if (rightIndex <= size && arr[rightIndex] > arr[largest]) {
                largest = rightIndex;
            }
    
            // If no swap needed, break
            if (largest == i) {
                return;
            }
    
            // Swap with the larger child
            swap(arr[i], arr[largest]);
            i = largest;    
        }
        
    }

    
};



int main(){

    heap h;
    h.insert(50);
    h.insert(57);
    h.insert(55);
    h.insert(52);
    h.insert(54);
    h.print();

    h.deleteFromHeap();
    h.print();


    
}