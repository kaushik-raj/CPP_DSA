#include<iostream>
using namespace std;
float sum(int a , float b=3.14){
    float c=a+b;
    return c;
};
int main () {
    int a = 2,b=6.8;
    cout<<sum(a)<<endl;     // it will take the value of b from the default argumnet , given in the sum() deceration .  
    cout<<sum(a,b);         // it will override the value of b in the sum() .
    return 0;
}