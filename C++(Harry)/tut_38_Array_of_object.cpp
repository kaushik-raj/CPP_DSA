#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    static int count;
    public:
    
        void setId(){
            salary =122;
            cout<<"Enter the id of emp: "<<endl;
            cin>>id;
            count++;
        }
        void getid(){
            cout<<"The id of this employee is "<<id<<endl;
        }
        static void getCount(){                     // created a static function so that we can get the total no.of employee .
            cout<<"The total no.of employee are :- "<<endl;
            cout<<count<<endl;
        }
};
int employee::count;            // just a syntax to initiallies the variable . 
int main () {
    employee fb[4];             // created an array which stored the object of employee class . 
    for(int i=0; i<4;i++){
        fb[i].setId();
        fb[i].getid();
    }
    employee::getCount();         // calling a static function . 
    return 0;
}