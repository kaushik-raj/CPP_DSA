// code link :- https://www.naukri.com/code360/problems/minimum-cost-to-make-string-valid_1115770?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findMinimumCost(string str) {

  // base condition
  if(str.length()%2==1){
    return -1;
  };

  stack<char> s;
  for(int i=0;i<str.length();i++){
    char ch  = str[i];

    if(ch == '{'){
      s.push(ch);
    }
    else{
      // ch is closing bracket 
      if(!s.empty() && s.top()=='{'){
        s.pop();
      }
      else{
        s.push(ch);
      }
    }
  }

  // count the no.of open and close brackets 
  int a=0;
  int b=0;
  while(!s.empty()){
    if(s.top()=='{'){
      a++;
    }
    else{
      b++;
    }
    s.pop();
  }

  int ans = (a+1)/2 + (b+1)/2;
  return ans;
}

int main(){
    
}