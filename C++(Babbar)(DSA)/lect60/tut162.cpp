// code link :- https://www.naukri.com/code360/problems/deque_1170059?leftPanelTab=0%3Fsource%3Dyoutube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
class Deque
{
    int* arr;
    int front;
    int rear;
    int size;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size = n;
        arr = new int[size];
        front =-1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        // to check if queue is full or not
        if(isFull()){
            return false;
        }
        // to check if queue is full or not
        else if(isEmpty()){
            front = rear = 0;
        }
        // to maintane the cyclic nature of the queue
        else if(front ==0 && rear != size-1){
            front = size-1;
        }
        // normal case
        else{
            front--;
        }
        // value adding
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
         // to check if queue is full or not
        if(isFull()){
            return false;
        }
        // to check if queue is full or not
        else if(isEmpty()){
            front = rear = 0;
        }
        // to maintane the cyclic nature of the queue
        else if(rear ==size-1 && front !=0){
            rear =0;
        }
        // normal case
        else{
            rear++;
        }
        // value adding
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        // if queue is empty
        if(isEmpty()){
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

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
         // if queue is empty
        if(isEmpty()){
            return -1;
        }
        //saving the data to return at last
        int value = arr[rear];
        arr[rear] = -1;
        // if there was only one element 
        if(front==rear){
            front = rear = -1;
        }
        // condition which make it circular 
        else if(rear==0){
            rear=size-1;
        }
        // normal condition
        else{
            rear--;
        }
        return value;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
         if(isEmpty()){
            return -1;
        }
        else{
            return arr[rear];
        }
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front==-1){
            return true;
        }
        else{
            return false;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if( (front==0 && rear==size-1) || (front!=0 && rear==(front-1)%(size-1)) ){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    
}