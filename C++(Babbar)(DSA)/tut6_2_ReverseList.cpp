#include <cmath>
#include<iostream>
using namespace std;
    
    int main(){
        int arr[3] ={1,2,3};
        int n=3;
        int ans=0;
		int temp =0;
        for(int i=0 ; i<n;i++){
            ans = (arr[i]*(pow(10,n-1-i))) + temp ;
            temp =ans ;
        }
        cout<<ans;
}