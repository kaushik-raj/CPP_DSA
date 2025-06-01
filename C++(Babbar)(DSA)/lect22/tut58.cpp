// code link :- https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
// code number :- 1910
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void removeOccurrences(string& s, string part) {            // this will make chnages on the original string .
    while(s.length()!=0 && s.find(part) <s.length()){
        s.erase(s.find(part),part.length());
    }
    
}

int main(){
    string s ="daabcbaabcbc";
    string part ="abc";
    removeOccurrences(s,part);
    cout<<s<<endl;
}


// string removeOccurrences(string s, string part) {            // This will make change on a new string , and return that new string.
//     while(s.length()!=0 && s.find(part) <s.length()){
//         s.erase(s.find(part),part.length());
//     }
//     return s;
// }
// int main(){
//     string s ="daabcbaabcbc";
//     string part ="abc";
//     string ans = removeOccurrences(s,part);
//     cout<<ans<<endl;
// }