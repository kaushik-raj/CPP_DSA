#include<iostream>
using namespace std;


    int BinarySearch(int arr[],int size , int key){
        int start=0;
        int end=size-1;
        int mid = start + (end-start)/2;

        while(start<=end){
            if(arr[mid]==key){
                return mid;
            }

            // Right Shift
            if(arr[mid]<key){
                start=mid+1;
            }

            //  Left Shift
            else{
                end=mid-1;
            }
            mid = start + (end-start)/2;
        }
        return -1;
    }
int main () {
    int oddarr[5]={1,2,3,4,5};
    int evenarr[6]={1,2,3,4,5,6};

    int OddArrSearch = BinarySearch(oddarr,5,4);
    cout<<OddArrSearch<<endl;


    int EvenArrSearch = BinarySearch(evenarr,6,6);
    cout<<EvenArrSearch<<endl;
    

    return 0;
}