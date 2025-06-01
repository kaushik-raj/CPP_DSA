#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void say(int n , string ch[]){
    if(n==0){
        return ;
    }

    say(n/10 , ch);
    int digit = n%10;
    cout<<ch[digit]<<" ";
}

int main(){
    string ch[10]={"zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    cout<<"Enter your number "<<endl;
    int n =0;
    cin>>n;
    say(n , ch);
}