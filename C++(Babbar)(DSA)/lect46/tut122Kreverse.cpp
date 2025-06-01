// code linl :- https://www.naukri.com/code360/problems/reverse-list-in-k-groups_983644?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbar_codestudio_26thjan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar_codestudio_26thjan
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

void InsertAtHead(Node* &head , int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp ;
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
};

int getlength(Node* head){
        int n=0;
        Node* temp = head;
        while (temp!=NULL)
        {
            temp=temp->next;
            n++;
        }
        return n;
}

Node* kReverse(Node* head, int k) {
    // Base Case
    if(head == NULL || getlength(head)<k ){
        return head;
    }
    // reversing the first k nodees 
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    int cnt =0;
    while( curr!=NULL && cnt<k){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr=forward;
        cnt++;
    }
    // recursive call for other elements which are at positon more than k.
    if(forward != NULL){
        head->next = kReverse(forward, k);
    };
    // returning the head of the reversed LL .
    return prev;
}

int main(){
    cout<<"initail Nodes "<<endl;
    Node* node1 = new Node(10);
    Node* head = node1;
    InsertAtHead(head , 12 );
    InsertAtHead(head , 15);
     InsertAtHead(head , 17);
    InsertAtHead(head , 19);
    InsertAtHead(head , 21);
    print(head);

    head = kReverse(head , 2);
    cout<<"K reversed LL"<<endl;
    print(head);
}
