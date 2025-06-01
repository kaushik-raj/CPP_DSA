#include<iostream>
using namespace std;


int main(){
    int b = 20;
    int *a=&b;
    cout<<&b<<endl;         // Address of B
    cout<<a<<endl;          // Address That it is storing , which is of B.
    cout<<*a<<endl;         // Value at the Address that was stored in a.
    cout<<&a<<endl;         // Address of a.
};