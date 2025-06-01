#include<iostream>
using namespace std;

int main () {
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    bool isprime=1;

    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime==0)
        cout<<"Is not a prime"<<endl;
    else
        cout<<"Is a prime "<<endl;
    return 0;
}