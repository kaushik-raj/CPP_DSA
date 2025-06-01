#include<iostream>
using namespace std;

int fun(int a){
    int digit=0;
    int count=0;
    while(a!=0){
        digit = a&1;
        if(digit==1){
            count++;
        }
        a=a>>1;
    }
    return count;
}
int main () {
    int a=0 ;
    int b=0;
    int q=0;
    int w=0;
    int e=0;
    cout<<"Enter two number"<<endl;
    cin>>a;
    cin>>b;
    q = fun(a);
    w = fun(b);
    e=q+w;
    cout<<"Total number of digit(1) "<<e<<endl;

    return 0;
}