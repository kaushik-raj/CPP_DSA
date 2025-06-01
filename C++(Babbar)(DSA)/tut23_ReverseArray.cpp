#include<iostream>
using namespace std;

void reverse(int arr[] , int size){
        for(int i=0;i<size/2;i++){
            // int front = arr[i];
            // int rear = arr[size-1-i];
            // front  = front + rear;
            // rear = front - rear;
            // front = front - rear;
            // arr[i]=front;
            // arr[size-1-i]=rear;
            swap(arr[i] , arr[size-1-i]);
        }
}

void print(int arr[],int size){
    for(int i =0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main () {
    int size =9;
    int arr[size]={1,2,3,4,5,6,7,8,9};
    reverse(arr , size);
    print(arr,size);
    return 0;
}