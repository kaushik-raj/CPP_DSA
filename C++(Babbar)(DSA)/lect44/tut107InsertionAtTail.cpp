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

void InsertAtTail(Node* &Tail , int data){
    Node* temp = new Node(data);
    Tail-> next  = temp;
    Tail = temp;
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
    cout<<"Old Nodes"<<endl;
    Node* node1 = new Node(10);
    Node* Head = node1;
    Node* Tail = node1;
    print(Head);
    InsertAtTail(Tail , 12 );
    cout<<"After First insertion at tail "<<endl;
    print(Head);
    InsertAtTail(Tail , 15);
    cout<<"After second insertion at tail "<<endl;
    print(Head);

}