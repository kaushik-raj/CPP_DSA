#include <iostream>
using namespace std;

// Define the structure for a node in the linked list
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(NULL) {}
};

// Function to append a new node at the end of the linked list
void append(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to create a loop in the linked list
void createLoop(Node*& head, int position) {
    if (!head || position < 0) {
        return;
    }

    Node* loopNode = NULL;
    Node* temp = head;
    int counter = 0;

    // Traverse the list and find the node at the given position
    while (temp->next) {
        if (counter == position) {
            loopNode = temp;
        }
        temp = temp->next;
        counter++;
    }

    // Create a loop by pointing the last node to the node at the given position
    if (loopNode) {
        temp->next = loopNode;
    }
}

// Function to print the linked list (useful for debugging, will not print the entire list if there's a loop)
void printList(Node* head, int limit = 15) {
    Node* temp = head;
    int counter = 0;
    while (temp && counter < limit) {
        cout << temp->data << " -> ";
        temp = temp->next;
        counter++;
    }
    if (counter == limit) {
        cout << "... (potential loop detected)\n";
    } else {
        cout << "NULL\n";
    }
}
Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* fast = head;
    Node* slow = head;
    while(slow!=NULL && fast!= NULL){
        fast = fast->next;
        if(fast!=NULL){
        fast = fast->next;
        }
        slow = slow->next;

        if(slow == fast){
            return slow;
        }
    }
    return NULL;
};

Node* getStart(Node*head){
    if(head == NULL){
        return NULL;
    }

    Node* fast = floydDetectLoop(head);
    Node* slow = head;

    while(slow != fast){
        slow= slow->next;
        fast = fast -> next;
    }
    return slow ;

};
void removeLoop(Node* head){
    if(head ==NULL){
        return ;
    }

    Node* statOfLoop = getStart(head);
    Node* temp = statOfLoop;
    while (temp->next != statOfLoop)
    {
        temp =temp->next;
    }
    temp ->next = NULL;
    
}
int main() {
    Node* head = NULL;

    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);
    append(head, 5);

    // Print the linked list before creating a loop
    cout << "Linked List before creating a loop:\n";
    printList(head);

    // Create a loop at position 2 (0-based index)
    createLoop(head, 2);

    Node* LOOPStart  = getStart(head);
    cout<<"Loop stating element is :- "<<LOOPStart->data<<endl;
    cout<<endl;
    printList(head);
    cout<<"Removing loop "<<endl;
    removeLoop(head);
    printList(head);
    return 0;
}