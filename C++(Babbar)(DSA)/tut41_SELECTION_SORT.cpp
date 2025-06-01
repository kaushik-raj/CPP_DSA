// CODE LINK :- https://www.codingninjas.com/studio/problems/selection-sort_981162?source=youtube&campaign=love_babbar_codestudio2&leftPanelTab=1   


#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            };
        }
        swap(arr[minIndex] , arr[i]);
    }
};

void display(vector<int> arr , int n ){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
};

int main () {
    int n=11;
    vector<int> arr{1,7,9,8,5,4,87,545,4,34,2,3};
    selectionSort(arr , n);
    display(arr ,n );
    return 0;
}