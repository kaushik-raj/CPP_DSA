#include<iostream>
using namespace std;

int main () {
    int a = 545;
    float b = 45.454;
    cout<<(int)b<<endl;         // float to int
    cout<<a+b<<endl;
    cout<<a+(int)b;             // float to int 
    return 0;
}