//                      m1


// #include<iostream>
// using namespace std;

// int main () {
//     int k=1;
//     int sum =0;
//     for(int i=0;i<10;i++){
//         int j=k+sum;
//         cout<<j<<" ";
//         k=sum;
//         sum=j;
//     }
// }


//                  M2


#include<iostream>
using namespace std;
int main(){
    int a=0,b=1;
    cout<<b<<" ";
    for(int i=0 ; i<10 ;i++){
        int sum = a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}