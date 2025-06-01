// code link :- https://www.naukri.com/code360/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_Lovebabbar31stJan2021&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar31stJan2021&leftPanelTabValue=PROBLEM
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

void inserAtTail(Node* &tail , Node* curr){
    tail->next = curr;
    tail = curr;
}


Node* sortList(Node *head){
    Node* zerohead = new Node(-1);
    Node* zeroTail = zerohead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;
    while(curr!=NULL){
        int value = curr->data;
        if(value==0){
            inserAtTail(zeroTail, curr);
        }
        else if(value==1){
            inserAtTail(oneTail,curr);
        }
        else if(value==2){
            inserAtTail(twoTail,curr);
        }
        curr=curr->next;
    }

    if(oneHead->next != NULL) {
        zeroTail->next = oneHead->next;
    } else {
        zeroTail->next = twoHead->next;
    }

    oneTail->next =twoHead->next;
    twoTail->next = NULL;

    head = zerohead->next;

    delete zerohead;
    delete oneHead;
    delete twoHead;

    return head;
}

int main(){
    
}