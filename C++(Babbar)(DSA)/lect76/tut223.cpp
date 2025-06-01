// code link :- https://www.naukri.com/code360/problems/merge-k-sorted-lists_992772?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class compare{
    public:
    bool operator() (Node* a , Node* b){
        return a->data > b->data;
    }
};

Node* mergeKLists(vector<Node*> &listArray){
    
    // create a min-heap 
    priority_queue<Node* , vector<Node*> , compare>minHeap;

    // first we put head of each LL into the minHeap
    int k = listArray.size();
    for(int i =0 ; i<k;i++){
        minHeap.push(listArray[i]);
    }

    // we create head and tail of the new LL
    Node* head = NULL;
    Node* tail = NULL;

    while(minHeap.size() >0){

        Node* top = minHeap.top();
        minHeap.pop();

        if(top->next != NULL){
            minHeap.push(top->next);
        }

        if(head==NULL){
            //case when we are adding the first element into the LL.
            head = top;
            tail = top;
        }
        else{
            // Case when we already inserted the first element into the LL.
            tail->next = top ;
            tail = top;
        }
    }
    return head;
}


int main(){
    
}