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

void DeleteNode(Node* &Head , Node* &Tail , int Position){
    if(Position==1){
        Node* temp = Head;
        Head = Head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = Head;
        Node* pre = nullptr;
        int count = 1;
        while(count<Position)
        {
            pre = curr;
            curr = curr->next;
            count++;
        }
        pre->next = curr->next;
        if(curr->next ==NULL){
            Tail = pre;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* &Head){
    Node* temp = Head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
    Node* Head = node1; 
    Node* Tail = node1;
    InsertAtTail(Tail , 12);
    InsertAtTail(Tail , 15);
    InsertAtTail(Tail , 17);
    InsertAtTail(Tail , 19);
    print(Head);

    DeleteNode(Head, Tail , 1);
    print(Head);
    cout<<"Head  "<<Head->data<<endl;
    cout<<"Tail  "<<Tail->data<<endl;
    cout<<endl;


    DeleteNode(Head, Tail , 4);
    print(Head);
    cout<<"Head  "<<Head->data<<endl;
    cout<<"Tail  "<<Tail->data<<endl;

    DeleteNode(Head, Tail , 2);
    print(Head);
    cout<<"Head  "<<Head->data<<endl;
    cout<<"Tail  "<<Tail->data<<endl;
}