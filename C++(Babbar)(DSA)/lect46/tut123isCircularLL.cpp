// code link :- https://www.naukri.com/code360/problems/circularly-linked_1070232?source=youtube&campaign=Lovebabbar_codestudio_26thjan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar_codestudio_26thjan&leftPanelTabValue=PROBLEM

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

bool isCircular(Node* head){
    if(head == NULL ){
        return true;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow!=NULL && fast!= NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast= fast->next;
        }
        slow = slow->next;
        if(slow==fast){
            if(slow == head){
                return true;
            }
            else{
                return false;
            }
        }
    }
    return false;

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
    bool temp = isCircular(tail);
    cout<<"Circular or not :- "<<temp<<endl;
}
