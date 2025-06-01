#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data ;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertionAtAnyPoint(Node* &tail , int element , int data){
    // If there is no node at initial stage .
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp->next = temp;
    }
    else{
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        Node* temp = new Node(data);
        temp -> next = curr->next;
        curr->next = temp;
    }

};

void print(Node* tail){
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail!=temp);
    cout<<endl;
};

void deleteNode(Node* &tail , int value){
    if(tail == NULL){
        cout<<"List is empty "<<endl;
        return;
    }
    else{
        Node* prev = tail ;
        Node* curr = prev->next;
        while(curr->data != value){
            prev = curr ;
            curr = curr->next;
        }
        prev -> next = curr ->next;

        if(curr==prev){
            tail=NULL;
        }
        else if(tail==curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    Node* tail =NULL;
    insertionAtAnyPoint(tail , 3 , 2);
    insertionAtAnyPoint(tail , 2 , 4);
    insertionAtAnyPoint(tail , 2 , 3);
    insertionAtAnyPoint(tail , 4 , 5);
    print(tail);

    deleteNode(tail  , 3);
    print(tail);
    deleteNode(tail  , 4);
    print(tail);
    deleteNode(tail , 5);
    print(tail);
    deleteNode(tail , 2);
    print(tail);
}