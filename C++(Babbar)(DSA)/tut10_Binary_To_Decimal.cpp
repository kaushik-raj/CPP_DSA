                        // Using math.h
#include<iostream>
#include<math.h>
using namespace std;

int main () {
   int i=0;
   int n ;
   cout<<"Enter a Binary number "<<endl;
   cin>>n;
   int ans=0;
   while(n!=0){
    int temp = n%10;
    ans= temp *pow(2,i) +ans;
    n=n/10;
    i++;
   }
   cout<<ans;
}


                        // without using math.h
// #include<iostream>
// using namespace std;

// int main () {
//     int n ;
//     cout<<"Enter a Binary number "<<endl;
//     cin>>n;
//     int ans=0;
//     int base=1;
//     int i=0;
//     while(n!=0){
//         int bit = n%10;
//         for(int j=1;j<=i;j++){
//             base*=2;
//         }
//         ans += bit*base;
//         n/=10;
//         i++;
//         base=1;
//     }
//     cout<<ans;
//     return 0;
// }
