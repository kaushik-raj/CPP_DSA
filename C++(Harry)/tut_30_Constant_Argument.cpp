#include<iostream>
using namespace std;
void swap(const int &a , const int &b){         // const will help in seeing that the value of original argument don't change at any cost . 
    a=a+b;
    b=a-b;
    a=a-b;
}

int main () {
    int a=34, b=343;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}