#include<iostream>
using namespace std;

int main () {
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age<18){
        cout<<"You are new born ";
    }
    else if(age==18){
        cout<<"You are just a kid";
    }
    else if(age>35){
        cout<<"You are too old ";
    }
    else{
        cout<<"You can join the party";
    }

    return 0;
}