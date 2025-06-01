//  code link :-    https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&leftPanelTab=0


#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int si, int ei, int k)
{
    while(si <= ei)
    {
        int mid = si + (ei - si) / 2;

        if(arr[mid] == k)
        {
            return mid;
        }

        if(arr[mid] > k)
        {
            ei = mid - 1;
        }
        else
        {
            si = mid + 1;
        }
    }

    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int si = 0, ei = n - 1;

    int pivot = 0, index;

    while(si <= ei)
    {
        int mid = si + (ei - si) / 2;

        if(arr[mid] < arr[0])
        {
            pivot = mid;
            ei = mid - 1;
        }
        else
        {
            si = mid + 1;
        }
    }

    if(pivot == 0 || (k <= arr[n - 1] && k >= arr[pivot]))
    {
        index = binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        index = binarySearch(arr, 0, pivot - 1, k);
    }

    return index;
}

int main () {
   vector<int> arr{3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 ,12 ,2 };
    int ans = search(arr,10,7);
    cout<<ans;
    return 0;
}