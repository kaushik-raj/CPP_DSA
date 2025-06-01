#include<iostream>
using namespace std;
class complex {
    int a,b ;
    public:
    complex(int x, int y){          // Consatructor of the complex class . Always decleare this in public section . 
        a=x;
        b=y;
    };
    void PrintNumber(){
        cout<<"Your Numbers are "<<a<<"+"<<b<<endl;
    }
};

int main(){
    complex obj1(10,20) ;          //This is an Implicit Call. This line will initialize ther constuctor of that class .
    obj1.PrintNumber();

    complex obj2 = complex(20,30);  // This is an Explicit call . 
    obj2.PrintNumber();
}
