#include <iostream>
using namespace std;

struct ListNode {
    int value;
    ListNode* next;
    bool visited; // Add a flag to each node
    ListNode(int val) : value(val), next(nullptr), visited(false) {}
};

void detectAndRemoveLoop(ListNode* head) {
    ListNode* prev = nullptr;
    while (head != nullptr) {
        if (head->visited) {
            prev->next = nullptr; // Remove loop
            return;
        }
        head->visited = true;
        prev = head;
        head = head->next;
    }
}

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

// Test the function
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = head->next; // Creating a loop for testing

    detectAndRemoveLoop(head);
    printList(head); // Should print: 1 2 3 4 5

    return 0;
}
