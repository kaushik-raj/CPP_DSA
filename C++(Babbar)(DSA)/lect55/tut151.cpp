// code link :- https://www.naukri.com/code360/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>

void sortInsert(stack<int> &stack , int num){
	// base case
	if(stack.empty() || stack.top()<num){
		stack.push(num);
		return ;
	}

	// remove the elements (side me rakh lete hai )
	int num1 = stack.top();
	stack.pop();

	// recursive call
	sortInsert(stack,num);

	// add the removed elments
	stack.push(num1);

}

void sortStack(stack<int> &stack)
{
	// base case
	if(stack.empty()){
		return ;
	}

	// remove elements (number side me rakhan hai )
	int num = stack.top();
	stack.pop();

	// recursive call
	sortStack(stack);

	// inert in sorted manner 
	sortInsert(stack, num);
}

int main(){
    
}