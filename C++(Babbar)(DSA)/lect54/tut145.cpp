#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data ;
        this->next = NULL;
    }
};

class Stack
{
    // Properties
    public: 
    Node* top;

    Stack(){
        top = NULL;
    }
    bool isEmpty() {
        return top == nullptr;
    };
    void push(int data){
        Node* temp = new Node(data);
        temp->next = top;
        top = temp;
    };
    void pop(){
        if(top == NULL){
            cout<<"stack underflow "<<endl;
        }
        else{
            Node* temp = top;
            top=top->next;
            delete temp;
        }
    }
    int peek(){
        if(top==NULL){
            cout<<"Stack empty "<<endl;
        }
        else{
            return top->data;
        }
    }

};
int main(){

    Stack st;
    st.push(22);
    st.push(23);
    st.push(24);
    st.push(25);
    st.push(26);

    cout<<st.peek()<<endl;

    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.isEmpty()<<endl;
    return 0;
};