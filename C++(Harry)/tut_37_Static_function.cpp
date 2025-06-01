#include<iostream>
using namespace std;
class employee{
    int id;
    static int count;
    public:
        static void getcount(){                     // static function . 
        //cout<<id;                                 // in static function we can't use any variable other than static.
            cout<<"The value of count is "<<count;
        }
};
int employee::count=123;                    // used to declear a static member .

int main () {   
    employee::getcount();               // calling a static function .
    return 0;
}
