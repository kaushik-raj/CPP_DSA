#include<iostream>
using namespace std;
int sum(int a , int b){
    return a+b;
}
int sum(int a , int b, int c){
    return a+b+c;
}
int main () {
   cout<< sum(34,34)<<endl;         // call the first function
    cout<<sum(234,23,21);           // call the second function 
    return 0;
}