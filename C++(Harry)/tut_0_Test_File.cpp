#include<iostream>
using namespace std;


int main(){
    int b = 20;
    int *a;
    a=&b;
    cout<<&b<<endl;
    cout<<a<<endl;
    cout<<*a<<endl;
    cout<<&a<<endl;
}