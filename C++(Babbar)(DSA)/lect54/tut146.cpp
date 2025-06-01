// code link :- https://www.naukri.com/code360/problems/two-stacks_983634?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_CodestudioLovebabbar5thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_CodestudioLovebabbar5thfeb&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class TwoStack {
    int *arr;
    int size;
    int top1;
    int top2;

public:

    // Initialize TwoStack.
    TwoStack(int s) {
        this->size = s;
        top1 = -1;
        top2 = size;
        arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1 >= 0){
            int temp =  arr[top1];
            top1--;
            return temp;
        }
        else{
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2<size){
            int temp =  arr[top2];
            top2++;
            return temp;
        }
        else{
            return -1;
        }
    }
};


int main(){
    
}