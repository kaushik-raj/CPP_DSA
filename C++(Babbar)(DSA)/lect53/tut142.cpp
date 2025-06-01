// code link :- https://www.naukri.com/code360/problems/mergesort-linked-list_630514?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_CodestudioLovebabbar5thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_CodestudioLovebabbar5thfeb&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


node* findMid(node* head){
    node* slow = head;
    node* fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow= slow->next;
        fast = fast->next->next;
    };
    return slow;
};
node* merge(node* left , node* right){
    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }
    node* ans = new node(-1);
    node* temp = ans;
    while(left!=NULL && right!=NULL){
        if(left->data < right->data){
            temp->next = left ;
            temp = left ;
            left=left->next;
        }
        else{
            temp->next = right ;
            temp = right ;
            right=right->next;
        }
    };
    while(left!=NULL){
        temp->next = left ;
        temp = left ;
        left=left->next;
    }
    while(right!=NULL){
        temp->next = right ;
        temp = right ;
        right=right->next;
    }
    return ans->next;
}

node* mergeSort(node *head) {
    // base condition
    if(head==NULL || head->next==NULL){
        return head;
    }

    // find the mid of the LL
    node* mid = findMid(head);
    node* left = head;
    node* right= mid->next;
    mid->next = NULL;

    // divide them into last part of them.
    left = mergeSort(left);
    right = mergeSort(right);

    // merge the two LL 
    node* result = merge(left , right);

    return result ;
}


int main(){
    
}