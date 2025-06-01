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

int lent(Node* head){
    int len =0;
    while(head!=NULL){
        len++;
        head  = head->next;
    }
    return len;
}

Node* MiddleNode(Node* head){
    int len = lent(head);
    Node* temp = head;
    int middle = len/2;
    while(middle--){
        temp = temp->next;
    }
    return temp ;
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
    Node* Midd = MiddleNode(head); 
    cout<<Midd->data<<endl;

}