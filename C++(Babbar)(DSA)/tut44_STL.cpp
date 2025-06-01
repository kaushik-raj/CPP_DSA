#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//1                                  Array in STL


// int main(){
//     array<int , 4> a={1,2,3,4};
//     for(int i=0 ;i<a.size() ;i++){
//         cout<<a[i]<<" ";
//     };
//     cout<<endl;
//     cout<<"Size of the array "<<a.size()<<endl;
//     cout<<"First element of the array "<<a.front()<<endl;
//     cout<<"Last element of the aray "<<a.back()<<endl;
//     cout<<"Is the array empty :- "<<a.empty()<<endl;
//     cout<<"What is the value at index 2 :- "<<a.at(2)<<endl;
// }



// 2                                Vector in STL 


// int main() {
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);

//     for(int i =0 ; i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Capacity of the vector :- "<<v.capacity()<<endl;
//     cout<<"Size of the vector:- "<<v.size()<<endl;
//     cout<<"First value of the Vector:- "<<v.front()<<endl;
//     cout<<"Last value of the Vector:- "<<v.back()<<endl;
//     cout<<"deleting the last element "<<endl;
//     v.pop_back();
//     cout<<"Vector after deletion"<<endl;
//     for(int i =0 ; i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"We are going to clear all the element from the vector "<<endl;
//     v.clear();
//     for(int i =0 ; i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Value of capacity after clear :- "<<v.capacity()<<endl;
//     cout<<"Value of size after clear :- "<<v.size()<<endl;
// }



//3                                 Deque in STL


// int main(){
//     deque<int> d;
//     d.push_front(1);
//     d.push_back(2);
//     d.push_back(3);
//     d.push_back(4);

//     for(int i=0 ;i<d.size() ; i++){
//         cout<<d[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Size of the Deque :- "<<d.size()<<endl;
//     cout<<"Is the Deque is empty? :- "<<d.empty()<<endl;
//     cout<<"First element of the Deque :- "<<d.front()<<endl;
//     cout<<"Last element of the deque :- "<<d.back()<<endl;
//     cout<<"Now we will delete the first and the last element "<<endl;
//     d.pop_front();
//     d.pop_back();
//     for(int i=0 ;i<d.size() ; i++){
//         cout<<d[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"We are adding more element so that we can "<<endl;
//     d.push_back(4);
//     d.push_back(5);
//     d.push_back(6);
//     d.push_back(7);
//     for(int i=0 ;i<d.size() ; i++){
//         cout<<d[i]<<" ";
//     }
//     cout<<endl;

//     d.erase(d.begin() +2 , d.begin()+5);
//     cout<<"Deque after clearing the some element "<<endl;
//     for(int i=0 ;i<d.size() ; i++){
//         cout<<d[i]<<" ";
//     };
//     cout<<endl;
// }


//  4                               List in STL


// int main(){
//     list<int> l;
    
//     l.push_back(1);
//     l.push_front(2);
//     l.push_back(3);
//     l.push_back(4);
//     l.push_back(5);
//     l.pop_front();
//     l.pop_back();

//     cout<<"Loop to print all the element "<<endl;
//     for(int i:l){
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     cout<<"Another Loop to print all the element "<<endl;
//     for(list<int>::iterator it = l.begin(); it!=l.end(); it++){
//         cout<<*it<<" ";
//     }
//     cout<<endl;

//     cout<<"Printing the first element of the dqeue "<<endl;
//     cout<<*(l.begin())<<endl;

//     cout<<"Size of the List "<<endl;
//     cout<<l.size()<<endl;

//     cout<<"Now we will erese the list "<<endl;
//     list<int>::iterator it = l.begin();
//     list<int>::iterator ite = l.end();
//     l.erase(it,ite);
//     for(list<int>::iterator it = l.begin(); it!=l.end(); it++){
//         cout<<*it<<" ";
//     }
//     cout<<endl;
// }


//  5                       Stack in STL 

// int main(){
//     stack<string> s;

//     s.push("Love");
//     cout<<s.top()<<endl;
//     s.push("babber");
//     s.pop();
//     cout<<s.top()<<endl;

// }



// 6                        Queue in STL

// int main(){
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     cout<<"Size "<<q.size()<<endl;
//     cout<<"First element "<<q.front()<<endl;
//     cout<<"Back element "<<q.back()<<endl;
//     q.pop();
//     cout<<"First element "<<q.front()<<endl;
// }


// 7                       Priority Queue in STL

int main(){

    // Max-Heap

    // priority_queue<int> maxi;

}