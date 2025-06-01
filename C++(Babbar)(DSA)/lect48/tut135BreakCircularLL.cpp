#include<iostream>
#include<bits/stdc++.h>
#include <utility>
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

pair<Node*, Node*> breakLL(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast->next!=head){
        fast = fast->next;
        if(fast->next!= head){
        fast = fast->next;
        }
        else{
            continue;
        }
        slow=slow->next;
    }
    cout<<slow->data<<endl;
    cout<<fast->data<<endl;

    Node* first = head;
    Node* sec = slow->next;
    fast->next = sec;
    slow->next = head;

    return {first , sec};
};

int main(){
    Node* tail =NULL;
    insertionAtAnyPoint(tail , 3 , 1);
    insertionAtAnyPoint(tail , 1 , 2);
    insertionAtAnyPoint(tail , 2 , 3);
    insertionAtAnyPoint(tail , 3 , 4);
    insertionAtAnyPoint(tail , 4 , 5);
    // insertionAtAnyPoint(tail , 5 , 6);

    print(tail);
    Node*head = tail;
    cout<<head->data<<endl;
    auto n =  breakLL(head);
    print(n.first);
    print(n.second);

}