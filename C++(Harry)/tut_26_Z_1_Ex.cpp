#include<iostream>
using namespace std;
int sum (int , int) ;       // here we have created an Function Prototype .
int main(){
    int num1 = 20;
    int num2 = 30 ;
    cout<<"the sum is "<< sum(num1 ,num2);          // we have called the function . these are Actual Parameters(Arguments).
}

int sum (int a , int b){                        // we have created the function .   These are Formal Parameters .
    return a+b;
}
