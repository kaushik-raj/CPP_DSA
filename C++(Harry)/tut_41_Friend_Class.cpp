#include<iostream>
using namespace std;
class complex;
class calculator{
    int a,b ;
    public:
        // int add(int a ,int b){
        //     return (a+b)
        // }
        int sumRealcomplex(complex ,complex);
        int sumcompComplex(complex ,complex);

};

class complex{
    int a,b;
    friend class calculator;
    public :
        void setNumber(int n1 ,int n2){
            a=n1;
            b=n2;

        }
        void printNumber(){
            cout<<"Your no. is"<<a<<" + "<<b<<"i"<<endl;
        }

};
int calculator::sumRealcomplex(complex o1 , complex o2){
    return (o1.a+o2.a);
}
int calculator::sumcompComplex(complex o1 , complex o2){
    return (o1.b+o2.b);
}
int main () {
    complex o1 , o2;
    o1.setNumber(1,2);
    o2.setNumber(12,13);
    calculator cal;
    int a = cal.sumRealcomplex(o1 ,o2);
    int b = cal.sumcompComplex(o1,o2);
    cout<<"Sum of Real part is "<<a<<" Sum of complex part is "<<b<<endl;
    return 0;
}