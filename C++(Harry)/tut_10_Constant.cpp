#include<iostream>
using namespace std;

int main () {
    const int a = 245;
    // a=3233;              // this will throw an error , bcz  we are trying to change a value of a const variable which we can't change .
    cout<<a<<endl;
    return 0;
}