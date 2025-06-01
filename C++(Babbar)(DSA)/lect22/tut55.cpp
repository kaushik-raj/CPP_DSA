// code link :- https://leetcode.com/problems/reverse-words-in-a-string-ii/description/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string reverseTheWord(string str){
    int s = 0;
    string str1;
    for(int e=0;e<str.size();e++){
        if(str[e]==' ' || e==str.size()-1){
            int stemp = s;
            int etemp = e-1;
            if(e==str.size()-1){
                etemp=e; 
            }
            while(stemp<=etemp){
                str1.push_back(str[etemp--]);  
            }
            str1.push_back(' ');
            s=e+1;
        }
    }
    return str1;
}

int main(){
    string s = "My name is Love";
    string ans = reverseTheWord(s);
    cout<<ans<<endl;
}