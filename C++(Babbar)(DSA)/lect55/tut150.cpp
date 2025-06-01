// code link :- https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &stack , int num )
{
    // base case
    if(stack.empty()){
        stack.push(num);
        return ;
    }

    // remove the top element 
    int top  = stack.top();
    stack.pop();

    // recursive call 
    insertAtBottom(stack, num);

    // insert the element 
    stack.push(top);
}
void reverseStack(stack<int> &stack) {
    // base case
    if(stack.empty()){
        return ;
    }

    // remove the top element 
    int num = stack.top();
    stack.pop();

    // recursive call
    reverseStack(stack);

    // insert at bottom 
    insertAtBottom(stack , num);
}

int main(){
    
}