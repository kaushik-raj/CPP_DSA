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
}

int main(){
    cout<<"initail Nodes "<<endl;
    Node* node1 = new Node(10);
    Node* Head = node1;
    print(Head);
    InsertAtHead(Head , 12 );
    cout<<"After First insertion at head "<<endl;
    print(Head);
    InsertAtHead(Head , 15);
    cout<<"After second insertion at head "<<endl;
    print(Head);

}