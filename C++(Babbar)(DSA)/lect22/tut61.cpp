// code link :- https://leetcode.com/problems/string-compression/
//  code number:- 443

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
        int i=0;
        int ansIndex=0;
        int n = chars.size();
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            chars[ansIndex++]=chars[i];
            int count = j-i;
            if(count>1){
                string cht = to_string(count);
                for( char ch : cht){
                    chars[ansIndex++]=ch;
                }
            }
            i=j;
        }
        return ansIndex;
    }

int main(){
    vector<char> ch = {'a','a','b','b','c','c','c'};
    int ans = compress(ch);
    cout<<ans<<endl;
    for(int i=0;i<ch.size();i++){
        cout<<ch[i]<<" ";
    }
}