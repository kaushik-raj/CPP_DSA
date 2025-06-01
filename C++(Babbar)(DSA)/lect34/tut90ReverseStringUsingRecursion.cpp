// code link :- https://www.naukri.com/code360/problems/reverse-the-string_799927?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_13&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(string &sh , int i , int j){
    if(i>j){
        return;
    }
    swap(sh[i],sh[j]);
    i++;
    j--;
    reverse(sh , i , j);
}
int main() {
    string name = "abcde";
    reverse(name , 0 ,name.length()-1);
    cout<<name<<endl;
    return 0;
}