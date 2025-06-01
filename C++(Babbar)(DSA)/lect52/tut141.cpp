// code link :- https://www.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    void insertAtTail(Node* &head , Node* &Tail , int data ){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            Tail = newNode;
        }
        else{
            Tail->next = newNode;
            Tail = newNode;
        }
    };
  
    Node *copyList(Node *head) {
        
        // step 1: create a Clone LL;
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        Node* temp = head;
        while(temp != NULL){
            insertAtTail(cloneHead , cloneTail ,temp->data);
            temp = temp->next;
        }
      
        // step 2 : insert clone Nodes into the Original Nodes
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        while(originalNode!= NULL && cloneNode!= NULL){
            // insert clone NOde into the original node 
            Node* next = originalNode->next;
            originalNode->next = cloneNode;
            originalNode = next;
            
            // insert the original node into the clone node 
            next = cloneNode ->next;
            cloneNode->next = originalNode;
            cloneNode = next;
        }
        // step 3 : Link the random pointer of original Nodes to Clone Nodes
        temp = head;
        while(temp!=NULL){
            if(temp->next!=NULL){
                temp ->next ->arb = temp->arb ? temp->arb->next : temp->arb;
            }
            temp=temp->next->next;
        }
        
        // step 4 revert the changes done in the step 2 
        originalNode = head;
        cloneNode = cloneHead;
        while(originalNode!=NULL && cloneNode!=NULL){
            // seperating original NOde from the clone nodes
            originalNode->next = cloneNode->next;
            originalNode = originalNode->next;
            
            // separeting clone node from original node 
            if(originalNode!=NULL){
                cloneNode->next = originalNode->next;
                cloneNode= cloneNode->next ;
            }
        }
        
        //  step 5 : return the head of the clone Nodes 
        return cloneHead;
        
    }
};

int main(){
    
}