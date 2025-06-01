#include<iostream>
using namespace std;
void swap(int &a , int &b){         // Reference variable
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
