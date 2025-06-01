// code link :- https://www.naukri.com/code360/problems/unique-sorted-list_2420283?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_Lovebabbar29thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar29thJan&leftPanelTabValue=SUBMISSION

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

};

Node * removeDuplicates(Node *head)
{
    if(head == NULL){
        return head;
    }
    Node* curr = head;
    while(curr->next!=NULL){
        Node* t = curr->next;

        if (curr->data == t->data) {
            Node* temp = curr->next->next;
            if(temp==NULL){
                curr->next = NULL;

            }else {
                curr->next = temp;
                temp->pre = curr;
            }
            delete(t);
        }
        else{
            curr = curr->next;

        }
    }
    return head;
};


int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    inertionAtTail(tail , 2);
    inertionAtTail(tail , 4);
    inertionAtTail(tail , 6);
    inertionAtTail(tail , 6);
    inertionAtTail(tail , 6);
    inertionAtTail(tail ,  8);
    inertionAtTail(tail ,  8);
    inertionAtTail(tail ,  8);

    print(head);
    removeDuplicates(head);
    print(head);
}
