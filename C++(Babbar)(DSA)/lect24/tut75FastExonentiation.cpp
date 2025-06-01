// code link :- https://www.naukri.com/code360/problems/modular-exponentiation_1082146?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_7
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int modularExponentiation(int x, int n, int m) {
	int res =1;

	while(n>0){
		if(n&1){
			res = (1LL *(res) * (x%m))%m;
		}
		x = (1LL * x%m *x%m)%m;
		n=n>>1;
	}
	return res;
}

int main(){
    
}