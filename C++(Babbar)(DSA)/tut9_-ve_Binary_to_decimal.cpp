#include<iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int ans=0;
    int base=1;
     if(n>0){
        while(n!=0){
            int bit = n&1;
            ans = (bit * base) + ans ;
            n=n>>1;
            base*=10;
        
        }
        cout<<"The binary of this +ve number is "<<ans<<endl;
    }
    else{
        n=-n;
        while(n!=0){
            int bit = n&1;
            ans = (bit * base) + ans ;
            n=n>>1;
            base*=10;
            
        }
        ans=(1*base)+ans;
        cout<<"The binary of the -ve number will be "<<ans<<endl;
        
    }
    
    return 0;
}