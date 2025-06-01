//code link :- https://www.naukri.com/code360/problems/merge-k-sorted-arrays_975379?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// we created a node so that we can keep track of the row and col of each element.
class node{
    public:
    int data;
    int row ;
    int col ;
    node(int data ,int row , int col ){
        this->data = data;
        this->row = row;
        this->col = col;
    }

};

class compare{
    public:
    bool operator()(node* a , node* b){
        return a->data > b->data;
    }
};

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    priority_queue<node* ,vector<node*> , compare> pq;

    // step1 :-push the first element of each array into the heap 
    for(int i =0 ;i<k ;i++){
        node* temp = new node(kArrays[i][0], i , 0);
        pq.push(temp);
    }

    vector<int> ans;
    // step2 
    while(pq.size() >0){
        node* temp= pq.top();
        ans.push_back(temp->data);
        pq.pop();

        int row = temp->row;
        int col = temp->col;

        if(col+1 < kArrays[row].size()){
            node* next = new node(kArrays[row][col+1], row , col+1);
            pq.push(next);
        }
    }

    return ans;
}


int main(){
    
}