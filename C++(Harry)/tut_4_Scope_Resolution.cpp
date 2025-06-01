#include<iostream>
using namespace std;
int c=45;
int main () {
    int c = 234;
    cout<<c;        // It will print 234; 
    cout<<endl;
    cout<<::c;      // It will print 45 , as we have used scope resolution operator in it . // It will represent the global variable . 
    return 0;
}