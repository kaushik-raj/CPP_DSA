#include<iostream>
using namespace std;
int sum (int a , int b){
    int c = a+b;
    return c;
}
int main () {
    int a = 23,b=234;
    int c = sum (a,b);
    cout<<c;
    return 0;
}