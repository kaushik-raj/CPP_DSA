#include<iostream>
using namespace std;
void swap (int a , int b ){
    a=a+b;
    b=a-b;
    a=a-b;
}
int main(){
    int a = 4 , b=5;
    cout<<"a "<<a<<" b "<<b<<endl;          // Before swap was called .
    swap(a,b);                              // Swap was called , but this will do no change , bcz , here we have used call by value , which the actual variable is unchanged . 
    cout<<"a "<<a<<" b "<<b<<endl;          // we can see there is no chnage .
}