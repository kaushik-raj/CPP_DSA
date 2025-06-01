// code link :- https://leetcode.com/problems/permutation-in-string/description/
// code number :- 567
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// to check if the arrays are same or not 
bool check(int a1[26], int a2[26]){
    for(int i=0;i<26;i++){
        if(a1[i]!=a2[i]){
            return 0;
        }
    }
    return 1;
}
bool checkInclusion(string s1, string s2) {
    // to first count the char in the s1
    int arr1[26]={0};
    for(int i=0;i<s1.length();i++){
        int index = s1[i]-'a';
        arr1[index]++;
    };

    // 
    int i=0;
    int windowsize=s1.length();
    int arr2[26]={0};
    // first adding the count of the first window 
    while(i<windowsize && i<s2.length()){
        int index = s2[i] -'a';
        arr2[index]++;
        i++;
    }
    // to check if the first window is the answer or not 
    if(check(arr1,arr2)){
        return 1;
    }
    // moving window to the right
    while(i<s2.length()){
        // adding the right most char in the count
        int index=s2[i]-'a';
        arr2[index]++;
        // removing left most char count 
        int index2=s2[i-windowsize]-'a';
        arr2[index2]--;
        i++;
        if(check(arr1,arr2)){
            return 1;
        }
    }
    return 0;
}
int main(){
    string s1="ab";
    string s2="eidabaooo";
    bool ans =checkInclusion(s1,s2);
    cout<<ans<<endl;
}