// code link :- https://www.naukri.com/code360/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_Lovebabbar31stJan2021&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar31stJan2021&leftPanelTabValue=PROBLEM

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
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


void printList(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        std::cout << curr->data << " ";
        curr = curr->next;
    }
    std::cout << std::endl;
}

int main() {
    // Creating a sample linked list: 1 -> 0 -> 2 -> 1 -> 0 -> 2
    Node* head = new Node(1);
    head->next = new Node(0);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(0);
    head->next->next->next->next->next = new Node(2);

    std::cout << "Original List: ";
    printList(head);

    // Sorting the list
    head = sortList(head);

    std::cout << "Sorted List: ";
    printList(head);

    // Clean up memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}