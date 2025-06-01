#include<iostream>
using namespace std;
class complex {
    int a,b ;
    public:
    complex(void){          // Consatructor of the complex class . Always decleare this in public section . 
        a=10;
        b=20;
    };
    void PrintNumber(){
        cout<<"Your Numbers are "<<a<<"+"<<b;
    }
};

int main(){
    complex obj1 ;          // This line will initialize ther constuctor of that class .
    obj1.PrintNumber();
}