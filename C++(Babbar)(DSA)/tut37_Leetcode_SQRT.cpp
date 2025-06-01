//  code link :- https://leetcode.com/problems/sqrtx/

    int mySqrt(int x) {
        int s = 0;
        int e = x;
        long long int mid = s + (e-s)/2;
        int ans = 0;
        long long int squ= mid*mid;
         if(x==1){
                return 1;
        }
        while(s<=e){
            squ= mid*mid;
            if(squ==x){
                ans = mid;
                return ans;
            }
            if(squ<x){
                ans = mid;
                s = mid+1;
            }
            else{
                e =mid-1;
            }

            mid = s + (e-s)/2;
        }
        return ans;
    };

#include<iostream>
using namespace std;

int main () {
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    int ans = mySqrt(num);
    cout<<"output is "<<endl;
    cout<<ans;
    return 0;
}