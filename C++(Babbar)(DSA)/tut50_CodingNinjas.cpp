// code link :- https://www.naukri.com/code360/problems/sum-of-two-arrays_893186?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_4



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	vector<int> q;
    int carry=0;
    int i=n-1;
    int j=m-1;
    while(i>=0 && j>=0){
        int nums=a[i]+b[j]+carry;
        carry=nums/10;
        int ans=nums%10;
        q.push_back(ans);
        i--;
        j--;
    }
    while(i>=0){
        int nums=a[i]+carry;
        carry=nums/10;;
        int ans = nums%10;
        q.push_back(ans);
        i--;
    }
    while(j>=0){
        int nums=b[j]+carry;
        carry=nums/10;
        int ans=nums%10;
        q.push_back(nums);
        j--;
    }
    if(carry!=0){
        q.push_back(carry);
    }

    int s=0;
    int e=q.size()-1;
    while(s<e){
        swap(q[s++],q[e--]);
    }
    return q;
};

int main(){
    vector<int> a={1,2,3,4};
    int n= a.size();
    vector<int> b={6};
    int m = b.size();
    vector<int> q=findArraySum(a,n,b,m);
    for(int i=0;i<q.size();i++){
        cout<<q[i];
    }
    cout<<endl;
}