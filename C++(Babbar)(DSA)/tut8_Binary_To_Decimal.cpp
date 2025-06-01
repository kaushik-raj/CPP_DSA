#include<iostream>
#include<math.h>
using namespace std;

int main () {
    int n;
    cout<<"Enter a decimal number"<<endl;
    cin>>n;
    int ans=0;
     int i=0;
     int base=1;
    while(n!=0){
       
        int bit = n&1;                                  // taking the last binary digit into bit .
        ans = (bit * base) + ans;                       //    reversing the digits stored in bit , and storing it in ans .
        n=n>>1;                                         // right shift
        i++;                                            // just to count the total no.of bits .
        base*=10;
    }
    cout<<ans<<endl;
    cout<<"Total no.of Bit "<<i<<endl;
    return 0;
}