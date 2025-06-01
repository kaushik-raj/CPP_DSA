#include<iostream>
using namespace std;

int main () {

    for(int i=0;i<4;i++){
        if(i==2){
        break;                  // when this break will execute ,the compiler will just come out the loop .
        };
        cout<<i<<endl;
    }
    return 0;
}