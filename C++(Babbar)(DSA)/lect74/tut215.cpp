// Priority Queue
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Max Priority  (Max heap )
    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    cout<<"MAX HEAP" <<endl;
    cout<<"element at top "<<pq.top()<<endl;
    pq.pop();
    cout<<"element at top "<<pq.top()<<endl;
    cout<<"Size "<<pq.size()<<endl;
    cout<<"is empty "<<pq.empty()<<endl;

    // Mini priority (Min heap )

    priority_queue<int, vector<int>, greater<int> > minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(3);
    minheap.push(5);

    cout<<"MIN HEAP" <<endl;

    cout << "Element at Top: " << minheap.top() << endl; // Display the top element
    minheap.pop(); // Remove the top element
    cout << "Element at Top after pop: " << minheap.top() << endl; // Display the new top element
    cout << "Size is: " << minheap.size() << endl;


}