#include<iostream>
using namespace std;
class Employee{
    public:
    int id;                     // this is a normal variable , which means it's value changed accorrding to its object .
    static int count;           // this is a static variable , which means count is same for all the object of the class . 
    public:
      void setData(){
        cout<<"Enter id "<<endl;
        cin>>id;
        count++;
    };
    void getdata(){
        cout<<"the id is "<<id<<" emp.no "<<count<<endl;

    };
};
int Employee::count;        // where we can give value to the static variable . but this time we leave it to it's default value which is 0 for int .

int main () {
    Employee harry , kaushik;
    harry.setData();
    harry.getdata();
    kaushik.setData();
    kaushik.getdata();
    harry.getdata();            // Here we can see that the count is still printing 2 , for harry which was 1 in the first time.
    return 0;
}