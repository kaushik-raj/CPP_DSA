// code link :- https://www.spoj.com/problems/EKO/
#include<iostream>
#include<vector>
using namespace std;

bool istrue(vector<long long int> tree ,long long int m ,long long int mid){
	long long int sum =0;
	long long int totalwood=0;
	for(int i=0 ; i<tree.size();i++){
		if(tree[i] - mid >=0){
			sum+= tree[i] - mid;
			
		}
		if(sum>=m){
			return true;
		}
	}
    return false;
};

long long int EKO(vector<long long int> tree , long long int m){
    int s =0 ;
    int e =0;
    // To find the maximum heigth of the trees .
    for(int i=0 ; i<tree.size();i++){
        if(tree[i]>e){
            e=tree[i];
        }
    }

    int mid = s+ (e-s)/2;
    int ans=0;

    while(s<=e){
        if(istrue(tree , m , mid )){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s+ (e-s)/2;
    }
    return ans;
}

int main () {
    
    vector<long long int> v{4 ,42, 40, 26 ,46};
    int m=20;
    long long int a= EKO(v , m);
    cout<<a<<" ";
    return 0;
}