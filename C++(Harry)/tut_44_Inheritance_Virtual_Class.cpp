#include<iostream>
using namespace std;
class Student{
    
    public:
        int roll;
        void set_num(int a){
            roll=a;
        };
        void Print_num(void){
            cout<<"Your roll is "<<roll<<endl;
        };
};
class Test: virtual public Student{
    
    public:
        float maths, phy;
        void set_marks(float m1 , float m2){
            maths = m1;
            phy = m2; 
        };
        void print_marks(void){
            cout<<"Your result is here "<<endl;
            cout<<"Maths "<<maths<<endl;
            cout<<"Physics "<<phy<<endl;

        };
};
class sports:virtual public Student{
    
    public:
        float score;
        void set_score(float sc){
            score=sc;
        };
        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        };
};
class Result: public Test,public sports{

    public:
    void display(void){
        float Total;
        Total = maths + phy +score;
        Print_num();
        print_marks();
        print_score();
        cout<<"Your total marks is "<<Total<<endl;
    };
};

int main(){
    Result harry;
    harry.set_num(543);
    harry.set_marks(94.0 , 98.0);
    harry.set_score(91);
    harry.display();
};