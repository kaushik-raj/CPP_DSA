\#include<iostream>
using namespace std;
class complex{
    int a ;
    int b;
    public:
        void setdata(int v1, int v2){
            a=v1;
            b=v2;
        }
        void setDataBySum(complex o1 , complex o2){     // Taking argumnet , which are the object of that same class . 
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }
        void printData(){
            cout<<"The complex number is "<<a <<" + "<<b<<"i"<<endl;
        }
};
int main () {
    complex c1, c2,c3;
    c1.setdata(1,2);
    c1.printData();
    c2.setdata(2,4);
    c2.printData();
    c3.setDataBySum(c1 ,c2);            // giving obj as a parameter . 
    c3.printData();
    return 0;
}