#include<iostream>
using namespace std;
bool Search(int arr[] , int size , int key){
    for(int i=0 ; i<size;i++){
        if (key==arr[i]){
            return 1;
        }
    }
    return 0;
}

int main () {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size =10;
    int key =0;
    cout<<"Enter the kay you want to search in the array:  "<<endl;
    cin>>key;
    bool found = Search(arr , size ,key);
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }
    return 0;
}