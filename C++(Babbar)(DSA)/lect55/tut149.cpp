// code link :- https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio&leftPanelTabValue=PROBLEM
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // base case
    if(myStack.empty()){
        myStack.push(x);
        return myStack;
    }

    // pop the first element and store it 
    int temp = myStack.top();
    myStack.pop();

    // recursive call 
    pushAtBottom(myStack,x);

    // again add all the elemnets
    myStack.push(temp);

    return myStack;
}


int main(){
    
}