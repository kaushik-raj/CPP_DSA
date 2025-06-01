// code link :- https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTab=0%3Fsource%3Dyoutube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
class Queue {
    int* arr;
    int qfront ;
    int rear;
    int size;
public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront==rear){
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        if(rear == size){
            
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(rear == qfront){
            return -1;
        }
        else{
            int value = arr[qfront];
            arr[qfront] = -1;
            qfront ++;
            if(qfront == rear){
                qfront =0;
                rear =0;
            }
            return value; 
        }
    }

    int front() {
        if(qfront == rear){
                return -1;
        }
        else{
            return arr[qfront];
        }
    }
};

int main(){
    
}