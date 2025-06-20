// code link :- https://www.naukri.com/code360/problems/n-stacks-in-an-array_1164271?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio11thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio11thfeb
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
class NStack
{
public:
    // Initialize your data structure.
    int* arr;
    int* top;
    int* next;
    int n , s;
    int freeSpot;
    NStack(int N, int S)
    {
        n = N;
        s =S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        // top inisalisation
        for(int i = 0; i<n ;i++){
            top[i]=-1;
        }
        //  next inisalisation
        for(int i =0; i<s;i++){
            next[i]=i+1;
        }
        // update  las index to -1
        next[s-1]=-1;

        // inisalisation of freeSpot 
        freeSpot = 0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // check for overflow 
        if(freeSpot == -1){
            return false;
        }

        // find index
        int index = freeSpot;

        // update freeSpot 
        freeSpot = next[index];

        // insert element into array 
        arr[index] = x;

        // update next
        next[index ] = top[m-1];

        // update top
        top[m-1] = index;

        return true ; 
    }


    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // check underflow condition
        if(top[m-1] == -1){
            return -1;
        }   

        int index = top[m-1];

        top[m-1] = next[index];

        next[index] = freeSpot;

        freeSpot = index;

        return arr[index];
    }
};


int main(){
    
}