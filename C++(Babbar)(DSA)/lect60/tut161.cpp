// code link :- https://www.naukri.com/code360/problems/circular-queue_1170058?leftPanelTab=0%3Fsource%3Dyoutube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
class CircularQueue{
    public:
    int* arr;
    int front;
    int size;
    int rear;
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front=rear=-1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // if queue is full
        if((front==0 && rear ==size-1) || (rear == (front-1)%(size-1) )){
            return 0;
        }
        // if there is no inintial element
        else if (front ==-1){
            front = 0; 
            rear = 0;
        }
        // condition which make the queue circular
        else if(rear ==size-1 && front!=0){
            rear = 0;
        }
        // normal case
        else{
            rear++;
        }

        arr[rear] =value;

        // just the requirement of question
        return 1;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // if queue is empty
        if(front==-1){
            return -1;
        }
        //saving the data to return at last
        int value = arr[front];
        arr[front] = -1;
        // if there was only one element 
        if(front==rear){
            front = rear = -1;
        }
        // condition which make it circular 
        else if(front==size-1){
            front =0;
        }
        // normal condition
        else{
            front++;
        }
        return value;
    }
};

int main(){
    
}