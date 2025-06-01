#include<iostream>
using namespace std;
class anshu;        // Bcz in line 6 we have used the named of anshu , but till that we have not created the class named anshu , we we just use this syntex to an idea to the complier that there is a function named anshu .
class ankit{
    int money = 20;
    friend void rahul(ankit , anshu);   // This is the syntx we have to write in the class in which we are making it a friend function . 
};
class anshu{
    int money = 10;
    friend void rahul(ankit , anshu);   // This is the syntx we have to write in the class in which we are making it a friend function . 
};

void rahul( ankit ob1 , anshu ob2){     // We have created this function , which has the class object as parameter . 
    int money = ob1.money + ob2.money;
    cout<<"The sum is "<<money<<endl;
};

int main(){
  ankit obj1 ; anshu obj2;
  rahul(obj1,obj2);                 // We are just calling the function . 

};