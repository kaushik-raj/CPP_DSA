#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Stack{
    // properties
    public:
        int *arr;
        int top;
        int size;
    
    // Behaviour
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top =-1;
    };


    void push(int element){
        if(size-top >1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack OverFlow "<<endl;
        }
    };


    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow "<<endl;
        }
    }


    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty "<<endl;
            return -1;
        }
    }


    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    Stack st(5);
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

}