// Code Link :- https://www.naukri.com/code360/problems/reverse-the-singly-linked-list_799897?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan&leftPanelTabValue=PROBLEM
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

void InsertAtHead(Node* &Head , int data){
    Node* temp = new Node(data);
    temp->next = Head;
    Head = temp ;
};

void print(Node* &Head){
    Node* temp = Head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
};
void solve(Node* &head, Node* prev , Node* curr){

    if(curr == NULL){
        head = prev;
        return ;
    }
    Node* forward = curr -> next;
    solve(head, curr , forward );
    curr-> next = prev;
};

Node* reverseLL(Node* head){

    Node* prev = NULL;
    Node* curr = head;
    solve( head,prev , curr);
    return head;
};


int main(){
    Node* node1 = new Node(10);
    Node* Head = node1;
    InsertAtHead(Head , 12 );
    InsertAtHead(Head , 15);
    InsertAtHead(Head , 17);
    InsertAtHead(Head , 19);

    print(Head);

    Node* H = reverseLL(Head);
    print(H);

}