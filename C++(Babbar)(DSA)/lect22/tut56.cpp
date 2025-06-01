#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char getmaxchr(string s){
    int arr[26]={0};
    for(int i=0 ;i<s.length();i++){
        int num = s[i] -'a';
        arr[num]++;
    }
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    return ans+'a';
}

int main(){
    string s ="kaushik";
    char ch = getmaxchr(s);
    cout<<ch<<endl;
}