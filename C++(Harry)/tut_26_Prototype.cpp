#include<iostream>
using namespace std;
int sum (int ,int);     // this will give the idea to the compiler , that there is function named sum .  
                        // if this prototype is not there , Then compiler will give an error . 
                        // And it's not necc. to define a variable  , we just have to define the data type of the parameter in the prototype syntex .
int main () {
    int a = 23,b=234;
    int c = sum (a,b);
    cout<<c;
    return 0;
}

int sum (int a , int b){
    int c = a+b;
    return c;
}
