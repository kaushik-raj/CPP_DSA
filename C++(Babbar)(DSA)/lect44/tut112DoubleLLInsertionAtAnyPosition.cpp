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
void inertionAtTail(Node* &tail , int data){
    Node* temp = new Node(data);
    temp->pre = tail;
    tail->next = temp;
    tail = temp;
};

void insertionAtAnyPosition(Node* &head , Node* &tail , int data , int position){
    // insertion at head 
    if(position==1){
        insertionAtHead(head , data);
        return;
    }

    Node* ptr = head;
    int cnt =1;

    while(cnt<position-1){
        ptr = ptr->next;
        cnt++;
    }
    // insertion at tail 
    if(ptr->next==NULL){
        inertionAtTail(tail , data);
        return ;
    }

    // insertion at any position 
    Node* temp = new Node(data);
    temp -> next = ptr->next;
    ptr->next->pre = temp;
    ptr  ->next = temp;
    temp ->pre = ptr;

}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertionAtHead(head , 12);
    insertionAtHead(head , 14);
    insertionAtHead(head , 16);
    inertionAtTail(tail , 18 );
    cout<<"Initial Nodes"<<endl;
    print(head);
    cout<<"new Nodes"<<endl;
    insertionAtAnyPosition(head , tail , 17 , 5);
    print(head);
}