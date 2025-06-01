// code link :- https://www.geeksforgeeks.org/problems/circular-tour-1587115620/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int tour(petrolPump p[],int n)
    {
        int deficit = 0;
        int balance = 0;
        int front = 0;
        
        for(int rear =0;rear<n;rear++){
            balance += p[rear].petrol-p[rear].distance;
            if(balance<0){
                deficit += balance;
                front=rear+1;
                balance=0;
            }
        }
        if(deficit+balance>=0){
            return front;
        }
        else{
            return -1;
        }
    }

int main(){
    
}