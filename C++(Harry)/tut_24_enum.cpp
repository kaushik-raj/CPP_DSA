#include<iostream>
using namespace std;

int main () {
    enum Meal{Breakfast,lunch,dinner};
    cout<<lunch<<endl;  //1 -> output .
    Meal m1 = dinner;   // Creating a variable with data type 'Meal' , and name m1 .
    cout<<m1<<endl;     // 2->output .
    return 0;
}