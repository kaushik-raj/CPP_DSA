#include<iostream>
using namespace std;

int main () {
    int marks[4];
    marks[0]=23;
    marks[1]=232;
    marks[2]=23;
    marks[3]=233;
    int *p=marks;       // marks is already a address , that is why we don't the '&' in front of marks . 
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    cout<<*(++p)<<endl;
    cout<<*(++p)<<endl;
                        // In all the above 4 syntex , we used * so that it will print the values at the location , not only the address .
    cout<<*marks;       // This also returns the first element of the array . 
    // cout<<*(++marks);        // This is not possible . 
    return 0;
    
}