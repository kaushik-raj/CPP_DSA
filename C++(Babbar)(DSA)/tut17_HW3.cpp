#include<iostream>
using namespace std;

int fib(int a){
    int q =0;
    int b =0;
    int c =1;
        if(a==1){
            return 0;
        }
        else if(a==2){
            return 1;

        }
        while(a!=2){
            q=b+c;
            b=c;
            c=q;
            a--;
        }
    return q;
}
int main () {
    int a =fib(5);
    cout<<a<<endl;

    return 0;
}