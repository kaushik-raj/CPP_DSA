#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* pre;
    Node* next;

    Node(int data){
        this->data = data ;
        this->next = NULL;
        this->pre = NULL;
    }
};

void insertionAtHead(Node* & head , int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->pre = temp;
    head = temp;
};

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
};

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);

    insertionAtHead(head , 12);
    insertionAtHead(head , 14);
    insertionAtHead(head , 16);
    print(head);
}