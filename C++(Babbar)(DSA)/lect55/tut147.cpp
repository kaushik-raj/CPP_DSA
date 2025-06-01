// code link :- https://www.naukri.com/code360/problems/delete-middle-element-from-stack_985246?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>&inputStack, int N , int count){
   if(count == N/2){
      inputStack.pop();
      return ;
   }

   // pop the top most element.
   int num = inputStack.top();
   inputStack.pop();

   // recursive call to check , if count reaches the mid of not 
   solve(inputStack , N , count+1);

   // insert the element which we have removed 
   inputStack.push(num);
}

void deleteMiddle(stack<int>&inputStack, int N){
	
   int count = 0;
   solve(inputStack , N , count);
   
}

int main(){
    
}