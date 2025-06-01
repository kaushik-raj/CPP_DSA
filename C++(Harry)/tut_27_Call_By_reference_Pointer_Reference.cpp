#include<iostream>
using namespace std;
void swap (int *a , int *b){        // storing in a pointer . when we have to store the address of any variable then we use the concept of pointers .
    *a=*a+*b;                       // if we didn't use the * before the variable name then it will be considered as address , but if we are using the * then it is considered as an variable (Stored at that location .)
    *b=*a-*b;
    *a=*a-*b;
}
int main () {
    int a=45;
    int b=35;
    swap(&a, &b);               // giving the address . "&" is used to give the address of any variable .
    cout<<a<<" "<<b;
    return 0;
}