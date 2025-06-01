//  code link -:=   https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&leftPanelTab=0
int last(vector<int>& arr, int n ,int k )
{
   
    int start=0;
    int end=n-1;
    int ans=0;
    int mid = start+ (end-start)/2;

    while(start<=end){
        if(arr[mid] == k){
            ans=mid;
            start=mid+1;
        }

        else if(arr[start]<k){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

        mid= start+(end-start)/2;
    }

     return ans;
}

int First(vector<int>& arr, int n ,int k )
{
   
    int start=0;
    int end=n-1;
    int ans=0;
    int mid = start+ (end-start)/2;

    while(start<=end){
        if(arr[mid] == k){
            ans=mid;
            end=mid-1;
        }

        else if(arr[start]<k){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

        mid= start+(end-start)/2;
    }

     return ans;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k){
    pair<int ,int> p;
    p.first=First(arr,  n, k);
    p.second=last( arr,  n,  k);
    return p;
}


// #include<iostream>
// #include<vector>
// using namespace std;

// int main () {
//     vector<int> arr ={0,0,1,1,2,2,2,2};
//     int size=8;
//     int key = 2;
//     pair<int, int> p = firstAndLastPosition(arr , size,key);
//     cout << "Values returned by Pair: ";
//     cout << p.first << " " << p.second;
//     return 0;
// }