#include<iostream>
using namespace std;
class Employee{
    private:
        int a, b,c;
    public:
        int d,e;
        void setData(int, int,int);      // only Declaration , Body will be defined outside the class . 

        void getData(){
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
            cout<<d<<endl;
            cout<<e<<endl;

        }
};
void Employee:: setData(int a1 , int b1 , int c1){            //  Here , we have define the function setdata().
    a=a1;
    b=b1;
    c=c1;
};
int main () {
    Employee harry ;
    // harry.a=32;  // This will throw an error as "a" variable is private , and can't be defined outside the class .
    harry.d=34;     // we can define it outside the class  , as it is public in class .
    harry.e=23;     // we can define it outside the class  , as it is public in class .
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}