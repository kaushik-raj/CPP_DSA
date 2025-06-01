// CODE LINK :-  https://www.codingninjas.com/studio/problems/bubble-sort_980524?source=youtube&campaign=love_babbar_codestudio2&leftPanelTab=1

#include<vector>
#include<iostream>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=1;i<n;i++){

        bool swapped = 0; 
        for(int j=0;j<n-i;j++){
            // Process element till n-ith element . 
            if(arr[j] >arr[j+1]){

                swap(arr[j] , arr[j+1]);
                swapped = 1;
            }
           
        }
        if(!swapped){
            // already sorted
            break;
        }
    }
};
void display(vector<int> arr , int n ){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
};

int main () {
     int n=5;
    vector<int> arr{1,7,9,2,3};
    bubbleSort(arr , n);
    display(arr ,n );
    return 0;
}