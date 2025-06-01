//code link :- https://www.naukri.com/code360/problems/build-min-heap_1171167?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Function to maintain the min-heap property for the subtree rooted at index i
void heapify(vector<int>& arr, int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Check if the left child exists and is smaller than the root
    if (left < n && arr[left] < arr[smallest]) {
        smallest = left;
    }

    // Check if the right child exists and is smaller than the smallest
    if (right < n && arr[right] < arr[smallest]) {
        smallest = right;
    }

    // If the smallest is not the root, swap and recursively heapify the affected subtree
    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        heapify(arr, n, smallest);
    }
}

// Function to build the min-heap
vector<int> buildMinHeap(vector<int>& arr) {
    int n = arr.size();
    // Start heapifying from the last non-leaf node up to the root node
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    return arr;  // Return the modified array as a min-heap
}


int main(){
    

}