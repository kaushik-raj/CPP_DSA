// code link :- https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/1308918803/
// code number :-17
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(string digit,vector<string>& ans , string output , int index, string mapping[]){
    // Base case
    if(index>=digit.length()){
        ans.push_back(output);
        return ;
    }

    // Proccessing and recursive call
    int number = digit[index] -'0'; // '0' bcz , we want to chnage the string into integer.
    string value = mapping[number];

    
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(digit, ans , output , index+1 , mapping);
        output.pop_back();
    }

}

vector<string> letterCombination(string digit){
    vector<string> ans;
    if(digit.length()==0){
        return ans;
    }

    string output ="";
    int index =0;

    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digit, ans , output , index , mapping);
    return ans ;
}

int main(){
    string number = "123";
    vector<string> ans = letterCombination(number);
    for(int i=0 ; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}