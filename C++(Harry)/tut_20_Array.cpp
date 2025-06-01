#include<iostream>
using namespace std;
void display(int arr[],int a){
    for(int i=0 ; i<a;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main () {
    int marks[] = {1,2,3,4,5,6,7,8};
    int marks1[4];
    marks1[0]=23;
    marks1[1]=232;
    marks1[2]=23;
    marks1[3]=233;
    display(marks,8);
    display(marks1,4);
    
    return 0;
}