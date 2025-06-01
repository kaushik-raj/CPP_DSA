// code link :- https://www.naukri.com/code360/problems/valid-parenthesis_795104?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string s)
{
    stack<char> st;
    for(int i=0 ; i<s.length();i++){
        char ch = s[i];
        // if opening bracket then push in stack
        if(ch =='(' || ch=='{' || ch =='['){
            st.push(ch);
        }
        // if there is closing bracket 
        else{
            // check whether stack is empty or not
            if(!st.empty()){
                char top = st.top();
                // check whether they match or not 
                if((ch==']' && top=='[') || 
                   (ch==')' && top=='(') ||
                   (ch=='}' && top=='{') ){
                    
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    // now at last check whether the stack is empty or not.
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
}