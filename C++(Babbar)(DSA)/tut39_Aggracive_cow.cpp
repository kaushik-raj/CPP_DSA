// code link : -    https://www.codingninjas.com/studio/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&leftPanelTab=0
#include<iostream>
using namespace std;

bool istrue(vector<int> &stalls, int k , int mid){
    int cowcount=1;
    int lastPos=stalls[0];
    for(int i=0 ;i<stalls.size();i++){
        if(stalls[i]-lastPos >=mid){
            cowcount++;
            if(cowcount==k){
                return true;
            }
            lastPos=stalls[i];
        }
    }
    return false;
};

int aggressiveCows(vector<int> &stalls, int k)
{
   sort(stalls.begin() , stalls.end() );

   int s=0; 
   int e=0;

   for(int i =0; i<stalls.size();i++){
       e+=stalls[i];
   }
   
   int mid = s + (e-s)/2;
   int ans =-1;

   while(s<=e){
       if(istrue(stalls , k ,mid)){
           ans = mid;
           s = mid+1;
       }
       else{
           e= mid-1;
       }
        mid = s + (e-s)/2;
   }
   return ans;
}


int main () {
    
    return 0;
}