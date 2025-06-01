#include<iostream>
using namespace std;

void swapAlt(int arr[] , int size){
    int front = 0;
    int rear = 1;
    while(rear<=size-1){
        swap(arr[front],arr[rear]);
        front+=2;
        rear+=2;
    }
}
void printarr(int arr[], int size){
    for(int i=0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main () {
    int size=10;
    int arr[size]={1,2,3,4,5,6,7,8,9,10};
    swapAlt(arr ,size);
    printarr(arr , size);
    return 0;
}