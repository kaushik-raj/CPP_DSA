#include<iostream>
using namespace std;

int main () {
    float x = 455;
    float &y = x;   // using this '&' , 'y' startes to point at the same location as of 'a' .
    y=423;          // If we make changes in the values of 'y' , 'x' will also change according to it .
    cout<<x<<endl;
    cout<<y<<endl;


    return 0;
}