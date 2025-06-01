// code link :-  https://www.geeksforgeeks.org/problems/is-binary-tree-heap/1
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countNode(Node *node)
{
    if (node == NULL)
    {
        return 0;
    }

    int ans = 1 + countNode(node->left) + countNode(node->right);
    return ans;
};

bool isCBT(Node *node, int index, int nodeCount)
{
    if (node == NULL)
    {
        return true;
    }
    if (index >= nodeCount)
    {
        return false;
    }
    else
    {
        bool left = isCBT(node->left, 2 * index + 1, nodeCount);
        bool right = isCBT(node->right, 2 * index + 2, nodeCount);
        return (left && right);
    }
};

bool isMaxOrder(Node *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    if ((root->right) == NULL)
    {
        return (root->data) > (root->left->data);
    }
    else
    {
        // checking for the right and left part of the root .
        bool left = isMaxOrder(root->left);
        bool right = isMaxOrder(root->right);
        // now checking for the root element .
        return (left && right && (root->data > root->left->data) && (root->data > root->right->data));
    }
};

bool isHeap(struct Node *tree)
{
    int index = 0;
    int count = countNode(tree);
    return (isCBT(tree, 0, count) && isMaxOrder(tree));
}

int main()
{
}