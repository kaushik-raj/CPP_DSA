//code link =      https://www.codingninjas.com/studio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&leftPanelTab=0 

#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int> &arr){
    int ans=0;
    for(int i=0 ; i<arr.size();i++){
        ans=ans^arr[i];    
    }
    for(int i=1 ;i<arr.size();i++){
        ans=ans^i;
    }
    return ans;
}


int main () {
    vector<int> arr {1,2,3,4,4};
    int ans= findDuplicate(arr);
    cout<<ans<<endl;
    return 0;
}