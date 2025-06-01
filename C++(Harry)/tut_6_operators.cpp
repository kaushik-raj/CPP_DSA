#include<iostream>
using namespace std;

int main () {
    cout<<"Enter two numbers"<<endl;
    int a ;
    int b;
    cin>>a;
    cin>>b;
    //Arithmentic Operator
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a%b<<endl;
    cout<<a++<<endl;
    cout<<a--<<endl;
    cout<<++a<<endl;
    cout<<--a<<endl;


    cout<<"------------------------------------------------------------------------------------------------------";
     
    //Comprasion Operation
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;

    return 0;
}