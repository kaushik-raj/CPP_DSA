#include<iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    int bitwiseComplement(int n) {
        int num=0;
        int i =n;
        n=~n;
        do{
            i=i>>1;
            num =num<<1;
            num =num|1;

         }while(i!=0);
        int a = n&num;
        return a;
    }
};
int main () {
    Solution obj ;
    int a =  obj.bitwiseComplement(0);
    cout<<a;
    return 0;
}