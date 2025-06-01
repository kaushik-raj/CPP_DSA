#include<iostream>
#include<iomanip>
using namespace std;

int main () {
    int a = 1, b=34 ,c=1234;
    cout<<"a "<<a<<endl;
    cout<<"b "<<b<<endl;
    cout<<"c "<<c<<endl;
    cout<<"a "<<setw(4)<<a<<endl;
    cout<<"b "<<setw(4)<<b<<endl;
    cout<<"c "<<setw(4)<<c<<endl;
    return 0;
}