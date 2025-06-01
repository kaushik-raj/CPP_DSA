#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<array>
float mySqrt(float x);
float morePre(float a , float b);

int main () {
    vector<int> a={1,0,2,4,5,7,9};
    for(int i=0 ;i<a.size();i++){
        cout<<a[i] <<" ";
    }
    cout<<endl;
    cout<<lower_bound(a.begin() , a.end() ,3) -a.begin();

}

    float mySqrt(float x) {
        float s = 0;
        float e = x;
        float mid = s + (e-s)/2;
        float ans = 0;
        float squ= mid*mid;
         if(x==1){
                return 1;
        }
        while(s<=e){
            squ= mid*mid;
            cout<<ans*ans<<endl;
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
        };

        if(ans*ans == x){
            cout<<ans*ans;
        return ans;
        
        }
        else{
            float a= morePre(ans,x);
            return a ;
        }
        
    };


float morePre(float a , float b){
    float s= 0.0;
    float e = 0.9;
    float mid = s + (e-s)/2;
    float sqr =mid*mid;
    float ans = 0;
    while(s<=e){
        sqr = (a+mid)*(a+mid);
        if(sqr == b){
            ans=sqr;
            return ans;
        }
        if(sqr< b){
            ans = sqr;
            s= mid+0.1;
        }
        else{
            e = mid-0.1;
        }
        mid  = s+ (s-e)/2;
    }
    return ans;
}
