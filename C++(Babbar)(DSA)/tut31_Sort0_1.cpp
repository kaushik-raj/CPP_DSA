#include<iostream>
using namespace std;
void display(int arr[],int size){
    for(int i=0 ;i<size;i++){
        cout<<arr[i]<<" ";

    }
    
}

int main () {
    int arr[]={1,0,1,0,0,1,1,1,0,0,1,0,1};
    int left =0;
    int right = 13-1;
    while(left!=right){
        if(arr[left]==0){
            left++;
        }
        if(arr[right]==1){
            right--;
        }
        if(arr[left]==1 && arr[right]==0){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    display(arr ,13);
}