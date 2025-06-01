#include<iostream>
using namespace std;

int main(){
    cout<<"Enter a amount: "<<endl;
    int a ,b , n100 , n50 , n10 ,n1 ; 
    cin>>a;

    cout<<"Enter the note that you are looking for:  ";
    cin>>b;
    switch(b){
        case 100:   
                    n100 = a/100;
                    cout<<"No.of note required to acehive the amount of 100 in "<<n100<<endl;
                    a = a - n100*100;
        case 50:
                    n50 = a/50;
                    cout<<"No.of note required to acehive the amountof 50  in "<<n50<<endl;
                    a = a-n50*50;
        case 10:    
                    n10 = a/10;
                    cout<<"No.of note required to acehive the amount of 10  in "<<n10<<endl;
                    a = a-n10*10;
        case 1: 
                    n1 = a;
                    cout<<"No.of note required to acehive the amount of 1 in "<<n1<<endl;
                    a = a-n1*1;

        default:        
                    cout<<" ";


    };


    return 0;
}