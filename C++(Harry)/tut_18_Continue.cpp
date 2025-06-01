#include<iostream>
using namespace std;

int main () {
    for(int i=0;i<4;i++){
        if(i==2){
            continue;       // when this continue will execute , compiler will just skip that iteration .
        }
        cout<<i<<endl;
    }
    return 0;
}