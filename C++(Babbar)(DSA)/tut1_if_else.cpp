#include <iostream>
using namespace std;

int main () {
    cout<<"Enter a letter"<<endl;
    char ch;
    cin>>ch;
    if(ch>96 && ch<123){
        cout<<"Lower case letter";
    }
    else if(ch>64 && ch<91){
        cout<<"Upper case letter";
    }
    else if(ch>47 &&ch<58){
        cout<<"Numeric";
    }
    else{
        cout<<"Symbol";
    }
    return 0;
}