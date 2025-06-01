#include<iostream>
using namespace std;

int getlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}

int main( ){
    char name [20] ;
    cout << "Enter your name"<<endl;
    cin>>name;

    cout << "Your name is ";
    cout << name << endl;


    int len = getlength(name);
    cout<<"Length of the string ";
    cout<<len;
    
    return 0;
}