// code link :- https://www.naukri.com/code360/problems/flatten-a-linked-list_1112655?source=youtube&campaign=YouTube_CodestudioLovebabbar5thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_CodestudioLovebabbar5thfeb&leftPanelTabValue=PROBLEM
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


Node* merge(Node* left , Node* right){
    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }
    Node* ans = new Node(-1);
    Node* temp = ans;
    while(left!=NULL && right!=NULL){
        if(left->data < right->data){
            temp->child = left ;
            temp = left ;
            left=left->child;
        }
        else{
            temp->child = right ;
            temp = right ;
            right=right->child;
        }
    };
    while(left!=NULL){
        temp->child = left ;
        temp = left ;
        left=left->child;
    }
    while(right!=NULL){
        temp->child = right ;
        temp = right ;
        right=right->child;
    }
    return ans->child;
}

Node* flattenLinkedList(Node* head) 
{
	if(head== NULL || head->next==NULL){
		return head;
	}

	Node* down = head;
	Node* right = flattenLinkedList(head->next);
	down->next = NULL;

	Node* result = merge(down, right);

	return result;
}


int main(){
    
}