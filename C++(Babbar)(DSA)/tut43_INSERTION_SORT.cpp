#include<iostream>
#include<vector>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    for(int i=1 ; i<n;i++){     // yaha pe n-1 nahi kiya kyu ki , vo n-1(indexing se hai ) , lakin yaha pe n to length hai na .

        int temp = arr[i];
        int j=i-1;  // bcz , we have to use this  j outside the second loop , so we declraed it outside . 
        for(;j>=0;j--){

            // shift karna ka condition 
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
};

void display(vector<int> arr ,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
};

int main () {
    vector<int > arr{3,1,2,2};
    int n = 4;
    insertionSort(n,arr);
    display(arr ,n);
    return 0;
};
