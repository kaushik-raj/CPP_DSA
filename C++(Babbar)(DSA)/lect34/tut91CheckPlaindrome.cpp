// code link :- https://www.naukri.com/code360/problems/check-palindrome_920555?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_13
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
//  check The Palindrome
bool ChPalindrome(string str , int s , int e){
    if(s>e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    s++;
    e--;
    return ChPalindrome(str , s , e);
};
// converting DigitTostring
string ConvertDigit(long long N){
    string s = "";
    while(N!=0){
    s.push_back((N&1) ? '1' : '0');
    N/=2;
    }
    return s;
}
bool checkPalindrome(long long N)
{
	string s = ConvertDigit(N);
	return ChPalindrome(s ,  0,s.length()-1);

}