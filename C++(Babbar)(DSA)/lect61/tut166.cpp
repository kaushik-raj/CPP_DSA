// code link:- https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string FirstNonRepeating(string A)
{
    unordered_map<char, int> count;
    queue<char> q;
    string ans = "";

    for (int i = 0; i < A.length(); i++)
    {

        char ch = A[i];
        //  increase the count;
        count[ch]++;
        // push into queue
        q.push(ch);

        // now we check for repetition
        while (!q.empty())
        {
            if (count[q.front()] > 1)
            {
                // repeting character
                q.pop();
            }
            else
            {
                // non-repeting character
                ans.push_back(q.front());
                break;
            }
        }

        if (q.empty())
        {
            ans.push_back('#');
        }
    }
    return ans;
}

int main()
{
}