// code link :-  www.naukri.com/code360/problems/merge-two-sorted-linked-lists_800332?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_Lovebabbar31stJan2021&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar31stJan2021&leftPanelTabValue=PROBLEM
#include <iostream>
using namespace std;

#include <bits/stdc++.h>

template <typename T>
class Node
{
public:
    T data;
    Node *next;

    Node(T data)
    {
        next = NULL;
        this->data = data;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

Node<int> *solve(Node<int> *first, Node<int> *second)
{

    // check condition if there is only one element in first LL
    if (first->next == NULL)
    {
        first->next = second;
        return first;
    }

    // If there are many elements in the LL , then we create the pointers
    Node<int> *curr1 = first;
    Node<int> *next1 = first->next;
    Node<int> *curr2 = second;
    Node<int> *next2 = second->next;

    // This loop will run till the next1 reaches the NULL AND curr2 reaches NULL
    while (next1 != NULL && curr2 != NULL)
    {
        // check the condition if we have to insert in b/w or not
        if (curr1->data <= curr2->data && curr2->data <= next1->data)
        {
            // we insert the element here
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            // Now update the pointers
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            // then we simplly move the pointer of curr1 and next1
            curr1 = next1;
            next1 = next1->next;
        }
    }
    if (next1 == NULL)
    {
        curr1->next = curr2;
    }
    return first;
}

Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
{
    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }
    if (first->data > second->data)
    {
        return solve(second, first);
    }
    else
    {
        return solve(first, second);
    }
}

void printList(Node<int> *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void deleteList(Node<int> *&head)
{
    while (head != NULL)
    {
        Node<int> *temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    // Create first sorted linked list: 1 -> 3 -> 5
    Node<int> *first = new Node<int>(1);
    first->next = new Node<int>(3);
    first->next->next = new Node<int>(5);

    // Create second sorted linked list: 2 -> 4 -> 6
    Node<int> *second = new Node<int>(2);
    second->next = new Node<int>(4);
    second->next->next = new Node<int>(6);

    // Print the initial lists
    cout << "First List: ";
    printList(first);
    cout << "Second List: ";
    printList(second);

    // Merge the two sorted linked lists
    Node<int> *mergedList = sortTwoLists(first, second);

    // Print the merged linked list
    cout << "Merged List: ";
    printList(mergedList);

    // Clean up memory
    deleteList(mergedList);

    return 0;
}
