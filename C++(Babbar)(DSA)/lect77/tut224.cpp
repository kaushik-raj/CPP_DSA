// code link :- https://www.naukri.com/code360/problems/smallest-range-from-k-sorted-list_1069356?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        int row;
        int col;
        Node(int d ,int r, int c){
            data = d;
            row = r;
            col = c;
        }
};

class compare{
    public:
    bool operator()(Node* a , Node* b){
        return a->data > b->data;
    }
};

int kSorted(vector<vector<int>> &a, int k, int n) {

    int mini = INT_MAX ;
    int maxi = INT_MIN;
    priority_queue<Node* , vector<Node*> , compare> pq;

    // adding first elements of each list 
    for(int i =0 ; i<k ; i++){
        int ele = a[i][0];
        pq.push(new Node( ele , i , 0));
        mini = min(mini , ele);
        maxi = max(maxi , ele);
    }

    // storing the mini & maxi into the main answer start & end
    int start = mini ;
    int end = maxi;

    // loop to insert next element of small element in same list , and updating mini and maxi , and according changing the start and end
    while(!pq.empty()){

        Node* temp = pq.top();
        // upadting the mini
        mini = pq.top()->data;
        pq.pop();

        // updating the start and end , if neccessary
        if(maxi-mini < end-start){
            start = mini ;
            end = maxi;
        }

        // updating the maxi & adding element into the heap 
        if(temp->col +1 < n){
            maxi = max(maxi , a[temp->row][(temp->col)+1]);
            pq.push(new Node(a[temp->row][(temp->col)+1], temp->row, (temp->col)+1));
        }
        else{
            break;
        }
    }
    return (end - start+1);
}
int main(){
    
}