#include<iostream>
#include<string>
using namespace std;
class binary{
    string s;                           // by default it is private.
    public :
        void read();
        void chK_bn(void);
        void ones_Compliment(void);
        void display(void);
};
void binary::read(){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}
void binary::chK_bn(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0'&&s.at(i)!='1'){
            cout<<"Incorrect"<<endl;
            exit(0);                        // If this exit is executed , then the another fucntion which was calling it will also get terminated . 
        }
    }
};
void binary::ones_Compliment(){
    chK_bn();                               // Calling a function inside an another function , Without any object . (Nesting of member function.) 
    cout<<"just for fun ";
};

int main () {
    binary b;                               // created an instance of the object .
    b.read();                               // called the function .
    b.ones_Compliment();                    // called this nested function . 
    return 0;
};
