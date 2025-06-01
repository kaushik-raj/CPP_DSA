#include<iostream>
using namespace std;

int main () {
    int a =3;
    cout<<"Address of a is:"<<&a<<endl;       // &-> Address of the 'a' .
    int *p = &a;                              // at this point , '*p' is used to create a pointer that point to the location of a.
    cout<<"Value of a "<<*p<<endl;            // at this point , '*' is used before to so that it will print the value at that address . 
    cout<<"Address of a is "<<p<<endl;        // if we just print p , it will print the address to which it will be pointing . 
    return 0;                                 
}
