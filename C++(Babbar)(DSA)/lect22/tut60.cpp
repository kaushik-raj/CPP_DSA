// code link :- https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
// code number :- 1047

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s){
    int i =0;
    while(i<s.size()){
        if(s[i]==s[i+1]){
            s.erase(i , 2);
            if(i>0){
                i--;
            }
        }
        else{
            i++;
        }
    }
    return s;
}

int main(){
    string s = "abbaaaca";
    string str = removeDuplicates(s);
    cout<<str<<endl;

}