#include<iostream>
using namespace std;

int main () {
    int a =4;
    int b =6 ;
    //              Bitwise Operator
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(~a)<<endl;
    cout<<(~b)<<endl;
    cout<<(a^b)<<endl;

    //              Right shift and left shift 

    cout<< (17>>1) <<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(19<<2)<<endl;

    
    return 0;
}