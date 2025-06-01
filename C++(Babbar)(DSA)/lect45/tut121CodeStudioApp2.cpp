// code link :- https://www.naukri.com/code360/problems/middle-of-linked-list_973250?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data ;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL; 
    }
};

void InsertAtHead(Node* &head , int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp ;
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
};

Node* findMiddle(Node *head) {
    if(head==NULL){
        return head;
    }
    Node* slow = head;
    Node* fast = head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow = slow->next;
    }
    return slow;
}


int main(){
    cout<<"initail Nodes "<<endl;
    Node* node1 = new Node(10);
    Node* head = node1;
    InsertAtHead(head , 12 );
    InsertAtHead(head , 15);
    InsertAtHead(head , 17);
    InsertAtHead(head , 19);
    InsertAtHead(head , 21);
    print(head);
    Node* MIddle = findMiddle(head);
    cout<<MIddle->data<<endl;

}
