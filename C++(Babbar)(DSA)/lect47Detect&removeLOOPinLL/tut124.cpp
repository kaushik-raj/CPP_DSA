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
bool floydDetectLoop(Node* head){
    if(head == NULL){
        return false;
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
            return true;
        }
    }
    return false;
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
    bool flag = floydDetectLoop(head);
    cout<<"Is there any loop "<<endl;
    if(flag){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    // Print the linked list after creating a loop (limit to avoid infinite loop)
    cout << "Linked List after creating a loop:\n";
    printList(head);

    return 0;
}
