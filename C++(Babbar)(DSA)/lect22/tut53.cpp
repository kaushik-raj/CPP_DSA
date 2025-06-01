#include<iostream>
using namespace std;

int getlength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverse(char arr[], int size){
    int i=0;
    int j=size-1;
    while(i<j){
        swap(arr[i++],arr[j--]);
    }
}


int main( ){
    char name [20] ;
    cout << "Enter your name "<<endl;
    cin>>name;

    cout << "Your name is ";
    cout << name << endl;


    int len = getlength(name);
    cout<<"Length of the string ";
    cout<<len<<endl;
    
    reverse(name,len);
    cout<<"your reversed name ";
    cout<<name;
    return 0;
} 