#include<iostream>
using namespace std;
struct Employee                 // It is used to define a group variable in a single name .
{
    int age;
    int Id;
    double salary;
    char firstName;

};

int main () {
    Employee harry;          // we just created a instance of a strut
    harry.age=23;
    harry.firstName='d';
    harry.Id=231231;
    harry.salary=2321.1243;
    cout<<harry.firstName<<endl;
    cout<<harry.age<<endl;
    cout<<harry.Id<<endl;
    cout<<harry.salary<<endl;
    
    return 0;
}