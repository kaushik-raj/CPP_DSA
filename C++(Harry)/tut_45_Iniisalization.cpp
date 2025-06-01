#include<iostream>
using namespace std;

class test{
    int a , b ;
    public:
    void getData(){
        cout<<a<<" "<<b;
    };
    test(int i, int j):a(i),b(j){};
};
int main(){
    test t1(1233,3412);
    // t1.setData(123, 132);
    t1.getData();
}
