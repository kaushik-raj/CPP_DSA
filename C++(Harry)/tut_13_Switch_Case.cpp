#include<iostream>
using namespace std;

int main () {
    int age;
    cout<<"Enter you age ";
    cin>>age;
    switch(age){
       case 18:
        cout<<"Just a kid";
        break;
       case 22:
        cout<<"adult";
        break;
       case 23:
        cout<<"Big";
        break;
        default:                            // this will run , if there no such case that Satisfies the variable value . 
        cout<<"No match"<<endl;
        break;
    }

    return 0;
}