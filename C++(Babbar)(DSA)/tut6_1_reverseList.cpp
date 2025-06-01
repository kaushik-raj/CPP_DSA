#include <cmath>
#include<iostream>
using namespace std;
    
    // doing same thing 
int rev(int arr[] , int size){
    int sum = 0;
    for(int i=0 ; i<size+1 ; i++){
        sum += arr[size-i] * pow(10,size-i);
    }
    return sum;
}

    int main(){
        int arr[3] ={1,2,3};
        int n=3;
        int ans=0;
		int temp =0;
        for(int i=0 ; i<n;i++){
            ans =( arr[i]*pow(10,i) ) + temp;
			temp=ans;

        }
        cout<<ans;
}