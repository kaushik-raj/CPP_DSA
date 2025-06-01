#include<iostream>
using namespace std;
union money{            // It is same as Struc , but the only difference is that in union , at a single time you can use only one of the variable.
    int id;
    char favchar;
    float salary;
};

int main () {
    money m;                // Here we have creating the instance of the Union .
    m.id=34;
    m.favchar='Q';          // This is declared later . so, this will be cosidered as applied .
    cout<<m.id<<endl;       // This will print something else .
    cout<<m.favchar<<endl;  // this will print the real value of favchar .
    return 0;

}