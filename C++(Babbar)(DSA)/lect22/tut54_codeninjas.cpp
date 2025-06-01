// code link :- https://leetcode.com/problems/valid-palindrome/
// code link :- https://www.naukri.com/code360/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5
// code number LC :- 125


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s)
{
    int st=0;
    int en=s.size()-1;
    while(st<=en){

        while(st < en && !isalnum(s[st])){
            st++;
        };
        while(st < en && !isalnum(s[en])){
            en--;
        };
        
        char left =tolower((s[st]));
        char right=tolower((s[en]));

        if(left!=right){
            return false;
        }
        st++;
        en--;
    }
    return true;
}

int main(){
    string s= "c1 O$d@eeD o1c";
    cout<<checkPalindrome(s);
}