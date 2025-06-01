// link of the question :: -- https://leetcode.com/problems/reverse-integer/   

#include<iostream>
using namespace std;


class Solution {
public:
    int reverse(int x) {
        int num =0;
       
        while(x!=0){
            int a = x%10;
            if((num> INT_MAX /10) || (num< INT_MIN /10)) {
                return 0;
            }
            num = num *10 +a;
            x/=10;
        }

        return num;
    }
    
};
int main () {
    Solution obj ;
    int a =obj.reverse(-12);
    cout<<a;
    return 0;
}