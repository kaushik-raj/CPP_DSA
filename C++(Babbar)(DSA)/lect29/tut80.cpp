#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    cout<<"enter the dimensions of the array"<<endl;
    int n;
    int m;
    cin>>n;
    cin>>m;
   
    // creating a 2D array in heap 
    int **arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }
     cout<<"Array is created "<<endl;
     cout<<"Enter the elements of the array "<<endl;
    // Taking input in the 2D array 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Elements sorted in the array "<<endl;
    // Printing the 2D array 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // deleting the array 
    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete [] arr;
    cout<<endl<<"Array is deleted "<<endl;
}