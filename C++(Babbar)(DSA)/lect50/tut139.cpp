// code link :- https://www.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    Node *middle(Node *head)
    {
        Node *slow = head;
        Node *fast = head->next;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    Node *reverseLL(Node *mid)
    {
        Node *curr = mid;
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

    bool isPalindrome(Node *head)
    {

        if (head->next == NULL)
        {
            return true;
        }

        // step - 1 first find the middle element
        Node *mid = middle(head);
        // step - 2 Reverse the LL after middle
        Node *temp = mid->next;
        mid->next = reverseLL(temp);
        // step - 3 NOw check for similarity
        Node *temp2 = mid->next;
        Node *temp1 = head;
        while (temp2 != NULL)
        {
            if (temp1->data != temp2->data)
            {
                return false;
            }
            temp2 = temp2->next;
            temp1 = temp1->next;
        }

        // step -4 UNdo the changes done in the original LL
        temp = mid->next;
        mid->next = reverseLL(temp);

        return true;
    }
};

int main()
{
}