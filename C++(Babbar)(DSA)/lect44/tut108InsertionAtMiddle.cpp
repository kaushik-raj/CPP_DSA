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

void InsertAtTail(Node* &Tail , int data){
    Node* temp = new Node(data);
    Tail-> next  = temp;
    Tail = temp;
};

void InsertInMiddle(Node* &Head , Node* &Tail , int data , int position){
    if(position==1){
        InsertAtHead(Head , data);
        return ;
    };

    Node* ptr = Head;
    int cnt =1;

    while(cnt<position-1){
        ptr = ptr->next;
        cnt++;
    }

    if(ptr->next == NULL){
        InsertAtTail(Tail , data);
        return;
    };

    Node* temp = new Node(data);
    temp -> next = ptr->next;
    ptr-> next = temp;
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
    InsertAtTail(Tail , 12 );
    InsertAtTail(Tail , 15);
    InsertAtTail(Tail , 17);
    print(Head);
    cout<<"New nudes"<<endl;
    InsertInMiddle(Head ,Tail , 13 , 3);
    print(Head);
    InsertInMiddle(Head , Tail , 8 , 1 );
    cout<<"New Nodes "<<endl;
    print(Head);
}