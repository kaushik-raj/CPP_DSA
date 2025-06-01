// code Link :- https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
}


    Node* reverseLL(Node *head)
    {
        Node *curr = head;
        Node *prev = NULL;
        Node *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    void insertAtTail(Node* &head , Node* &tail , int data){
        
        Node* temp = new Node(data);
        if(head==NULL){
            head =temp; 
        }
        tail->next = temp;
        tail = temp;
    }
    
    Node* solve(struct Node* num1, struct Node* num2){
        Node* temp1 = num1;
        Node* temp2 = num2;
        int carry =0;
        Node* ansHead = new Node(NULL);
        Node* anstail = ansHead;
        
        while(temp1!= NULL || temp2!= NULL || carry!=0){
            
            // handiling the casese where the one LL is smaller than the other
            int val1=0;
            if(temp1!=NULL){
                val1=temp1->data;
            }
            
            int val2 =0;
            if(temp2!=NULL){
                val2= temp2->data;
            }
            
            
            // s-1 calculating the sum .
            int sum = carry + val1 + val2;
            // s-2  finding the valuw which is to be added in LL
            int val = sum%10;
            // s-3 adding the val in the LL
            insertAtTail(ansHead,anstail,val);
            // s-4 finiding the Carry .
            carry = sum/10;
            // moving forward is neccessary 
            if(temp1!=NULL)
                temp1 = temp1->next;
            if(temp2!=NULL)
                temp2 = temp2->next;
                
        }
        // bcz , anshead is a dummy node. This is bcz , we have added the requireed LL , afer the first Node of the LL . 
        return ansHead->next;
    }
    
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(struct Node* num1, struct Node* num2) {
        // reverse the LL 
        num1 = reverseLL(num1);
        num2 = reverseLL(num2);
        // create the LL which store the sum 
        Node* ans = solve(num1, num2);
        // reverseing the ans , to get the required ans . 
        ans = reverseLL(ans);
        
        return ans;
    };

    void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* num1 = NULL;
    Node* num2 = NULL;

    // Creating first number: 9 -> 4 -> 3 (Represents 943)
    insertAtEnd(num1, 9);
    insertAtEnd(num1, 4);
    insertAtEnd(num1, 3);

    // Creating second number: 5 -> 6 -> 7 (Represents 567)
    insertAtEnd(num2, 5);
    insertAtEnd(num2, 6);
    insertAtEnd(num2, 7);

    // Display input lists
    cout << "First Number: ";
    printList(num1);
    cout << "Second Number: ";
    printList(num2);

    // Adding two numbers
    Node* result = addTwoLists(num1, num2);

    // Display result
    cout << "Sum: ";
    printList(result);

    return 0;
}