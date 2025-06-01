#include<iostream>
using namespace std;
int g=234;
void sum(){
    int a ;
    cout<<g<<endl;

};

int main () {
    int g=2332;
    cout<<g<<endl;      // it will print 2332
    sum();              // It will print 234
    return 0;
}