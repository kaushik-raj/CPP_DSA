#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
        void setdata(int v1, int v2){
            a=v1;
            b=v2;
        }
       
        void printData(){
            cout<<"The complex number is "<<a <<" + "<<b<<"i"<<endl;
        }

        friend complex sumComplex(complex , complex);        // it is a friend function , this will help to access the private members of the class even out of this class . 

        
};
complex sumComplex(complex o1 , complex o2){                // here we are using the values of a , b of the two differnen obj . Even out of the class . 
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main () {
    complex c1 , c2 ,c3;
    c1.setdata(12,13);
    c2.setdata(14,15);
    c3=sumComplex(c1 , c2);
    c3.printData();
    return ;
}