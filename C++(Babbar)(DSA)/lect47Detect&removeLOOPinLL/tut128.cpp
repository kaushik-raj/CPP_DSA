#include <iostream>
using namespace std;

struct ListNode {
    int value;
    ListNode* next;
    bool visited; // Add a visited flag to each node
    ListNode(int val) : value(val), next(nullptr), visited(false) {}
};

bool hasCycle(ListNode* head) {
    while (head != nullptr) {
        if (head->visited) {
            return true; // Loop detected
        }
        head->visited = true;
        head = head->next;
    }
    return false; // No loop
}

// Test the function
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = head->next; // Creating a loop for testing

    cout << (hasCycle(head) ? "Loop detected" : "No loop") << endl;

    return 0;
}
