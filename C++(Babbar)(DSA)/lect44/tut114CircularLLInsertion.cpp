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

int main(){
    Node* tail =NULL;
    insertionAtAnyPoint(tail , 3 , 2);
    print(tail);
    
    insertionAtAnyPoint(tail , 2 , 4);
    print(tail);

    insertionAtAnyPoint(tail , 2 , 3);
    print(tail);

    insertionAtAnyPoint(tail , 4 , 5);
    print(tail);
}