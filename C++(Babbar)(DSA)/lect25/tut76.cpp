#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i =5;
    int *p = &i;
    cout<<p<<endl;  // This will print the address stored in p .
    cout<<*p<<endl; // This will print the value stored at the address stored in p .
    p++;
    cout<<p<<endl;  // This will print the increased value of the address of 'i';
    cout<<*p<<endl; // This will print the value present at the next variable , which can be anything .

}